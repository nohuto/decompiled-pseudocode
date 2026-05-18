/*
 * XREFs of sub_1800513B0 @ 0x1800513B0
 * Callers:
 *     sub_18005141C @ 0x18005141C (sub_18005141C.c)
 *     sub_1800514AC @ 0x1800514AC (sub_1800514AC.c)
 *     sub_180051658 @ 0x180051658 (sub_180051658.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_1800BF75C @ 0x1800BF75C (sub_1800BF75C.c)
 *     sub_1800BF86C @ 0x1800BF86C (sub_1800BF86C.c)
 *     sub_1800C0A74 @ 0x1800C0A74 (sub_1800C0A74.c)
 *     sub_1800E1F67 @ 0x1800E1F67 (sub_1800E1F67.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

__int64 __fastcall sub_1800513B0(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B77C(v1);
  return result;
}
