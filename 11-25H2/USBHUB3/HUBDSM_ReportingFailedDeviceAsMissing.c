/*
 * XREFs of HUBDSM_ReportingFailedDeviceAsMissing @ 0x140023AB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ReportDeviceAsMissing @ 0x14001A860 (HUBPDO_ReportDeviceAsMissing.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_ReportingFailedDeviceAsMissing(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_ReportDeviceAsMissing(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3006LL);
  return 1000LL;
}
