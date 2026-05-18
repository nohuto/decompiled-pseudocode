/*
 * XREFs of sub_18000CD2C @ 0x18000CD2C
 * Callers:
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 *     sub_18004B434 @ 0x18004B434 (sub_18004B434.c)
 *     sub_180054C20 @ 0x180054C20 (sub_180054C20.c)
 *     sub_180054C60 @ 0x180054C60 (sub_180054C60.c)
 *     sub_18005503C @ 0x18005503C (sub_18005503C.c)
 *     sub_18005AAA4 @ 0x18005AAA4 (sub_18005AAA4.c)
 *     sub_18005E940 @ 0x18005E940 (sub_18005E940.c)
 *     sub_1800688B4 @ 0x1800688B4 (sub_1800688B4.c)
 *     sub_180069EA8 @ 0x180069EA8 (sub_180069EA8.c)
 *     sub_18006B164 @ 0x18006B164 (sub_18006B164.c)
 *     sub_180075340 @ 0x180075340 (sub_180075340.c)
 *     sub_180077E60 @ 0x180077E60 (sub_180077E60.c)
 *     sub_18007D4F4 @ 0x18007D4F4 (sub_18007D4F4.c)
 *     sub_180092D70 @ 0x180092D70 (sub_180092D70.c)
 *     sub_1800930D4 @ 0x1800930D4 (sub_1800930D4.c)
 *     sub_18009345C @ 0x18009345C (sub_18009345C.c)
 *     sub_180093704 @ 0x180093704 (sub_180093704.c)
 *     sub_180093D74 @ 0x180093D74 (sub_180093D74.c)
 *     sub_1800957C4 @ 0x1800957C4 (sub_1800957C4.c)
 *     sub_1800993A8 @ 0x1800993A8 (sub_1800993A8.c)
 *     sub_1800C4150 @ 0x1800C4150 (sub_1800C4150.c)
 *     sub_1800CAF54 @ 0x1800CAF54 (sub_1800CAF54.c)
 * Callees:
 *     sub_18000B714 @ 0x18000B714 (sub_18000B714.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall sub_18000CD2C(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  _UNKNOWN **result; // rax
  __int64 i; // rbx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; i != a3; ++i )
  {
    result = (_UNKNOWN **)a4(a1);
    a1 += a2;
  }
  return result;
}
