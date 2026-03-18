/*
 * XREFs of BgpFwAllocateMemory @ 0x140467320
 * Callers:
 *     RaspAllocateMemory @ 0x140467288 (RaspAllocateMemory.c)
 *     BgpRasPrintGlyph @ 0x140472CBC (BgpRasPrintGlyph.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1404C3450 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x140699EC0 (BcpGetProgressMessages.c)
 *     BgpDisplayCharacterGetContext @ 0x140BB0860 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140BB10B0 (BgpConsoleInitialize.c)
 *     ResFwpPageInBackground @ 0x140BB1BB0 (ResFwpPageInBackground.c)
 *     BgpTxtCreateRegion @ 0x140BB2908 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x140BB33FC (TxtpAddCacheEntry.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     BgpTxtGetRegionContext @ 0x140BB3D94 (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x140BB3E78 (BgpGxRectangleCreate.c)
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 *     BgpFoInitialize @ 0x140C6FFA0 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140C701EC (FopInitializeFonts.c)
 *     FopReadCmapTable @ 0x140C70344 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140C70494 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140C70680 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140C70804 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140C70D44 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x140411F30 (MmAllocatePagesForMdlEx.c)
 *     BgpFwReserveAllocate @ 0x140467378 (BgpFwReserveAllocate.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v2; // ebp
  char *v3; // rdi
  PMDL v4; // rbx
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *Pool2; // rax
  PMDL PagesForMdl; // rax
  __int64 v9; // rcx
  char *v10; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140EF0050 & 0x800) != 0 )
    return BgpFwReserveAllocate();
  v2 = dword_140EF0050 & 0x8000;
  v3 = 0LL;
  v4 = 0LL;
  v5 = v2 != 0 ? 48LL : 32LL;
  v6 = v5 + a1;
  if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
  {
    if ( v6 < 0x1000 )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL);
LABEL_13:
      if ( !Pool2 )
        goto LABEL_19;
      v3 = &Pool2[v5];
      if ( v2 )
      {
        v9 = qword_140EF0120;
        v10 = v3 - 40;
        if ( *(__int64 **)(qword_140EF0120 + 8) != &qword_140EF0120 )
          __fastfail(3u);
        *(_QWORD *)v10 = qword_140EF0120;
        *((_QWORD *)v10 + 1) = &qword_140EF0120;
        *(_QWORD *)(v9 + 8) = v10;
        qword_140EF0120 = (__int64)(v3 - 40);
      }
      *((_DWORD *)v3 - 6) = v2 != 0 ? 1262634818 : 1263093570;
      *((_QWORD *)v3 - 2) = v6;
      *((_QWORD *)v3 - 1) = v4;
      if ( !v3 )
      {
LABEL_19:
        if ( v4 )
        {
          MiFreePagesFromMdl((ULONG_PTR)v4, 0, 0, 0);
          ExFreePoolWithTag(v4, 0);
        }
      }
      return (__int64)v3;
    }
    v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
    v4 = PagesForMdl;
    if ( PagesForMdl )
    {
      if ( (PagesForMdl->MdlFlags & 5) != 0 )
        Pool2 = (char *)PagesForMdl->MappedSystemVa;
      else
        Pool2 = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
      goto LABEL_13;
    }
  }
  return (__int64)v3;
}
