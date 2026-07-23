/*
 * XREFs of RtlFindHotPatchInformation @ 0x14081F384
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x1407E2468 (MiCaptureHotPatchInfo.c)
 *     MiOpenHotPatchFile @ 0x140A992CC (MiOpenHotPatchFile.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     RtlFindHotPatchBase @ 0x14081F2E4 (RtlFindHotPatchBase.c)
 *     RtlGetHotPatchBaseMachine @ 0x14081F5C8 (RtlGetHotPatchBaseMachine.c)
 */

__int64 __fastcall RtlFindHotPatchInformation(char *BaseOfImage, int *a2)
{
  int v4; // ebx
  ULONG *v5; // rbp
  ULONG *v6; // rsi
  PIMAGE_NT_HEADERS v7; // r15
  unsigned __int16 Machine; // di
  ULONG *v9; // rcx
  ULONG v10; // eax
  bool v11; // cf
  char *v12; // rdx
  __int64 SizeOfImage; // r9
  unsigned int v14; // r8d
  unsigned int *v15; // r10
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  char *HotPatchBase; // rax
  __int16 HotPatchBaseMachine; // ax
  __int64 v22; // r10
  int v23; // r11d
  ULONG Size; // [rsp+70h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS v26; // [rsp+78h] [rbp+20h] BYREF

  Size = 0;
  v26 = 0LL;
  v4 = 1;
  v5 = 0LL;
  v6 = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v26);
  v7 = v26;
  Machine = v26->FileHeader.Machine;
  v9 = (ULONG *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( !v9 )
    return 0LL;
  if ( Machine == 0x8664 || Machine == 0xAA64 )
  {
    v10 = Size;
    if ( Size <= 4 )
      return 0LL;
    v6 = v9;
    if ( Size != *v9 )
      return 0LL;
    v11 = Size < 0xF4;
  }
  else
  {
    if ( Machine != 332 )
      return 0LL;
    v10 = Size;
    if ( Size <= 4 )
      return 0LL;
    v5 = v9;
    if ( Size == 64 )
      v10 = *v9;
    if ( v10 != *v9 )
      return 0LL;
    v11 = v10 < 0x98;
  }
  if ( v11 )
    return 0LL;
  v12 = (char *)v9 + v10;
  if ( v12 < (char *)v9 )
    return 0LL;
  SizeOfImage = v7->OptionalHeader.SizeOfImage;
  if ( v9 >= (ULONG *)&BaseOfImage[SizeOfImage] || v12 > &BaseOfImage[SizeOfImage] )
    return 0LL;
  v14 = Machine == 0x8664 || Machine == 0xAA64 ? v6[60] : v5[37];
  if ( v14 >= 0xFFFFFFF8 || v14 == 0 || v14 + 8 > (unsigned int)SizeOfImage )
    return 0LL;
  v15 = (unsigned int *)&BaseOfImage[v14];
  switch ( *v15 )
  {
    case 1u:
      v16 = 20;
      break;
    case 2u:
      v16 = 24;
      break;
    case 3u:
      v16 = 28;
      break;
    case 4u:
      v16 = 36;
      break;
    default:
      return 0LL;
  }
  v17 = v15[1];
  if ( v17 < v16 )
    return 0LL;
  if ( !v15[2] )
    return 0LL;
  if ( v17 + v14 <= v17 )
    return 0LL;
  if ( v17 + v14 > (unsigned int)SizeOfImage )
    return 0LL;
  v18 = v15[4];
  if ( v18 > 0x3FFFFFF7 )
    return 0LL;
  v19 = 4 * v18 + v15[3];
  if ( v19 <= 4 * v18 || v19 > v17 || v6 && *((_QWORD *)v6 + 25) )
    return 0LL;
  if ( v18 != 1 )
    return 0LL;
  HotPatchBase = RtlFindHotPatchBase(v15, 0);
  if ( !HotPatchBase )
    return 0LL;
  HotPatchBaseMachine = RtlGetHotPatchBaseMachine(HotPatchBase);
  if ( HotPatchBaseMachine )
  {
    if ( HotPatchBaseMachine != Machine )
      return 0LL;
  }
  if ( Machine == 0x8664 )
  {
    v4 = 2;
  }
  else if ( Machine == 0xAA64 )
  {
    v4 = v23;
  }
  if ( a2 )
    *a2 = v4;
  return v22;
}
