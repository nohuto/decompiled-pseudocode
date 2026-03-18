/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_INFO @ 0x14041AA80
 * Callers:
 *     ObpInsertHandleCount @ 0x1409B17B0 (ObpInsertHandleCount.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x140A447F0 (ObpUnlockHandleDatabaseEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  else
    return 0LL;
}
