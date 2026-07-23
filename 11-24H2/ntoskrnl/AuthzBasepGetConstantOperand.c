/*
 * XREFs of AuthzBasepGetConstantOperand @ 0x14044CD6C
 * Callers:
 *     AuthzBasepGetNextValue @ 0x140326B8C (AuthzBasepGetNextValue.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14044CACC (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetConstantOperand(unsigned __int8 *a1, int a2, __int64 a3, int *a4)
{
  unsigned int v4; // r10d
  int v7; // r11d
  char v8; // r9
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ecx
  __int64 result; // rax

  v4 = 0;
  *(_WORD *)a3 = 0;
  *(_BYTE *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v7 = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(a3 + 12) = 1;
  *(_DWORD *)(a3 + 24) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  v8 = *a1;
  v9 = *a1 - 1;
  if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 )
  {
    if ( (unsigned int)(a2 - 1) >= 0xA )
    {
      *(_WORD *)a3 = 2;
      *(_QWORD *)(a3 + 32) = a1 + 1;
      v7 = 11;
      *(_DWORD *)(a3 + 24) = 10;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
  v13 = v12 - 12;
  if ( !v13 || (v14 = v13 - 8) == 0 || (unsigned int)(v14 - 56) <= 1 )
  {
    if ( (unsigned int)(a2 - 1) >= 4 )
    {
      if ( v8 == 16 )
      {
        *(_WORD *)a3 = 3;
      }
      else
      {
        *(_WORD *)a3 = 16;
        if ( v8 == 80 )
          *(_BYTE *)(a3 + 4) = 1;
      }
      v15 = *(_DWORD *)(a1 + 1);
      *(_DWORD *)(a3 + 24) = v15;
      v7 = 5;
      if ( a2 - 5 >= v15 )
      {
        *(_QWORD *)(a3 + 32) = a1 + 5;
        v7 = v15 + 5;
        goto LABEL_13;
      }
    }
LABEL_14:
    v4 = -1073741406;
  }
LABEL_13:
  result = v4;
  *a4 = v7;
  return result;
}
