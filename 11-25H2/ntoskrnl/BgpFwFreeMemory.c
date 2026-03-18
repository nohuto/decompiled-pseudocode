/*
 * XREFs of BgpFwFreeMemory @ 0x140468C70
 * Callers:
 *     RaspFreeMemory @ 0x140468C54 (RaspFreeMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1404C4DB0 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140BA0834 (BgpDisplayCharacterDestroyContext.c)
 *     BgpDisplayCharacterGetContext @ 0x140BA0860 (BgpDisplayCharacterGetContext.c)
 *     BgConsoleDestroyInterface @ 0x140BA0940 (BgConsoleDestroyInterface.c)
 *     BgpConsoleInitialize @ 0x140BA10B0 (BgpConsoleInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140BA1678 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140BA1724 (BgpFwLibraryDisable.c)
 *     ResFwpDestroyBackground @ 0x140BA1B3C (ResFwpDestroyBackground.c)
 *     ResFwpPageInBackground @ 0x140BA1BB0 (ResFwpPageInBackground.c)
 *     ResFwpPageOutBackground @ 0x140BA1C34 (ResFwpPageOutBackground.c)
 *     BgpFoDestroy @ 0x140BA273C (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x140BA2800 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140BA28AC (FopFreeMappingTable.c)
 *     BgpTxtCreateRegion @ 0x140BA2908 (BgpTxtCreateRegion.c)
 *     BgpTxtDestroyRegion @ 0x140BA2B5C (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x140BA3F04 (BgpGxRectangleDestroy.c)
 *     TxtpDestroyCacheEntry @ 0x140BA43D4 (TxtpDestroyCacheEntry.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 *     BgpFoInitialize @ 0x140C5EBC0 (BgpFoInitialize.c)
 *     FopReadCmapTable @ 0x140C5EF64 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140C5F0B4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140C5F2A0 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140C5F424 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140C5F964 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
    v3 = a1 - 24 - qword_140E64BC0 - 8;
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
