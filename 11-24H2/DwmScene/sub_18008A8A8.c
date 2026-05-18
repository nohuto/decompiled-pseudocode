/*
 * XREFs of sub_18008A8A8 @ 0x18008A8A8
 * Callers:
 *     sub_18008A8A8 @ 0x18008A8A8 (sub_18008A8A8.c)
 *     sub_18008AC20 @ 0x18008AC20 (sub_18008AC20.c)
 * Callees:
 *     sub_180089A4C @ 0x180089A4C (sub_180089A4C.c)
 *     sub_180089C9C @ 0x180089C9C (sub_180089C9C.c)
 *     sub_18008A768 @ 0x18008A768 (sub_18008A768.c)
 *     sub_18008A8A8 @ 0x18008A8A8 (sub_18008A8A8.c)
 */

void __fastcall sub_18008A8A8(char *a1, float *a2, __int64 a3, void *a4, __int64 a5, char a6)
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
      sub_18008A8A8((_DWORD)a1, v11, v10, (_DWORD)a4, a5, a6);
      sub_18008A8A8((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, (_DWORD)a4, a5, a6);
    }
    else
    {
      sub_180089C9C(a1, v11, v10, a4);
      sub_180089C9C(&a1[16 * v10], (__int64)a2, v9, a4);
    }
    sub_180089A4C(a1, &a1[16 * v10], a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_18008A768(a1, (char *)a2);
  }
}
