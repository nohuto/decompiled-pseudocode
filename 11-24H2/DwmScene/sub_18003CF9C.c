/*
 * XREFs of sub_18003CF9C @ 0x18003CF9C
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_18003CEFC @ 0x18003CEFC (sub_18003CEFC.c)
 *     sub_18003D140 @ 0x18003D140 (sub_18003D140.c)
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800CF89C @ 0x1800CF89C (sub_1800CF89C.c)
 *     sub_1800D04A0 @ 0x1800D04A0 (sub_1800D04A0.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001DDB0 @ 0x18001DDB0 (sub_18001DDB0.c)
 */

__int64 **__fastcall sub_18003CF9C(__int64 a1, __int64 **a2, __int64 a3)
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
    sub_1800131AC(a3);
    v7 = sub_1800131AC((__int64)(v6 + 4));
    LOBYTE(v9) = sub_18001DDB0(v7, v6[6], v8, *(_QWORD *)(a3 + 16));
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
