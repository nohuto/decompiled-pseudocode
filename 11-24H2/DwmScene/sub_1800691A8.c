/*
 * XREFs of sub_1800691A8 @ 0x1800691A8
 * Callers:
 *     sub_1800BCE50 @ 0x1800BCE50 (sub_1800BCE50.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 *     sub_180068F70 @ 0x180068F70 (sub_180068F70.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800691A8(__int64 *a1, _QWORD *a2, int a3)
{
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 *result; // rax
  __int64 v14; // rcx

  sub_180027DD0((__int64)a1, 1, 0);
  sub_180027DD0(v7, v6 + 2, v6);
  sub_180027DD0(v9, v8 + 4, v8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_180068F70(a1, v12, v11, v10, a3, 0LL);
  result = sub_180068B9C(a1, a2);
  v14 = a2[1];
  if ( v14 )
    return (__int64 *)sub_18001060C(v14);
  return result;
}
