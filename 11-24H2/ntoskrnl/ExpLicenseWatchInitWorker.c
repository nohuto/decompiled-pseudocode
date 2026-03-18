/*
 * XREFs of ExpLicenseWatchInitWorker @ 0x140C5C5B4
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140456290 (HvlQueryVsmConnection.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 ExpLicenseWatchInitWorker()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  char VsmConnection; // al
  char v3; // r11
  int v4; // ecx
  bool v5; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // r9

  _mm_lfence();
  v0 = KiProcessorBlock[0];
  v1 = *(_QWORD *)(KiProcessorBlock[0] + 120);
  *(_QWORD *)(KiProcessorBlock[0] + 120) = 0LL;
  *(_QWORD *)(v0 + 112) = 0LL;
  VsmConnection = HvlQueryVsmConnection(0LL);
  v5 = (_DWORD)InitSafeBootMode != v4 && VsmConnection == 0;
  v6 = (unsigned int)(v4 + 1);
  v7 = __rdtsc() >> 3;
  result = 100 * ((unsigned int)v7 / 0x64);
  v9 = (unsigned int)v7 % 0x64;
  if ( (unsigned int)v9 <= 3 )
    v6 = v5;
  LOBYTE(v6) = v3 | v6;
  if ( !(_BYTE)v6 )
  {
    result = guard_dispatch_icall_no_overrides(v1, v5, v6, v9);
    if ( (_DWORD)result != 1 )
      KeBugCheckEx(0x9Au, 0x42424242uLL, 0xC000026AuLL, 0LL, 0LL);
  }
  return result;
}
