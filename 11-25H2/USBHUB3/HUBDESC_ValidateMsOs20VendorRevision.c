/*
 * XREFs of HUBDESC_ValidateMsOs20VendorRevision @ 0x14003F5E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20VendorRevision(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v3; // eax
  int v5; // edx
  char v7; // bp
  __int64 v8; // rdx
  int v9; // edx

  v3 = *a2;
  v5 = 1024;
  v7 = 1;
  if ( (v3 & 0x400) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), v5, 5, 354, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    }
    v8 = 258LL;
  }
  else if ( *a3 == 6 )
  {
    if ( a3[2] )
    {
      *((_QWORD *)a2 + 8) = a3;
      *a2 = v3 | 0x400;
      return v7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x164u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        a3[2]);
    v8 = 260LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x163u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        *a3);
    v8 = 259LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), v9, 5, 357, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v7;
}
