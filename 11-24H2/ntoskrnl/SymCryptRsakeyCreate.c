/*
 * XREFs of SymCryptRsakeyCreate @ 0x14051F184
 * Callers:
 *     SymCryptRsakeyAllocate @ 0x14051E8E4 (SymCryptRsakeyAllocate.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14051FBD4 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 *     SymCryptModulusCreate @ 0x1405218E4 (SymCryptModulusCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofModulusFromDigits @ 0x140521944 (SymCryptSizeofModulusFromDigits.c)
 */

__int64 __fastcall SymCryptRsakeyCreate(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned int v4; // esi
  __int64 v5; // r15
  unsigned int v8; // ebp
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned int v13; // eax
  unsigned int i; // ebx
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int j; // ebx

  v4 = 0;
  v5 = 0LL;
  v8 = SymCryptSizeofRsakeyFromParams(a3);
  if ( a2 >= v8 && a3[1] - 256 <= 0xFF00 && a3[3] == 1 && (a3[2] & 0xFFFFFFFD) == 0 )
  {
    v5 = a1;
    SymCryptWipe(a1, a2);
    *(_DWORD *)(a1 + 4) = v8;
    *(_BYTE *)(a1 + 8) = 0;
    v9 = a3[1];
    *(_DWORD *)(a1 + 12) = v9;
    v10 = SymCryptDigitsFromBits(v9);
    *(_DWORD *)(a1 + 20) = v10;
    *(_DWORD *)(a1 + 28) = a3[2];
    *(_DWORD *)(a1 + 24) = a3[3];
    v11 = (unsigned int)SymCryptSizeofModulusFromDigits(v10);
    v12 = v11 + a1 + 192;
    *(_QWORD *)(a1 + 120) = SymCryptModulusCreate(a1 + 192, v11, *(unsigned int *)(a1 + 20));
    v13 = *(_DWORD *)(a1 + 28);
    for ( i = 0; i < v13; v13 = *(_DWORD *)(a1 + 28) )
    {
      *(_QWORD *)(a1 + 8LL * i++ + 64) = v12;
      v12 += (unsigned int)SymCryptSizeofModulusFromDigits(*(unsigned int *)(a1 + 20));
    }
    v15 = 0;
    if ( v13 )
    {
      do
      {
        v16 = v15++;
        *(_QWORD *)(a1 + 8 * v16 + 80) = v12;
        v12 += ((((a3[1] & 0x1FF) + 511) >> 9) + (a3[1] >> 9)) << 6;
      }
      while ( v15 < *(_DWORD *)(a1 + 28) );
    }
    v17 = *(_DWORD *)(a1 + 24);
    for ( j = 0; j < v17; v17 = *(_DWORD *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 8LL * j++ + 96) = v12;
      v12 += (unsigned int)SymCryptSizeofIntFromDigits(*(unsigned int *)(a1 + 20));
    }
    if ( *(_DWORD *)(a1 + 28) * v17 )
    {
      do
      {
        *(_QWORD *)(a1 + 8LL * v4++ + 104) = v12;
        v12 += (unsigned int)SymCryptSizeofIntFromDigits(*(unsigned int *)(a1 + 20));
      }
      while ( v4 < *(_DWORD *)(a1 + 28) * *(_DWORD *)(a1 + 24) );
    }
  }
  return v5;
}
