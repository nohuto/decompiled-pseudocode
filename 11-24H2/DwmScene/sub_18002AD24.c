/*
 * XREFs of sub_18002AD24 @ 0x18002AD24
 * Callers:
 *     sub_1800BCCB0 @ 0x1800BCCB0 (sub_1800BCCB0.c)
 *     sub_1800BCE50 @ 0x1800BCE50 (sub_1800BCE50.c)
 *     sub_1800CB3D0 @ 0x1800CB3D0 (sub_1800CB3D0.c)
 *     sub_1800CB460 @ 0x1800CB460 (sub_1800CB460.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 *__fastcall sub_18002AD24(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_18001254C((__int64 *)(a1 + 256), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_18001060C(v4);
  return result;
}
