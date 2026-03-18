/*
 * XREFs of PnpIsLegacyDriver @ 0x1409C6164
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409C5C74 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x140B82894 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
    return 0LL;
  else
    return (*(_DWORD *)(a1 + 16) >> 1) & 1;
}
