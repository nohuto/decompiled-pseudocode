/*
 * XREFs of PnpIsLegacyDriver @ 0x140983408
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140982F18 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x140B84894 (IovpBuildDriverObjectList.c)
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
