/*
 * XREFs of MiImageCfgEnumRvaListNext @ 0x14091CF80
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiImageCfgEnumNextImageExtensionRva @ 0x14091D0F0 (MiImageCfgEnumNextImageExtensionRva.c)
 */

__int64 __fastcall MiImageCfgEnumRvaListNext(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  __int64 result; // rax
  _DWORD *v3; // r9
  unsigned int v4; // r10d
  int *v6; // r12
  unsigned int v7; // ebp
  __int64 v8; // rdx
  unsigned __int8 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // edx
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // r8d
  unsigned int v16; // edi
  int v17; // r15d
  __int64 v18; // r14
  const signed __int64 *v19; // rbp
  __int64 v20; // rax
  int v21; // ecx
  int *v22; // r8
  int v23; // r8d

  result = *a2;
  v3 = a2;
  v4 = a2[5];
  if ( (unsigned int)result < v4 || !v4 )
  {
    ++a2[3];
    v6 = (int *)(a2 + 1);
    v7 = a2[3];
    LODWORD(result) = a2[2];
    v8 = a2[4];
    v9 = (unsigned __int8 *)(v8 + *(_QWORD *)(BugCheckParameter2 + 16));
    v10 = *(_QWORD *)(BugCheckParameter2 + 24) - v8;
    if ( !v10 )
    {
LABEL_24:
      result = MiImageCfgEnumNextImageExtensionRva(v3);
      goto LABEL_23;
    }
    do
    {
      if ( !v10 )
        KeBugCheckEx(0x1Au, 0x43666720uLL, BugCheckParameter2, (ULONG_PTR)(v3 + 2), (unsigned int)result);
      --v10;
      v11 = *v9 >> 6;
      v12 = *v9++ & 0x3F;
      result = (unsigned int)(*((_DWORD *)RtlpRvaCompressionTableScales + v11) * v12 + result);
    }
    while ( (_DWORD)v11 != 3 );
    v3[2] = result;
    v3[4] = (_DWORD)v9 - *(_DWORD *)(BugCheckParameter2 + 16);
    if ( v6 )
    {
      v13 = *(_DWORD *)(BugCheckParameter2 + 8);
      v14 = 0;
      if ( v13 <= 1 )
      {
        if ( v13 == 1 )
        {
          v22 = *(int **)(BugCheckParameter2 + 48);
          if ( v22 )
            v23 = *v22;
          else
            v23 = 1;
          v14 = v23;
        }
      }
      else
      {
        v15 = 1;
        v16 = 0;
        v17 = v7 * v13;
        v18 = 0LL;
        v19 = *(const signed __int64 **)(BugCheckParameter2 + 40);
        do
        {
          if ( _bittest64(v19, v17 + v16) )
          {
            v20 = *(_QWORD *)(BugCheckParameter2 + 48);
            if ( v20 )
              v21 = *(_DWORD *)(v18 + v20);
            else
              v21 = v15;
            v14 |= v21;
          }
          ++v16;
          v15 = __ROL4__(v15, 1);
          v18 += 4LL;
        }
        while ( v16 < v13 );
        result = (unsigned int)v3[2];
      }
      *v6 = v14;
    }
  }
  if ( !(_DWORD)result || (unsigned int)result >= v4 && v4 )
    goto LABEL_24;
LABEL_23:
  *v3 = result;
  return result;
}
