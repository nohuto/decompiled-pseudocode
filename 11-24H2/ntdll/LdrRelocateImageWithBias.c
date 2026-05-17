/*
 * XREFs of LdrRelocateImageWithBias @ 0x1800E5420
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800E502C (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x1800E5510 (LdrProcessRelocationBlockLongLong.c)
 */

__int64 __fastcall LdrRelocateImageWithBias(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 v4; // rbp
  _DWORD *v5; // rax
  int v6; // esi
  int v7; // r8d
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v1 = 0;
  v10 = 0;
  v9 = 0LL;
  if ( (int)RtlImageNtHeaderEx(1, a1, 0LL, &v9) < 0 )
    return (unsigned int)-1073741701;
  v3 = v9;
  if ( *(_WORD *)(v9 + 24) == 267 )
  {
    v4 = *(unsigned int *)(v9 + 52);
    goto LABEL_5;
  }
  if ( *(_WORD *)(v9 + 24) != 523 )
    return (unsigned int)-1073741701;
  v4 = *(_QWORD *)(v9 + 48);
LABEL_5:
  v5 = (_DWORD *)RtlImageDirectoryEntryToData(a1, 1, 5u, &v10);
  if ( v5 && (v6 = v10) != 0 )
  {
    while ( v6 )
    {
      v7 = v5[1];
      v6 -= v7;
      v5 = (_DWORD *)LdrProcessRelocationBlockLongLong(
                       *(unsigned __int16 *)(v3 + 4),
                       (int)a1 + *v5,
                       (unsigned int)(v7 - 8) >> 1,
                       (int)v5 + 8,
                       a1 - v4);
      if ( !v5 )
        return (unsigned int)-1073741701;
    }
  }
  else
  {
    return (*(_BYTE *)(v3 + 22) & 1) != 0 ? 0xC0000018 : 0;
  }
  return v1;
}
