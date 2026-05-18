/*
 * XREFs of sub_1800391E4 @ 0x1800391E4
 * Callers:
 *     sub_180065264 @ 0x180065264 (sub_180065264.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 *     sub_18008BBE0 @ 0x18008BBE0 (sub_18008BBE0.c)
 *     sub_180092A20 @ 0x180092A20 (sub_180092A20.c)
 *     sub_180092A50 @ 0x180092A50 (sub_180092A50.c)
 *     sub_180092D88 @ 0x180092D88 (sub_180092D88.c)
 *     sub_180092E90 @ 0x180092E90 (sub_180092E90.c)
 *     sub_180094230 @ 0x180094230 (sub_180094230.c)
 *     sub_1800948A0 @ 0x1800948A0 (sub_1800948A0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

_QWORD *__fastcall sub_1800391E4(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  v4 = a2[1];
  *a1 = *a2;
  v5 = a1[1];
  a1[1] = v4;
  if ( v5 )
    sub_18001050C(v5);
  return a1;
}
