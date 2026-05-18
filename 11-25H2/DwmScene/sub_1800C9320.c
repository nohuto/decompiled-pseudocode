/*
 * XREFs of sub_1800C9320 @ 0x1800C9320
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 */

_QWORD *__fastcall sub_1800C9320(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r9
  int v4; // r8d
  int v5; // r8d
  _QWORD *v6; // rdx

  v3 = a2;
  v4 = a3 - 1;
  if ( !v4 )
  {
    v6 = a1 + 26;
    goto LABEL_8;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = a1 + 28;
    goto LABEL_8;
  }
  if ( v5 == 1 )
  {
    v6 = a1 + 30;
LABEL_8:
    unknown_libname_81(v3, v6);
    return v3;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  return v3;
}
