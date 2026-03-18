/*
 * XREFs of HUBDESC_InternalValidateLastEndpoint @ 0x140039424
 * Callers:
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037404 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x140039558 (HUBDESC_InternalValidateLastInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

bool __fastcall HUBDESC_InternalValidateLastEndpoint(__int64 a1, int *a2, int a3)
{
  int *v4; // rdi
  int *v6; // rbx
  int v7; // eax
  int *v8; // rbp
  int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v4 = &v11;
  }
  v6 = (int *)(a1 + 256);
  v7 = *(_DWORD *)(a1 + 256);
  if ( (v7 & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) == 3 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        v8 = (int *)(a1 + 256);
      }
      else
      {
        *v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(a3, (_DWORD)a2, 5, 27, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 59LL);
        v8 = (int *)(a1 + 256);
      }
      v9 = *v6;
      v6 = v8;
      if ( (v9 & 8) != 0 && (v9 & 0x20) == 0 )
      {
        *v4 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(a3, (_DWORD)a2, 5, 28, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 212LL);
      }
    }
  }
  else
  {
    *v6 = v7 | 2;
  }
  *v6 &= ~0x10u;
  *v6 &= 0xFFFFFFD3;
  return *v4 == 0;
}
