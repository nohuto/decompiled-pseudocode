/*
 * XREFs of AslpFileGetVersionBlockImageOnly @ 0x14080F4C8
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x14080EBD8 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslpMemoryCheckBounds @ 0x140697B18 (AslpMemoryCheckBounds.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AslFileMappingEnsure @ 0x14080989C (AslFileMappingEnsure.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14080E7AC (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x14080F25C (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetVersionBlockImageOnly(_QWORD *a1, unsigned __int16 **a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // rcx
  unsigned __int16 *v10; // rdx
  unsigned int v11; // ebx
  int ImageResourceDirectoryRoot; // eax
  const char *v13; // r9
  int v14; // r8d
  int VersionBlockFromResourceRoot; // eax
  unsigned __int64 v16; // r14
  const char *v17; // r9
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rax
  unsigned __int16 *v22; // rsi
  unsigned __int16 *v23; // rcx
  size_t Size[7]; // [rsp+40h] [rbp-38h] BYREF
  void *Src; // [rsp+90h] [rbp+18h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  v28 = 0LL;
  Src = 0LL;
  Size[0] = 0LL;
  v7 = *(_QWORD *)(a4 + 72);
  if ( v7 )
  {
    v8 = *(_WORD *)(v7 + 2);
    v9 = (unsigned __int16 *)(v7 + 40);
    v10 = 0LL;
    if ( v8 >= 0x34u )
      v10 = v9;
    *a2 = v10;
    *a1 = *(_QWORD *)(a4 + 72);
    return 0;
  }
  v11 = AslFileMappingEnsure(a4);
  if ( (v11 & 0x80000000) != 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionBlockImageOnly",
      2344,
      (unsigned int)"AslFileMappingEnsure failed [%x]");
    return v11;
  }
  if ( *(_DWORD *)(a4 + 64) != 6 )
    return (unsigned int)-1073741687;
  ImageResourceDirectoryRoot = AslpFileGetImageResourceDirectoryRoot((unsigned __int64 *)&v28, 0LL, a4);
  v11 = ImageResourceDirectoryRoot;
  if ( ImageResourceDirectoryRoot < 0 )
  {
    if ( (unsigned int)(ImageResourceDirectoryRoot + 1073741687) <= 2 )
      return v11;
    v13 = "AslpFileGetImageResourceDirectoryRoot failed to get resource directory root [%x]";
    v14 = 2371;
LABEL_12:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlockImageOnly", v14, (_DWORD)v13);
    return v11;
  }
  VersionBlockFromResourceRoot = AslpFileGetVersionBlockFromResourceRoot(&Src, Size, v28, a4);
  v11 = VersionBlockFromResourceRoot;
  if ( VersionBlockFromResourceRoot < 0 )
  {
    if ( (unsigned int)(VersionBlockFromResourceRoot + 1073741687) <= 2 )
      return v11;
    v13 = "AslpFileGetVersionBlockFromResourceRoot failed to get version block from resource directory [%x]";
    v14 = 2379;
    goto LABEL_12;
  }
  v16 = Size[0];
  if ( !Size[0] )
    return (unsigned int)-1073741687;
  if ( !Src )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetVersionBlockImageOnly",
      2391,
      (unsigned int)"AslpFileGetVersionBlockFromResourceRoot returned null version block with status [%x]");
    return (unsigned int)-1073741687;
  }
  if ( Size[0] > 0x7FFF )
  {
    v17 = "AslpFileGetVersionBlockFromResourceRoot returned version block size that is too large";
    v18 = 2397;
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetVersionBlockImageOnly", v18, (_DWORD)v17);
    return (unsigned int)-1073741687;
  }
  if ( !AslpMemoryCheckBounds((unsigned __int64)Src, Size[0], *(_QWORD *)(a4 + 32), *(_QWORD *)(a4 + 40)) )
  {
    v17 = "Version block out of range";
    v18 = 2406;
    goto LABEL_22;
  }
  v21 = (unsigned __int16 *)AslAlloc(v20, v19);
  v22 = v21;
  if ( v21 )
  {
    memmove(v21, Src, v16);
    if ( v16 < *v22 )
      *v22 = v16;
    v23 = v22 + 20;
    if ( v22[1] < 0x34u )
      v23 = 0LL;
    *a2 = v23;
    *a1 = v22;
    *(_QWORD *)(a4 + 72) = v22;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
}
