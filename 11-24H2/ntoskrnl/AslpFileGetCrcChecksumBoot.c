/*
 * XREFs of AslpFileGetCrcChecksumBoot @ 0x14080DA84
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x14080D3E0 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslpMemoryRangeCheckBounds @ 0x140697B54 (AslpMemoryRangeCheckBounds.c)
 *     AslComputeCrc32 @ 0x140808DAC (AslComputeCrc32.c)
 *     AslpFileGetImageCodeSectionHeader @ 0x14080E548 (AslpFileGetImageCodeSectionHeader.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14080E7AC (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x14080F25C (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpImageRvaToVa @ 0x140810584 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetCrcChecksumBoot(int *a1, __int64 a2, __int64 a3)
{
  int v6; // r14d
  int ImageCodeSectionHeader; // ebx
  __int64 v9; // rbx
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // rax
  int ImageResourceDirectoryRoot; // r10d
  __int64 v14; // r11
  int VersionBlockFromResourceRoot; // eax
  __int64 v16; // r10
  const char *v17; // r9
  int v18; // r8d
  unsigned __int64 v19; // r11
  __int64 v20; // r10
  _BYTE **v21; // rbx
  __int64 v22; // r10
  __int128 v23; // [rsp+38h] [rbp-90h] BYREF
  __int128 v24; // [rsp+48h] [rbp-80h] BYREF
  __int128 v25; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v26[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v27; // [rsp+78h] [rbp-50h] BYREF
  __int64 v28; // [rsp+80h] [rbp-48h] BYREF
  int v29; // [rsp+88h] [rbp-40h]
  unsigned __int64 v30; // [rsp+90h] [rbp-38h]
  __int64 v31; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+20h] BYREF

  v6 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  v26[0] = *(_QWORD *)(a3 + 32);
  v26[1] = v26[0] + *(_QWORD *)(a3 + 40);
  v23 = 0LL;
  ImageCodeSectionHeader = AslpFileGetImageCodeSectionHeader(&v23, a2, v26);
  if ( ImageCodeSectionHeader < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetCrcChecksumBoot",
      4844,
      (unsigned int)"AslpFileGetImageCodeSectionHeader failed to locate the code section header of the image [%x]");
    return (unsigned int)ImageCodeSectionHeader;
  }
  if ( !AslpMemoryRangeCheckBounds((unsigned __int64 *)&v23, v26) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetCrcChecksumBoot",
      4849,
      (unsigned int)"AslpFileGetImageCodeSectionHeader returned section header out of bounds");
    return 3221226030LL;
  }
  v9 = v23;
  v10 = AslpImageRvaToVa(a2, a3 + 8, *(unsigned int *)(v23 + 12));
  *(_QWORD *)&v24 = v10;
  v11 = *(_DWORD *)(v9 + 16);
  v12 = 4096LL;
  if ( v11 < 0x1000 )
    v12 = v11;
  *((_QWORD *)&v24 + 1) = v10 + v12;
  if ( !AslpMemoryRangeCheckBounds((unsigned __int64 *)&v24, v26) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetCrcChecksumBoot",
      4859,
      (unsigned int)"Image code section range is outside image boundary");
    return 3221226030LL;
  }
  ImageResourceDirectoryRoot = AslpFileGetImageResourceDirectoryRoot(&v31, &v32, a3);
  *(_QWORD *)&v25 = v31;
  *((_QWORD *)&v25 + 1) = v31 + v32;
  if ( ImageResourceDirectoryRoot >= 0 && AslpMemoryRangeCheckBounds((unsigned __int64 *)&v25, v26) )
  {
    VersionBlockFromResourceRoot = AslpFileGetVersionBlockFromResourceRoot(&v27, &v28, v14, a3);
    if ( VersionBlockFromResourceRoot >= 0 )
    {
      *(_QWORD *)&v23 = v27;
      *((_QWORD *)&v23 + 1) = v27 + v28;
      if ( !AslpMemoryRangeCheckBounds((unsigned __int64 *)&v23, (unsigned __int64 *)&v25) )
      {
        *((_QWORD *)&v25 + 1) = v16;
        *(_QWORD *)&v25 = v16 - 4096;
      }
      goto LABEL_20;
    }
    if ( (unsigned int)(VersionBlockFromResourceRoot + 1073741687) > 2 )
    {
      v17 = "AslpFileGetVersionBlockFromResourceRoot failed [%x]";
      v18 = 4895;
LABEL_18:
      AslLogCallPrintf(1, (unsigned int)"AslpFileGetCrcChecksumBoot", v18, (_DWORD)v17);
    }
  }
  else if ( (unsigned int)(ImageResourceDirectoryRoot + 1073741687) > 2 )
  {
    v17 = "AslpFileGetVersionBlockImageOnly failed [%x]";
    v18 = 4909;
    goto LABEL_18;
  }
  v25 = 0LL;
LABEL_20:
  v19 = 0LL;
  v30 = 0LL;
  while ( v19 < 2 )
  {
    v20 = 16 * v19;
    if ( *((_QWORD *)&v24 + 2 * v19 + 1) )
    {
      v21 = (_BYTE **)((char *)&v24 + v20);
      if ( AslpMemoryRangeCheckBounds((unsigned __int64 *)((char *)&v24 + v20), v26) )
      {
        v6 = AslComputeCrc32(v6, *v21, *(_DWORD *)((char *)&v24 + v22 + 8) - *(_DWORD *)v21);
        v29 = v6;
      }
    }
    v30 = ++v19;
  }
  *a1 = v6;
  return 0LL;
}
