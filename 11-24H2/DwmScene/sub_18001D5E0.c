/*
 * XREFs of sub_18001D5E0 @ 0x18001D5E0
 * Callers:
 *     sub_18001D480 @ 0x18001D480 (sub_18001D480.c)
 *     sub_18004C1A0 @ 0x18004C1A0 (sub_18004C1A0.c)
 *     sub_18004D610 @ 0x18004D610 (sub_18004D610.c)
 *     sub_18004DCC0 @ 0x18004DCC0 (sub_18004DCC0.c)
 *     sub_1800819AC @ 0x1800819AC (sub_1800819AC.c)
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

__int64 __fastcall sub_18001D5E0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_180010234(v2, *(_QWORD *)(a1 + 16) - (_QWORD)v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
