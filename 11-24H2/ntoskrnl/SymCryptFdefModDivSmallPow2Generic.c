/*
 * XREFs of SymCryptFdefModDivSmallPow2Generic @ 0x14052FF80
 * Callers:
 *     SymCryptFdefModDivSmallPow2 @ 0x14052FF18 (SymCryptFdefModDivSmallPow2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModDivSmallPow2Generic(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  char *v4; // r15
  unsigned int v5; // r10d
  __int64 v8; // rcx
  int v9; // r14d
  int v10; // r12d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int *v13; // rbx
  signed __int64 v14; // rdi
  _DWORD *v15; // rsi
  __int64 v16; // r11
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 result; // rax

  v4 = (char *)(a1 + 128);
  v5 = 16 * *(_DWORD *)(a1 + 4);
  do
  {
    v8 = (unsigned int)*a2;
    v9 = 1;
    v10 = -(*a2 & 1);
    v11 = (unsigned int)v8 + (*(_DWORD *)v4 & v10);
    v12 = (v8 + (unsigned __int64)(*(_DWORD *)v4 & (unsigned int)v10)) >> 32;
    if ( v5 > 1 )
    {
      v13 = a2 + 1;
      v14 = v4 - (char *)a2;
      v15 = a4;
      v16 = v5 - 1;
      v9 = v5;
      do
      {
        v17 = *v13 + v12;
        v18 = v10 & *(unsigned int *)((char *)v13++ + v14);
        v19 = v18 + v17;
        v12 = (v18 + v17) >> 32;
        v20 = (v19 << 32) | v11;
        v11 = HIDWORD(v20);
        *v15++ = v20 >> 1;
        --v16;
      }
      while ( v16 );
    }
    result = (unsigned int)(v9 - 1);
    a2 = a4;
    a4[result] = (v11 >> 1) | ((_DWORD)v12 << 31);
    --a3;
  }
  while ( a3 );
  return result;
}
