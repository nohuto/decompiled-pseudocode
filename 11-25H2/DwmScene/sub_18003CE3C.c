/*
 * XREFs of sub_18003CE3C @ 0x18003CE3C
 * Callers:
 *     sub_18003CB18 @ 0x18003CB18 (sub_18003CB18.c)
 *     sub_18003CD9C @ 0x18003CD9C (sub_18003CD9C.c)
 *     sub_18003CFE0 @ 0x18003CFE0 (sub_18003CFE0.c)
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800CF73C @ 0x1800CF73C (sub_1800CF73C.c)
 *     sub_1800D0340 @ 0x1800D0340 (sub_1800D0340.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001DC50 @ 0x18001DC50 (sub_18001DC50.c)
 */

__int64 **__fastcall sub_18003CE3C(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *((_DWORD *)a2 + 2) = 0;
  *a2 = v5;
  *((_DWORD *)a2 + 3) = 0;
  v6 = *a2;
  a2[2] = *(__int64 **)a1;
  while ( !*((_BYTE *)v6 + 25) )
  {
    *a2 = v6;
    sub_1800130AC(a3);
    v7 = sub_1800130AC((__int64)(v6 + 4));
    LOBYTE(v9) = sub_18001DC50(v7, v6[6], v8, *(_QWORD *)(a3 + 16));
    if ( v9 >= 0 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v6 = (__int64 *)v6[2];
    }
  }
  return a2;
}
