/*
 * XREFs of NtLoadDriver @ 0x140A96680
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x1404E691C (IopLoadDriverImage.c)
 */

__int64 __fastcall NtLoadDriver(_OWORD *a1)
{
  return IopLoadDriverImage(a1);
}
