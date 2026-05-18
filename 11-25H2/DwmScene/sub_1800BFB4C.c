/*
 * XREFs of sub_1800BFB4C @ 0x1800BFB4C
 * Callers:
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180050EBC @ 0x180050EBC (sub_180050EBC.c)
 */

__int64 **__fastcall sub_1800BFB4C(__int64 **a1, __int64 a2, int *a3, int *a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rsi
  int v10; // edi
  int v11; // ebx
  __int64 **result; // rax

  v8 = (__int64 *)sub_18001B098(16LL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    v11 = *a3;
    sub_180050EBC(v8, a2);
    *((_DWORD *)v9 + 2) = v11;
    *((_DWORD *)v9 + 3) = v10;
  }
  else
  {
    v9 = 0LL;
  }
  result = a1;
  *a1 = v9;
  return result;
}
