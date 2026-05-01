/*
 * XREFs of AslpFileGetCrcChecksumBoot @ 0x1800A0744
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x1800A0078 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslComputeCrc32 @ 0x18009D2A0 (AslComputeCrc32.c)
 *     AslpFileGetImageCodeSectionHeader @ 0x1800A1214 (AslpFileGetImageCodeSectionHeader.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x1800A1484 (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x1800A1FE0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpImageRvaToVa @ 0x1800A36AC (AslpImageRvaToVa.c)
 *     AslpMemoryRangeCheckBounds @ 0x1800A3760 (AslpMemoryRangeCheckBounds.c)
 */

__int64 __fastcall AslpFileGetCrcChecksumBoot(int *a1, __int64 a2, __int64 a3)
{
  int v6; // r14d
  int ImageCodeSectionHeader; // ebx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  int ImageResourceDirectoryRoot; // r10d
  __int64 v13; // r11
  int VersionBlockFromResourceRoot; // eax
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  _BYTE **v17; // rcx
  __int64 v18; // r10
  __int128 v19; // [rsp+40h] [rbp-98h] BYREF
  __int128 v20; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v22; // [rsp+70h] [rbp-68h] BYREF
  __int64 v23; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-58h]
  __int128 v25; // [rsp+88h] [rbp-50h] BYREF
  _QWORD v26[8]; // [rsp+98h] [rbp-40h] BYREF
  __int64 v27; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+20h] BYREF

  v6 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  v21[0] = *(_QWORD *)(a3 + 32);
  v21[1] = v21[0] + *(_QWORD *)(a3 + 40);
  v25 = 0LL;
  ImageCodeSectionHeader = AslpFileGetImageCodeSectionHeader(&v25, a2, v21);
  if ( ImageCodeSectionHeader < 0 )
  {
    AslLogCallPrintf(1LL);
    return (unsigned int)ImageCodeSectionHeader;
  }
  if ( !(unsigned __int8)AslpMemoryRangeCheckBounds(&v25, v21) )
  {
    AslLogCallPrintf(1LL);
    return 3221226030LL;
  }
  v9 = v25;
  v10 = AslpImageRvaToVa(a2, a3 + 8, *(unsigned int *)(v25 + 12));
  *(_QWORD *)&v19 = v10;
  v11 = 4096LL;
  if ( *(_DWORD *)(v9 + 16) < 0x1000u )
    v11 = *(unsigned int *)(v9 + 16);
  *((_QWORD *)&v19 + 1) = v10 + v11;
  if ( !(unsigned __int8)AslpMemoryRangeCheckBounds(&v19, v21) )
  {
    AslLogCallPrintf(1LL);
    return 3221226030LL;
  }
  ImageResourceDirectoryRoot = AslpFileGetImageResourceDirectoryRoot(&v27, &v28, a3);
  *(_QWORD *)&v20 = v27;
  *((_QWORD *)&v20 + 1) = v27 + v28;
  if ( ImageResourceDirectoryRoot >= 0 && (unsigned __int8)AslpMemoryRangeCheckBounds(&v20, v21) )
  {
    VersionBlockFromResourceRoot = AslpFileGetVersionBlockFromResourceRoot(&v22, &v23, v13, a3);
    if ( VersionBlockFromResourceRoot >= 0 )
    {
      v26[0] = v22;
      v26[1] = v22 + v23;
      if ( !(unsigned __int8)AslpMemoryRangeCheckBounds(v26, &v20) )
      {
        *((_QWORD *)&v20 + 1) = v15;
        *(_QWORD *)&v20 = v15 - 4096;
      }
      goto LABEL_19;
    }
    if ( (unsigned int)(VersionBlockFromResourceRoot + 1073741687) > 2 )
      goto LABEL_17;
  }
  else if ( (unsigned int)(ImageResourceDirectoryRoot + 1073741687) > 2 )
  {
LABEL_17:
    AslLogCallPrintf(1LL);
  }
  v20 = 0LL;
LABEL_19:
  v16 = 0LL;
  v24 = 0LL;
  while ( v16 < 2 )
  {
    if ( *((_QWORD *)&v19 + 2 * v16 + 1) )
    {
      if ( (unsigned __int8)AslpMemoryRangeCheckBounds(&v19 + v16, v21) )
        v6 = AslComputeCrc32(v6, *v17, *(_DWORD *)((char *)&v19 + v18 + 8) - *(_DWORD *)v17);
    }
    v24 = ++v16;
  }
  *a1 = v6;
  return 0LL;
}
