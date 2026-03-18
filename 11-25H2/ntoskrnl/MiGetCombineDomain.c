/*
 * XREFs of MiGetCombineDomain @ 0x14045C26C
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x14045C04C (MiCapturePfnVm.c)
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
