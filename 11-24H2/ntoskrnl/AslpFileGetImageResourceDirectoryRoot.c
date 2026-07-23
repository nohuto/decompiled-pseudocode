/*
 * XREFs of AslpFileGetImageResourceDirectoryRoot @ 0x14080E7AC
 * Callers:
 *     AslpFileGetCrcChecksumBoot @ 0x14080DA84 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x14080F4C8 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslpMemoryCheckBounds @ 0x140697B18 (AslpMemoryCheckBounds.c)
 *     AslpFileGetImageNtHeader @ 0x14080E6E4 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140810584 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageResourceDirectoryRoot(unsigned __int64 *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r14
  int ImageNtHeader; // ebx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  unsigned int *v15; // r11
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int *v18; // rbx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v21 = 0LL;
  if ( *(_DWORD *)(a3 + 64) != 6 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetImageResourceDirectoryRoot",
      1980,
      (unsigned int)"File is not a PE image");
    return 3221225659LL;
  }
  v7 = *(_QWORD *)(a3 + 32);
  v8 = *(_QWORD *)(a3 + 40);
  ImageNtHeader = AslpFileGetImageNtHeader(&v21, a3);
  if ( ImageNtHeader < 0 )
    goto LABEL_28;
  if ( !AslpMemoryCheckBounds(v21, 8uLL, v7, v8) )
  {
    ImageNtHeader = -1073741266;
LABEL_28:
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetImageResourceDirectoryRoot",
      1993,
      (unsigned int)"AslpFileGetImageNtHeader failed to get image headers or headers are out of bounds [%x]");
    return (unsigned int)ImageNtHeader;
  }
  v13 = v12 + 24;
  v14 = *(_WORD *)(v12 + 24);
  if ( v14 != 267 )
  {
    if ( v14 == 523 && *(_WORD *)(v12 + 20) >= 0x70u )
    {
      if ( !AslpMemoryCheckBounds(v13, 0xF0uLL, v10, v11) )
      {
        v16 = 2027;
        goto LABEL_9;
      }
      v17 = v15[33];
      v18 = v15 + 38;
      goto LABEL_16;
    }
    return 3221225595LL;
  }
  if ( *(_WORD *)(v12 + 20) < 0x60u )
    return 3221225595LL;
  if ( !AslpMemoryCheckBounds(v13, 0xE0uLL, v10, v11) )
  {
    v16 = 2011;
LABEL_9:
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetImageResourceDirectoryRoot",
      v16,
      (unsigned int)"Image PE optional header outside image");
    return 3221226030LL;
  }
  v17 = v15[29];
  v18 = v15 + 34;
LABEL_16:
  if ( v17 <= 2 )
    return 3221225609LL;
  if ( v18[1] < 0x10 )
    return 3221225609LL;
  v19 = *v18;
  if ( !(_DWORD)v19 )
    return 3221225609LL;
  v20 = AslpImageRvaToVa(v15, a3 + 8, v19);
  if ( !v20 || !AslpMemoryCheckBounds(v20, v18[1], v7, v8) )
    return v20 != 0 ? -1073741266 : -1073741687;
  *a1 = v20;
  if ( a2 )
    *a2 = v18[1];
  return 0LL;
}
