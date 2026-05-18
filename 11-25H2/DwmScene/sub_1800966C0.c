/*
 * XREFs of sub_1800966C0 @ 0x1800966C0
 * Callers:
 *     sub_1800958D0 @ 0x1800958D0 (sub_1800958D0.c)
 *     sub_18009595C @ 0x18009595C (sub_18009595C.c)
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 *     sub_1800978E0 @ 0x1800978E0 (sub_1800978E0.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 *     sub_180098368 @ 0x180098368 (sub_180098368.c)
 *     sub_1800DBA02 @ 0x1800DBA02 (sub_1800DBA02.c)
 *     sub_1800DBA14 @ 0x1800DBA14 (sub_1800DBA14.c)
 *     sub_1800DBA2D @ 0x1800DBA2D (sub_1800DBA2D.c)
 *     sub_1800DBA46 @ 0x1800DBA46 (sub_1800DBA46.c)
 *     sub_1800DBA5F @ 0x1800DBA5F (sub_1800DBA5F.c)
 *     sub_1800DBAD2 @ 0x1800DBAD2 (sub_1800DBAD2.c)
 *     sub_1800DBAE8 @ 0x1800DBAE8 (sub_1800DBAE8.c)
 *     sub_1800DBB4D @ 0x1800DBB4D (sub_1800DBB4D.c)
 *     sub_1800DBB63 @ 0x1800DBB63 (sub_1800DBB63.c)
 *     sub_1800DBB7C @ 0x1800DBB7C (sub_1800DBB7C.c)
 *     sub_1800DBBC4 @ 0x1800DBBC4 (sub_1800DBBC4.c)
 *     sub_1800DBBD6 @ 0x1800DBBD6 (sub_1800DBBD6.c)
 *     sub_1800DBBFA @ 0x1800DBBFA (sub_1800DBBFA.c)
 *     unknown_libname_69 @ 0x1800DBC0C (unknown_libname_69.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180096B90 @ 0x180096B90 (sub_180096B90.c)
 */

__int64 __fastcall sub_1800966C0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  result = sub_180096B90();
  v3 = a1[21];
  if ( v3 )
    result = sub_18001050C(v3);
  v4 = a1[19];
  if ( v4 )
    result = sub_18001050C(v4);
  v5 = a1[3];
  if ( v5 )
    result = sub_18001050C(v5);
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
    return sub_180010544(v6);
  return result;
}
