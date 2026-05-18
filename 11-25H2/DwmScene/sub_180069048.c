/*
 * XREFs of sub_180069048 @ 0x180069048
 * Callers:
 *     sub_1800BCCF0 @ 0x1800BCCF0 (sub_1800BCCF0.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180069048(__int64 *a1, _QWORD *a2, int a3)
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

  sub_180027C70((__int64)a1, 1, 0);
  sub_180027C70(v7, v6 + 2, v6);
  sub_180027C70(v9, v8 + 4, v8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_180068E10(a1, v12, v11, v10, a3, 0LL);
  result = sub_180068A3C(a1, a2);
  v14 = a2[1];
  if ( v14 )
    return (__int64 *)sub_18001050C(v14);
  return result;
}
