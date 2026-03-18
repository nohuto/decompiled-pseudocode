/*
 * XREFs of NtLoadDriver @ 0x140A92430
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x1404E6A70 (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
