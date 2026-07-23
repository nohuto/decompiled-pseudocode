/*
 * XREFs of KeSetIntervalProfile @ 0x140ABD6BC
 * Callers:
 *     EtwpTimeProfileStart @ 0x1406F455C (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x1407B3198 (EtwpCoverageSamplerStart.c)
 *     NtSetIntervalProfile @ 0x1407C2200 (NtSetIntervalProfile.c)
 *     KiInitializeCacheErrataSupport @ 0x140C2C020 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     KiSanitizeProfileInterval @ 0x1405C1048 (KiSanitizeProfileInterval.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeQueryIntervalProfile @ 0x14073A5E0 (KeQueryIntervalProfile.c)
 */

void __fastcall KeSetIntervalProfile(int a1, int a2)
{
  int IntervalProfile; // esi
  int v4; // edi
  int v5; // eax
  int v6; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+50h] [rbp-20h] BYREF
  int v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+5Ch] [rbp-14h]

  IntervalProfile = 0;
  v6 = a1;
  v7 = 0LL;
  v4 = a1;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x402) != 0 )
    IntervalProfile = KeQueryIntervalProfile(a2);
  if ( !a2 )
  {
    if ( (KiCacheErrataMonitor & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      KiSanitizeProfileInterval(&v6);
      v4 = v6;
    }
    goto LABEL_6;
  }
  if ( a2 != 1 )
  {
LABEL_6:
    v7 = __PAIR64__(v4, a2);
    KeGenericProcessorCallback(
      (__int64 *)&KeActiveProcessors,
      (char (__fastcall *)(__int64, __int64))KiSetIntervalWorker,
      (__int64)&v7,
      1);
    goto LABEL_7;
  }
  KiProfileAlignmentFixupInterval = v4;
LABEL_7:
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x402) != 0 )
  {
    v5 = KeQueryIntervalProfile(a2);
    if ( v5 != IntervalProfile )
    {
      v11 = 0;
      v8[1] = v5;
      v8[0] = a2;
      v9 = v8;
      v8[2] = IntervalProfile;
      v10 = 12;
      EtwTraceKernelEvent((int)&v9, 1, 0x20000402u, 3912, 5249282);
    }
  }
}
