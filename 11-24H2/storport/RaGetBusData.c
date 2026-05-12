/*
 * XREFs of RaGetBusData @ 0x14006901C
 * Callers:
 *     RaidAdapterHack @ 0x140039D6C (RaidAdapterHack.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     StorPortGetBusData @ 0x140073B50 (StorPortGetBusData.c)
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaGetBusData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(a1 + 64))(
           *(_QWORD *)(a1 + 16),
           a2,
           a3,
           0LL,
           a5);
}
