/*
 * XREFs of CmpDeleteKcbCache @ 0x140A50BF4
 * Callers:
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmpInitializeKcbCache @ 0x14092E274 (CmpInitializeKcbCache.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteKcbCache(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdi

  v2 = *(void **)(a1 + 1648);
  v3 = *(void **)(a1 + 1664);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1648) = 0LL;
    *(_DWORD *)(a1 + 1656) = 0;
    ExFreePoolWithTag(v2, 0x61434D43u);
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1664) = 0LL;
    *(_DWORD *)(a1 + 1672) = 0;
    ExFreePoolWithTag(v3, 0x61434D43u);
  }
}
