/*
 * XREFs of HUBDESC_InternalValidateLastInterface @ 0x140039558
 * Callers:
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x140038E9C (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E284 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x140039424 (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateLastInterface(__int64 a1, int *a2, __int64 a3)
{
  int *v4; // rdi
  int v6; // eax
  char v7; // si
  int v9; // [rsp+50h] [rbp-28h] BYREF

  v9 = 0;
  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v4 = &v9;
  }
  v6 = *(_DWORD *)(a1 + 256);
  v7 = 1;
  if ( (v6 & 1) != 0 )
  {
    HUBDESC_InternalValidateLastEndpoint(a1, v4, a3);
    if ( *v4 != 1 && *(_BYTE *)(a1 + 185) != *(_BYTE *)(a1 + 184) )
    {
      if ( *(_WORD *)a1 > 0x200u || *(_BYTE *)(a1 + 12) || *(_BYTE *)(a1 + 13) )
        *v4 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(
          a3,
          2u,
          5u,
          0x1Du,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          *(unsigned __int8 *)(a1 + 185),
          *(unsigned __int8 *)(a1 + 184),
          *(unsigned __int8 *)(a1 + 80),
          *(unsigned __int8 *)(a1 + 81));
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 107LL);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 256) = v6 | 1;
  }
  if ( *v4 )
  {
    v7 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(a3, (_DWORD)a2, 5, 30, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    }
  }
  return v7;
}
