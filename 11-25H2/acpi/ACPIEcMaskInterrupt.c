/*
 * XREFs of ACPIEcMaskInterrupt @ 0x1400199D0
 * Callers:
 *     ACPIEcServiceDevice @ 0x14001873C (ACPIEcServiceDevice.c)
 *     ACPIEcGpioServiceRoutine @ 0x14004C0F0 (ACPIEcGpioServiceRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x14001A728 (ACPIGpeIndexToGpeRegister.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall ACPIEcMaskInterrupt(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  KIRQL v3; // di
  __int64 v4; // rcx
  char v5; // dl
  char v6; // dl
  _UNKNOWN **result; // rax

  if ( *(_BYTE *)(a1 + 2213) )
    return (_UNKNOWN **)HalPrivateDispatchTable[60](*(unsigned int *)(a1 + 2308), 1LL);
  v1 = **(_DWORD **)(a1 + 72);
  v2 = (unsigned int)ACPIGpeIndexToGpeRegister(v1);
  v3 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  v4 = v1 & 7;
  v5 = 1 << v4;
  LOBYTE(v4) = 1;
  v6 = ~v5;
  *((_BYTE *)GpeEnable + v2) &= v6;
  *((_BYTE *)GpeCurEnable + v2) &= v6;
  ACPIGpeEnableDisableEvents(v4);
  KeReleaseSpinLock(&GpeTableLock, v3);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_D(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          0xEu,
                          0xCu,
                          (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
                          v1);
  return result;
}
