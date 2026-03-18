/*
 * XREFs of Endpoint_Disable_Internal @ 0x1400047C4
 * Callers:
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x140004F50 (Endpoint_Enable.c)
 * Callees:
 *     TR_Disable_Internal @ 0x140004708 (TR_Disable_Internal.c)
 *     Endpoint_IsCandidateForSplitTransactionHSIIWorkaround @ 0x140004CC8 (Endpoint_IsCandidateForSplitTransactionHSIIWorkaround.c)
 *     WPP_RECORDER_SF_ddql @ 0x14003110C (WPP_RECORDER_SF_ddql.c)
 *     Controller_ClearHSIIWorkaround @ 0x14003FA90 (Controller_ClearHSIIWorkaround.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x140046CE4 (XilEndpoint_FreeStreamContextArray.c)
 */

void __fastcall Endpoint_Disable_Internal(__int64 *a1, char a2, int a3)
{
  char v3; // si
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int i; // ebp

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddql(*(_QWORD *)(*a1 + 72), a2, a3, *(unsigned __int8 *)(a1[2] + 143));
  if ( ((*((_DWORD *)a1 + 32) - 3) & 0xFFFFFFFB) == 0 )
  {
    v7 = 120LL * (unsigned int)(*(_DWORD *)(a1[2] + 44) - 1);
    v8 = *(_QWORD *)(*(_QWORD *)(*a1 + 152) + 48LL);
    if ( *(_DWORD *)(v7 + v8 + 108) )
      _InterlockedDecrement((volatile signed __int32 *)(v7 + v8 + 108));
  }
  if ( (unsigned __int8)Endpoint_IsCandidateForSplitTransactionHSIIWorkaround(a1) )
  {
    if ( *((_BYTE *)a1 + 38) )
    {
      v9 = *a1;
      *((_BYTE *)a1 + 38) = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 1056), 0xFFFFFFFF) == 1 )
        Controller_ClearHSIIWorkaround();
    }
  }
  if ( !*((_BYTE *)a1 + 36) && !*((_BYTE *)a1 + 1352) || v3 )
    v3 = 1;
  if ( *((_BYTE *)a1 + 37) )
  {
    v5 = (_DWORD *)a1[18];
    if ( v5 )
    {
      for ( i = 1; i <= v5[2]; ++i )
        TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + a1[18] + 48), v3);
    }
  }
  else
  {
    v5 = 0LL;
    TR_Disable_Internal(a1[11], v3);
  }
  if ( v3 )
  {
    if ( v5 )
    {
      XilEndpoint_FreeStreamContextArray(v5);
      if ( v5 == (_DWORD *)a1[17] )
      {
        ExFreePoolWithTag(v5, 0x49434858u);
        a1[17] = 0LL;
      }
      a1[18] = 0LL;
    }
    v6 = a1[10];
    if ( v6 )
    {
      if ( v6 != *(_QWORD *)(*a1 + 72) )
        imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    }
    a1[10] = 0LL;
  }
}
