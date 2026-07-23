/*
 * XREFs of BgpTxtGetRegionContext @ 0x140BB5D94
 * Callers:
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 */

__int64 __fastcall BgpTxtGetRegionContext(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  _QWORD *i; // rcx
  BOOL v5; // edi
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 0LL;
  v2 = -1073741275;
  if ( !FontLibraryInitialized )
    return 0LL;
  v3 = FopFontFileListHead;
  while ( 1 )
  {
    i = 0LL;
    if ( (__int64 *)v3 == &FopFontFileListHead )
      break;
    for ( i = *(_QWORD **)(v3 + 40); i != (_QWORD *)(v3 + 40); i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(v3 + 28) & 1) != 0 )
      {
        v2 = 0;
        goto LABEL_10;
      }
    }
    v3 = *(_QWORD *)v3;
    v2 = -1073741275;
  }
LABEL_10:
  if ( v2 < 0 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 48) == (_QWORD)i;
  result = BgpFwAllocateMemory(0x24uLL);
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 32) = 0;
    *(_QWORD *)result = *(_QWORD *)a1;
    *(_QWORD *)(result + 8) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(result + 16) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(result + 28) = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(result + 20) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(result + 24) = v5;
  }
  return result;
}
