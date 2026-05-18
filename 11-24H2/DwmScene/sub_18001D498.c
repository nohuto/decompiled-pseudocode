/*
 * XREFs of sub_18001D498 @ 0x18001D498
 * Callers:
 *     sub_18001D51C @ 0x18001D51C (sub_18001D51C.c)
 *     sub_18004D7D4 @ 0x18004D7D4 (sub_18004D7D4.c)
 *     sub_18004DD38 @ 0x18004DD38 (sub_18004DD38.c)
 *     sub_180084BFC @ 0x180084BFC (sub_180084BFC.c)
 *     sub_1800D5F8D @ 0x1800D5F8D (sub_1800D5F8D.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18001D498(__int64 a1)
{
  __int64 result; // rax

  result = std::ios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
