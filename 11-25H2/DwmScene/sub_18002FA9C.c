/*
 * XREFs of sub_18002FA9C @ 0x18002FA9C
 * Callers:
 *     sub_18002C378 @ 0x18002C378 (sub_18002C378.c)
 *     sub_18008C3EC @ 0x18008C3EC (sub_18008C3EC.c)
 *     sub_18008C728 @ 0x18008C728 (sub_18008C728.c)
 *     sub_180098AB0 @ 0x180098AB0 (sub_180098AB0.c)
 * Callees:
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 */

__int64 __fastcall sub_18002FA9C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800130E0(v1);
  return result;
}
