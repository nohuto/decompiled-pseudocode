/*
 * XREFs of sub_180037114 @ 0x180037114
 * Callers:
 *     sub_180037060 @ 0x180037060 (sub_180037060.c)
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 *     sub_1800526B8 @ 0x1800526B8 (sub_1800526B8.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180037114(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
