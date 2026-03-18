/*
 * XREFs of XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1400471A8
 * Callers:
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x14003CB1C (XilEndpoint_CommitStreamContextArrayUpdates.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     memmove @ 0x140058BC0 (memmove.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToSetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src)
{
  __int64 v6; // rdi
  size_t v7; // rsi
  __int64 v9; // r12
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  GUID *v12; // rbp
  int v13; // ebx
  const void *v14; // rdx
  unsigned __int16 v15; // r9
  int v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 16LL * a4;
  v9 = *(_QWORD *)(*(_QWORD *)v6 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v10 = v7 + 48, (int)v7 + 48 < (unsigned int)v7) )
    v10 = 0;
  Pool2 = ExAllocatePool2(64LL, v10, 1229146200LL);
  v12 = (GUID *)Pool2;
  if ( Pool2 )
  {
    v14 = Src;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_DWORD *)(Pool2 + 32) = 37;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 44) = a4;
    memmove((void *)(Pool2 + 48), v14, v7);
    v13 = SecureChannel_SendRequestSynchronously(v9, v12, v10, (__int64)&v19, 4);
    if ( v13 >= 0 )
    {
      v13 = v19;
      if ( v19 >= 0 )
      {
        v13 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 20;
        v18 = *(_DWORD *)(v6 + 152);
        v17 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 143LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 19;
      v18 = *(_DWORD *)(v6 + 152);
      v17 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 143LL);
LABEL_11:
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        v15,
        (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
        v17,
        v18);
    }
LABEL_16:
    ExFreePoolWithTag(v12, 0x49434858u);
    return (unsigned int)v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      2u,
      0xDu,
      0x12u,
      (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 143LL),
      *(_DWORD *)(v6 + 152),
      v10);
  return (unsigned int)-1073741670;
}
