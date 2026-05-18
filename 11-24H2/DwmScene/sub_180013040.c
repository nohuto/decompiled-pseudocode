/*
 * XREFs of sub_180013040 @ 0x180013040
 * Callers:
 *     sub_180012180 @ 0x180012180 (sub_180012180.c)
 *     sub_18001229C @ 0x18001229C (sub_18001229C.c)
 *     sub_18006A618 @ 0x18006A618 (sub_18006A618.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     sub_18008C754 @ 0x18008C754 (sub_18008C754.c)
 *     sub_1800CAFA0 @ 0x1800CAFA0 (sub_1800CAFA0.c)
 *     sub_1800D2008 @ 0x1800D2008 (sub_1800D2008.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 */

__int64 __fastcall sub_180013040(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180012140((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
  return result;
}
