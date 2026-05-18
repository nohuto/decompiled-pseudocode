/*
 * XREFs of sub_18001EB4C @ 0x18001EB4C
 * Callers:
 *     sub_1800320F0 @ 0x1800320F0 (sub_1800320F0.c)
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_1800339BC @ 0x1800339BC (sub_1800339BC.c)
 *     sub_180034044 @ 0x180034044 (sub_180034044.c)
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 *     sub_180061AF0 @ 0x180061AF0 (sub_180061AF0.c)
 *     sub_180061EC0 @ 0x180061EC0 (sub_180061EC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18001EB4C(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a1 + 4) = a4;
  a1[3] = a3;
  a1[4] = a5;
  a1[5] = a6;
  *((_BYTE *)a1 + 48) = 1;
  a1[7] = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 16LL) + 8LL))(*(_QWORD *)(*a1 + 16LL), &a5);
  a1[7] = a5;
  v8 = a2[1];
  if ( v8 )
    sub_18001060C(v8);
  return a1;
}
