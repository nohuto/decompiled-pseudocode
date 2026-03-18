/*
 * XREFs of HUBDESC_ValidateMsOs20MimimumRecoveryTime @ 0x14003F010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20MimimumRecoveryTime(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v3; // al
  __int64 *v4; // rbx
  void *v6; // rdx
  char v9; // si
  _QWORD *v10; // r14
  __int64 *v12; // r15
  _QWORD *v13; // r13
  unsigned __int8 v14; // al
  __int64 v15; // [rsp+28h] [rbp-30h]

  v3 = *(_BYTE *)a2;
  v4 = (__int64 *)(a2 + 96);
  v6 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
  v9 = 1;
  if ( v3 >= 0 )
  {
    v10 = (_QWORD *)(a1 + 40);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(*v4, (_DWORD)v6, 5, 342, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    }
    v10 = (_QWORD *)(a1 + 40);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 175LL);
    v9 = 0;
    v6 = &WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids;
  }
  if ( *a3 == 6 )
  {
    v12 = v4;
    if ( *((_BYTE *)a3 + 4) > 0xAu )
    {
      v13 = v10;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          *v4,
          2u,
          5u,
          0x158u,
          (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
          *((unsigned __int8 *)a3 + 4));
        v12 = (__int64 *)(a2 + 96);
        v13 = (_QWORD *)(a1 + 40);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*v10, 177LL);
      v10 = v13;
      v9 = 0;
    }
    v14 = *((_BYTE *)a3 + 5);
    v4 = v12;
    if ( !v14 || v14 > 0x14u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = *((unsigned __int8 *)a3 + 5);
        WPP_RECORDER_SF_d(*v12, 2u, 5u, 0x159u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v15);
        v4 = (__int64 *)(a2 + 96);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 32))(*v10, 178LL);
    }
    if ( v9 == 1 )
    {
      *(_DWORD *)a2 |= 0x80u;
      *(_QWORD *)(a2 + 40) = a3;
      return v9;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = (__int64 *)(a2 + 96);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x157u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        *a3);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*v10, 176LL);
    v9 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(*v4, (_DWORD)v6, 5, 346, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v9;
}
