/*
 * XREFs of sub_18000CBBC @ 0x18000CBBC
 * Callers:
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_18004B2D4 @ 0x18004B2D4 (sub_18004B2D4.c)
 *     sub_180054AC0 @ 0x180054AC0 (sub_180054AC0.c)
 *     sub_180054B00 @ 0x180054B00 (sub_180054B00.c)
 *     sub_180054EDC @ 0x180054EDC (sub_180054EDC.c)
 *     sub_18005A944 @ 0x18005A944 (sub_18005A944.c)
 *     sub_18005E7E0 @ 0x18005E7E0 (sub_18005E7E0.c)
 *     sub_180068754 @ 0x180068754 (sub_180068754.c)
 *     sub_180069D48 @ 0x180069D48 (sub_180069D48.c)
 *     sub_18006B004 @ 0x18006B004 (sub_18006B004.c)
 *     sub_1800751E0 @ 0x1800751E0 (sub_1800751E0.c)
 *     sub_180077D00 @ 0x180077D00 (sub_180077D00.c)
 *     sub_18007D394 @ 0x18007D394 (sub_18007D394.c)
 *     sub_180092C10 @ 0x180092C10 (sub_180092C10.c)
 *     sub_180092F74 @ 0x180092F74 (sub_180092F74.c)
 *     sub_1800932FC @ 0x1800932FC (sub_1800932FC.c)
 *     sub_1800935A4 @ 0x1800935A4 (sub_1800935A4.c)
 *     sub_180093C14 @ 0x180093C14 (sub_180093C14.c)
 *     sub_180095664 @ 0x180095664 (sub_180095664.c)
 *     sub_180099248 @ 0x180099248 (sub_180099248.c)
 *     sub_1800C3FF0 @ 0x1800C3FF0 (sub_1800C3FF0.c)
 *     sub_1800CADF4 @ 0x1800CADF4 (sub_1800CADF4.c)
 * Callees:
 *     sub_18000B344 @ 0x18000B344 (sub_18000B344.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall sub_18000CBBC(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
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
