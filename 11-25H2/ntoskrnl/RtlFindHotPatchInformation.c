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

__int64 __fastcall RtlFindHotPatchInformation(unsigned __int64 a1, int *a2)
{
  int v4; // ebx
  unsigned int *v5; // rbp
  unsigned int *v6; // rsi
  __int64 v7; // r15
  __int16 v8; // di
  unsigned int *v9; // rcx
  unsigned int v10; // eax
  bool v11; // cf
  char *v12; // rdx
  __int64 v13; // r9
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
  unsigned int v25; // [rsp+70h] [rbp+18h] BYREF
  __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  v25 = 0;
  v26 = 0LL;
  v4 = 1;
  v5 = 0LL;
  v6 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v26);
  v7 = v26;
  v8 = *(_WORD *)(v26 + 4);
  v9 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1, 0xAu, &v25);
  if ( !v9 )
    return 0LL;
  if ( v8 == -31132 || v8 == -21916 )
  {
    v10 = v25;
    if ( v25 <= 4 )
      return 0LL;
    v6 = v9;
    if ( v25 != *v9 )
      return 0LL;
    v11 = v25 < 0xF4;
  }
  else
  {
    if ( v8 != 332 )
      return 0LL;
    v10 = v25;
    if ( v25 <= 4 )
      return 0LL;
    v5 = v9;
    if ( v25 == 64 )
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
  v13 = *(unsigned int *)(v7 + 80);
  if ( (unsigned __int64)v9 >= a1 + v13 || (unsigned __int64)v12 > a1 + v13 )
    return 0LL;
  v14 = v8 == -31132 || v8 == -21916 ? v6[60] : v5[37];
  if ( v14 >= 0xFFFFFFF8 || v14 == 0 || v14 + 8 > (unsigned int)v13 )
    return 0LL;
  v15 = (unsigned int *)(a1 + v14);
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
  if ( v17 + v14 > (unsigned int)v13 )
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
    if ( HotPatchBaseMachine != v8 )
      return 0LL;
  }
  if ( v8 == -31132 )
  {
    v4 = 2;
  }
  else if ( v8 == -21916 )
  {
    v4 = v23;
  }
  if ( a2 )
    *a2 = v4;
  return v22;
}
