/*
 * XREFs of sub_180080000 @ 0x180080000
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007FE30 @ 0x18007FE30 (sub_18007FE30.c)
 *     sub_18007FF4C @ 0x18007FF4C (sub_18007FF4C.c)
 */

__int64 *__fastcall sub_180080000(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
    v8 = *(_DWORD *)(v6 + 32);
  else
    v8 = -1;
  v9 = sub_18007FF4C(a1, &v12, a3, a4, a5, a6, v8);
  v10 = *v9;
  *v9 = 0LL;
  *a2 = v10;
  sub_18007FE30(&v12);
  return a2;
}
