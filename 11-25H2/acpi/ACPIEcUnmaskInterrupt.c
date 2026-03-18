/*
 * XREFs of ACPIEcUnmaskInterrupt @ 0x140019270
 * Callers:
 *     ACPIEcServiceDevice @ 0x14001873C (ACPIEcServiceDevice.c)
 *     ACPIEcGpioDpcRoutine @ 0x14004F3D0 (ACPIEcGpioDpcRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x14001A570 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToGpeRegister @ 0x14001A728 (ACPIGpeIndexToGpeRegister.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall ACPIEcUnmaskInterrupt(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  KIRQL v3; // di
  __int64 v4; // rcx
  char v5; // r8
  _UNKNOWN **result; // rax

  if ( *(_BYTE *)(a1 + 2213) )
    return (_UNKNOWN **)HalPrivateDispatchTable[61](*(unsigned int *)(a1 + 2308), 2LL);
  v1 = **(_DWORD **)(a1 + 72);
  v2 = (unsigned int)ACPIGpeIndexToGpeRegister(v1);
  v3 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  v4 = v1 & 7;
  v5 = 1 << v4;
  LOBYTE(v4) = 1;
  *((_BYTE *)GpeEnable + v2) |= v5;
  *((_BYTE *)GpeCurEnable + v2) |= v5;
  ACPIGpeEnableDisableEvents(v4);
  KeReleaseSpinLock(&GpeTableLock, v3);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_D(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          0xEu,
                          0xEu,
                          (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
                          v1);
  return result;
}
