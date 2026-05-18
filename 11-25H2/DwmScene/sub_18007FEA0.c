/*
 * XREFs of sub_18007FEA0 @ 0x18007FEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007FCD0 @ 0x18007FCD0 (sub_18007FCD0.c)
 *     sub_18007FDEC @ 0x18007FDEC (sub_18007FDEC.c)
 */

__int64 *__fastcall sub_18007FEA0(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
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
  v9 = sub_18007FDEC(a1, &v12, a3, a4, a5, a6, v8);
  v10 = *v9;
  *v9 = 0LL;
  *a2 = v10;
  sub_18007FCD0(&v12);
  return a2;
}
