/*
 * XREFs of sub_140C08E1C @ 0x140C08E1C
 * Callers:
 *     KeCheckedKernelInitialize @ 0x140BDF44C (KeCheckedKernelInitialize.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

__int64 sub_140C08E1C()
{
  __int64 v1; // [rsp+0h] [rbp-18h] BYREF
  __int16 v2; // [rsp+8h] [rbp-10h]

  v1 = 0LL;
  v2 = 0;
  __lidt(&v1);
  return 0LL;
}
