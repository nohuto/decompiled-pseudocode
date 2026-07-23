/*
 * XREFs of MiCheckProcessCombineSequence @ 0x1404509FC
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x1404507C4 (MiCapturePfnVm.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckProcessCombineSequence(__int64 a1, signed __int32 a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 1956);
  return v2 == 1 || v2 == a2 || v2 < 2 && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1956), a2, 0);
}
