/*
 * XREFs of MiImageCfgEnumRvaListNext @ 0x1408FA6A0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiImageCfgEnumNextImageExtensionRva @ 0x1408FA810 (MiImageCfgEnumNextImageExtensionRva.c)
 */

__int64 __fastcall MiImageCfgEnumRvaListNext(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v4; // r9
  unsigned int v5; // r10d
  _DWORD *v7; // r12
  unsigned int v8; // ebp
  unsigned __int8 *v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // edi
  int v14; // r15d
  __int64 v15; // r14
  const signed __int64 *v16; // rbp
  __int64 v17; // rax
  int v18; // ecx
  unsigned int *v19; // r8

  result = *(unsigned int *)a2;
  v4 = (_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 20);
  if ( (unsigned int)result < v5 || !v5 )
  {
    ++*(_DWORD *)(a2 + 12);
    v7 = (_DWORD *)(a2 + 4);
    v8 = *(_DWORD *)(a2 + 12);
    LODWORD(result) = *(_DWORD *)(a2 + 8);
    a2 = *(unsigned int *)(a2 + 16);
    v9 = (unsigned __int8 *)(a2 + *(_QWORD *)(BugCheckParameter2 + 16));
    v10 = *(_QWORD *)(BugCheckParameter2 + 24) - a2;
    if ( !v10 )
    {
LABEL_24:
      result = MiImageCfgEnumNextImageExtensionRva(v4, a2, a3, v4);
      goto LABEL_23;
    }
    do
    {
      if ( !v10 )
        KeBugCheckEx(0x1Au, 0x43666720uLL, BugCheckParameter2, (ULONG_PTR)(v4 + 2), (unsigned int)result);
      --v10;
      a3 = *v9 >> 6;
      v11 = *v9++ & 0x3F;
      a2 = (unsigned int)(*((_DWORD *)RtlpRvaCompressionTableScales + a3) * v11);
      result = (unsigned int)(a2 + result);
    }
    while ( (_DWORD)a3 != 3 );
    v4[2] = result;
    v4[4] = (_DWORD)v9 - *(_DWORD *)(BugCheckParameter2 + 16);
    if ( v7 )
    {
      v12 = *(_DWORD *)(BugCheckParameter2 + 8);
      a2 = 0LL;
      if ( v12 <= 1 )
      {
        if ( v12 == 1 )
        {
          v19 = *(unsigned int **)(BugCheckParameter2 + 48);
          if ( v19 )
            a3 = *v19;
          else
            a3 = 1LL;
          a2 = (unsigned int)a3;
        }
      }
      else
      {
        LODWORD(a3) = 1;
        v13 = 0;
        v14 = v8 * v12;
        v15 = 0LL;
        v16 = *(const signed __int64 **)(BugCheckParameter2 + 40);
        do
        {
          if ( _bittest64(v16, v14 + v13) )
          {
            v17 = *(_QWORD *)(BugCheckParameter2 + 48);
            if ( v17 )
              v18 = *(_DWORD *)(v15 + v17);
            else
              v18 = a3;
            a2 = v18 | (unsigned int)a2;
          }
          ++v13;
          a3 = (unsigned int)__ROL4__(a3, 1);
          v15 += 4LL;
        }
        while ( v13 < v12 );
        result = (unsigned int)v4[2];
      }
      *v7 = a2;
    }
  }
  if ( !(_DWORD)result || (unsigned int)result >= v5 && v5 )
    goto LABEL_24;
LABEL_23:
  *v4 = result;
  return result;
}
