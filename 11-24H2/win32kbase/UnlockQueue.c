/*
 * XREFs of UnlockQueue @ 0x1401A4040
 * Callers:
 *     <none>
 * Callees:
 *     FreeQueue @ 0x14010EA64 (FreeQueue.c)
 */

void __fastcall UnlockQueue(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 440))-- == 1 && (*(_DWORD *)(a1 + 436) & 0x4000000) != 0 )
    FreeQueue((char *)a1);
}
