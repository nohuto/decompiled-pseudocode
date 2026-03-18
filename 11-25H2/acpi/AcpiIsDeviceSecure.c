/*
 * XREFs of AcpiIsDeviceSecure @ 0x1400AECFC
 * Callers:
 *     AcpiCheckSecureDevice @ 0x1400AE8CC (AcpiCheckSecureDevice.c)
 * Callees:
 *     ACPIQueryDeviceBiosNameEx @ 0x1400396E8 (ACPIQueryDeviceBiosNameEx.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     AcpiSearchSdevTable @ 0x1400A73E0 (AcpiSearchSdevTable.c)
 */

char __fastcall AcpiIsDeviceSecure(__int64 a1)
{
  char v1; // bl
  __int64 v3; // rsi
  PVOID P[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF

  v1 = 0;
  v6 = 0LL;
  v8 = 0LL;
  v7 = 0;
  *(_OWORD *)P = 0LL;
  if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1447380051LL, 0LL, 0LL);
    if ( v3 )
    {
      if ( (int)ACPIQueryDeviceBiosNameEx(*(_QWORD *)(a1 + 768), 1LL, (struct _UNICODE_STRING *)P) >= 0 )
      {
        if ( AcpiSearchSdevTable(v3, (const UNICODE_STRING *)P, (_DWORD *)&v6 + 1) )
        {
          LODWORD(v6) = 3;
          if ( (int)VslQuerySecureDevice(&v6, &v8) >= 0 )
          {
            v1 = v8;
            *(_QWORD *)(a1 + 960) = *((_QWORD *)&v8 + 1);
          }
        }
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x53706341u);
  return v1;
}
