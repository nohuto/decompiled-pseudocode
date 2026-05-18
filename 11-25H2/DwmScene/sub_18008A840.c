/*
 * XREFs of sub_18008A840 @ 0x18008A840
 * Callers:
 *     sub_18008A840 @ 0x18008A840 (sub_18008A840.c)
 *     sub_18008AB8C @ 0x18008AB8C (sub_18008AB8C.c)
 * Callees:
 *     sub_180089A14 @ 0x180089A14 (sub_180089A14.c)
 *     sub_180089C8C @ 0x180089C8C (sub_180089C8C.c)
 *     sub_18008A6A4 @ 0x18008A6A4 (sub_18008A6A4.c)
 *     sub_18008A840 @ 0x18008A840 (sub_18008A840.c)
 */

void __fastcall sub_18008A840(char *a1, float *a2, __int64 a3, void *a4, __int64 a5, char a6)
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
      sub_18008A840((_DWORD)a1, v11, v10, (_DWORD)a4, a5, a6);
      sub_18008A840((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, (_DWORD)a4, a5, a6);
    }
    else
    {
      sub_180089C8C(a1, v11, v10, a4);
      sub_180089C8C(&a1[16 * v10], (__int64)a2, v9, a4);
    }
    sub_180089A14(a1, &a1[16 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18008A6A4(a1, (char *)a2);
  }
}
