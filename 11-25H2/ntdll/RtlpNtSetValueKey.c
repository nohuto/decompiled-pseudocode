/*
 * XREFs of RtlpNtSetValueKey @ 0x18014CB10
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlpNtSetValueKey(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  return ZwSetValueKey(a1, &v5, 0LL, a2, a3, a4);
}
