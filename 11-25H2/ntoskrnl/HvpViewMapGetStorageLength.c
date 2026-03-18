/*
 * XREFs of HvpViewMapGetStorageLength @ 0x140A6E388
 * Callers:
 *     HvUnCOWReconciledPages @ 0x140438F00 (HvUnCOWReconciledPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpViewMapGetStorageLength(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 8) - 4096);
}
