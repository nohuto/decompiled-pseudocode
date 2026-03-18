/*
 * XREFs of IoIsDeviceEjectable @ 0x140491560
 * Callers:
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 4) != 0 || InitWinPEModeType < 0;
}
