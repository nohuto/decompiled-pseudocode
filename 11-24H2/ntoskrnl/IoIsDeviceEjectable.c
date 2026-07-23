/*
 * XREFs of IoIsDeviceEjectable @ 0x14048C058
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 4) != 0 || InitWinPEModeType < 0;
}
