/*
 * XREFs of PiProcessAddBootDevices @ 0x140717E94
 * Callers:
 *     PipAddDevicesToBootDriverWorker @ 0x140C0F0C4 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x14048EBF4 (PoFxPrepareDevice.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 */

__int64 __fastcall PiProcessAddBootDevices(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  ULONG_PTR v4; // rbx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v4 = *(_QWORD *)(v3 + 40);
  if ( *(_DWORD *)(v4 + 300) == 772 && (*(_DWORD *)(v4 + 396) & 0x6002) == 0 && !*(_QWORD *)(v4 + 432) )
  {
    PiPnpRtlBeginOperation(&P, a2, a3);
    if ( (int)PipCallDriverAddDevice(v4) >= 0 )
      PoFxPrepareDevice(v4, 0);
    if ( P )
      PiPnpRtlEndOperation(P);
  }
  return 0LL;
}
