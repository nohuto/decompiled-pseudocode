/*
 * XREFs of sub_1800BFCAC @ 0x1800BFCAC
 * Callers:
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18005101C @ 0x18005101C (sub_18005101C.c)
 */

__int64 **__fastcall sub_1800BFCAC(__int64 **a1, __int64 a2, int *a3, int *a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rsi
  int v10; // edi
  int v11; // ebx
  __int64 **result; // rax

  v8 = (__int64 *)sub_18001B1F8(16LL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    v11 = *a3;
    sub_18005101C(v8, a2);
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
