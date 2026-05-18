/*
 * XREFs of sub_18008A9A0 @ 0x18008A9A0
 * Callers:
 *     sub_18008A9A0 @ 0x18008A9A0 (sub_18008A9A0.c)
 *     sub_18008ACEC @ 0x18008ACEC (sub_18008ACEC.c)
 * Callees:
 *     sub_180089B74 @ 0x180089B74 (sub_180089B74.c)
 *     sub_180089DEC @ 0x180089DEC (sub_180089DEC.c)
 *     sub_18008A804 @ 0x18008A804 (sub_18008A804.c)
 *     sub_18008A9A0 @ 0x18008A9A0 (sub_18008A9A0.c)
 */

void __fastcall sub_18008A9A0(char *a1, float *a2, __int64 a3, void *a4, __int64 a5, char a6)
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
      sub_18008A9A0((_DWORD)a1, v11, v10, (_DWORD)a4, a5, a6);
      sub_18008A9A0((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, (_DWORD)a4, a5, a6);
    }
    else
    {
      sub_180089DEC(a1, v11, v10, a4);
      sub_180089DEC(&a1[16 * v10], (__int64)a2, v9, a4);
    }
    sub_180089B74(a1, &a1[16 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18008A804(a1, (char *)a2);
  }
}
