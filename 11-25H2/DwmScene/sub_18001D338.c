/*
 * XREFs of sub_18001D338 @ 0x18001D338
 * Callers:
 *     sub_18001D3BC @ 0x18001D3BC (sub_18001D3BC.c)
 *     sub_18004D674 @ 0x18004D674 (sub_18004D674.c)
 *     sub_18004DBD8 @ 0x18004DBD8 (sub_18004DBD8.c)
 *     sub_180084A9C @ 0x180084A9C (sub_180084A9C.c)
 *     sub_1800D5E2D @ 0x1800D5E2D (sub_1800D5E2D.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18001D338(__int64 a1)
{
  __int64 result; // rax

  result = std::ios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}
