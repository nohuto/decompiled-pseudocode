/*
 * XREFs of BgpFwFreeMemory @ 0x14045EC7C
 * Callers:
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1404BE988 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140BB2834 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140BB2860 (BgpDisplayCharacterGetContext.c)
 *     BgConsoleDestroyInterface @ 0x140BB2940 (BgConsoleDestroyInterface.c)
 *     BgpConsoleInitialize @ 0x140BB30B0 (BgpConsoleInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140BB3678 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140BB3724 (BgpFwLibraryDisable.c)
 *     ResFwpDestroyBackground @ 0x140BB3B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140BB3BB0 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140BB3C34 (ResFwpPageOutBackground.c)
 *     BgpFoDestroy @ 0x140BB473C (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x140BB4800 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140BB48AC (FopFreeMappingTable.c)
 *     BgpTxtCreateRegion @ 0x140BB4908 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140BB4B5C (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 *     TxtpDestroyCacheEntry @ 0x140BB63D4 (TxtpDestroyCacheEntry.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 *     BgpFoInitialize @ 0x140C72100 (BgpFoInitialize.c)
 *     FopReadCmapTable @ 0x140C724A4 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140C725F4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140C727E0 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140C72964 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140C72EA4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  ULONG v2; // edx
  ULONG v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r10
  _QWORD *v6; // r9
  __int64 v7; // rax
  struct _MDL *v8; // rcx
  struct _MDL *v9; // rbx

  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v3 = a1 - 24 - qword_140E623C8 - 8;
    RtlClearBits(&BitMapHeader, v3, *(_DWORD *)(a1 - 16));
    if ( v3 < HintIndex )
      HintIndex = v3;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v4 = a1 - 40;
      v5 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v5 + 8) != a1 - 40 || (v6 = *(_QWORD **)(v4 + 8), *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v7 = 48LL;
      *(_QWORD *)(v5 + 8) = v6;
    }
    else
    {
      v7 = 32LL;
    }
    v8 = (struct _MDL *)(a1 - v7);
    if ( *(_QWORD *)(a1 - 16) >= 0x1000uLL )
    {
      v9 = *(struct _MDL **)(a1 - 8);
      MmUnmapLockedPages(v8, v9);
      MiFreePagesFromMdl((ULONG_PTR)v9, 0, 0, 0);
      v2 = 0;
      v8 = v9;
    }
    ExFreePoolWithTag(v8, v2);
  }
}
