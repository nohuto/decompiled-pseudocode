/*
 * XREFs of sub_18008A748 @ 0x18008A748
 * Callers:
 *     sub_18008A748 @ 0x18008A748 (sub_18008A748.c)
 *     sub_18008AAC0 @ 0x18008AAC0 (sub_18008AAC0.c)
 * Callees:
 *     sub_1800898EC @ 0x1800898EC (sub_1800898EC.c)
 *     sub_180089B3C @ 0x180089B3C (sub_180089B3C.c)
 *     sub_18008A608 @ 0x18008A608 (sub_18008A608.c)
 *     sub_18008A748 @ 0x18008A748 (sub_18008A748.c)
 */

void __fastcall sub_18008A748(char *a1, float *a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (__int64)&a1[16 * v10];
    if ( v10 > a5 )
    {
      sub_18008A748((_DWORD)a1, v11, v10, (_DWORD)a4, a5, a6);
      sub_18008A748((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, (_DWORD)a4, a5, a6);
    }
    else
    {
      sub_180089B3C(a1, v11, v10, a4);
      sub_180089B3C(&a1[16 * v10], (__int64)a2, v9, a4);
    }
    sub_1800898EC(a1, &a1[16 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18008A608(a1, (char *)a2);
  }
}
