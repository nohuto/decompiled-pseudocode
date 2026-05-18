/*
 * XREFs of sub_180061740 @ 0x180061740
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_180061740(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = a3;
  if ( a3 < 0 || a3 >= (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a4) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v8 = sub_18005D888(*a4, v7);
    unknown_libname_81(a2, (_QWORD *)(v8 + 8 + 16 * v4));
  }
  return a2;
}
