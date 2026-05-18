/*
 * XREFs of sub_180096820 @ 0x180096820
 * Callers:
 *     sub_180095A30 @ 0x180095A30 (sub_180095A30.c)
 *     sub_180095ABC @ 0x180095ABC (sub_180095ABC.c)
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 *     sub_18009784C @ 0x18009784C (sub_18009784C.c)
 *     sub_18009791C @ 0x18009791C (sub_18009791C.c)
 *     sub_180097A40 @ 0x180097A40 (sub_180097A40.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 *     sub_1800984C8 @ 0x1800984C8 (sub_1800984C8.c)
 *     sub_1800DBB62 @ 0x1800DBB62 (sub_1800DBB62.c)
 *     sub_1800DBB74 @ 0x1800DBB74 (sub_1800DBB74.c)
 *     sub_1800DBB8D @ 0x1800DBB8D (sub_1800DBB8D.c)
 *     sub_1800DBBA6 @ 0x1800DBBA6 (sub_1800DBBA6.c)
 *     sub_1800DBBBF @ 0x1800DBBBF (sub_1800DBBBF.c)
 *     sub_1800DBC32 @ 0x1800DBC32 (sub_1800DBC32.c)
 *     sub_1800DBC48 @ 0x1800DBC48 (sub_1800DBC48.c)
 *     sub_1800DBCAD @ 0x1800DBCAD (sub_1800DBCAD.c)
 *     sub_1800DBCC3 @ 0x1800DBCC3 (sub_1800DBCC3.c)
 *     sub_1800DBCDC @ 0x1800DBCDC (sub_1800DBCDC.c)
 *     sub_1800DBD24 @ 0x1800DBD24 (sub_1800DBD24.c)
 *     sub_1800DBD36 @ 0x1800DBD36 (sub_1800DBD36.c)
 *     sub_1800DBD5A @ 0x1800DBD5A (sub_1800DBD5A.c)
 *     unknown_libname_69 @ 0x1800DBD6C (unknown_libname_69.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 */

__int64 __fastcall sub_180096820(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  result = sub_180096CF0();
  v3 = a1[21];
  if ( v3 )
    result = sub_18001060C(v3);
  v4 = a1[19];
  if ( v4 )
    result = sub_18001060C(v4);
  v5 = a1[3];
  if ( v5 )
    result = sub_18001060C(v5);
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
    return sub_180010644(v6);
  return result;
}
