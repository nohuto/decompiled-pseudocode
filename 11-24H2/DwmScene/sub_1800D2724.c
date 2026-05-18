/*
 * XREFs of sub_1800D2724 @ 0x1800D2724
 * Callers:
 *     sub_1800247B0 @ 0x1800247B0 (sub_1800247B0.c)
 *     sub_180024834 @ 0x180024834 (sub_180024834.c)
 *     sub_180024840 @ 0x180024840 (sub_180024840.c)
 *     sub_1800300A8 @ 0x1800300A8 (sub_1800300A8.c)
 *     sub_18003DA84 @ 0x18003DA84 (sub_18003DA84.c)
 *     sub_18005AEE4 @ 0x18005AEE4 (sub_18005AEE4.c)
 *     sub_1800959C4 @ 0x1800959C4 (sub_1800959C4.c)
 *     sub_180095ABC @ 0x180095ABC (sub_180095ABC.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800D2754 @ 0x1800D2754 (sub_1800D2754.c)
 */

__int64 __fastcall sub_1800D2724(_QWORD *a1)
{
  void *v1; // rbx
  __int64 result; // rax

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_1800D2754(*a1);
    return sub_18000BB4C(v1);
  }
  return result;
}
