/*
 * XREFs of MiGetCombineDomain @ 0x14045B5E4
 * Callers:
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x14045B3C4 (MiCapturePfnVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCombineDomain(int a1, __int64 a2)
{
  if ( a1 == 1 )
    return *(_QWORD *)(a2 + 864);
  else
    return 0LL;
}
