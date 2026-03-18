/*
 * XREFs of BgpFwAllocateMemory @ 0x140468D2C
 * Callers:
 *     RaspAllocateMemory @ 0x140468BD8 (RaspAllocateMemory.c)
 *     BgpRasPrintGlyph @ 0x140473D1C (BgpRasPrintGlyph.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1404C4DB0 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x14068EB70 (BcpGetProgressMessages.c)
 *     BgpDisplayCharacterGetContext @ 0x140BA0860 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140BA10B0 (BgpConsoleInitialize.c)
 *     ResFwpPageInBackground @ 0x140BA1BB0 (ResFwpPageInBackground.c)
 *     BgpTxtCreateRegion @ 0x140BA2908 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x140BA33FC (TxtpAddCacheEntry.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     BgpTxtGetRegionContext @ 0x140BA3D94 (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x140BA3E78 (BgpGxRectangleCreate.c)
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 *     BgpFoInitialize @ 0x140C5EBC0 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140C5EE0C (FopInitializeFonts.c)
 *     FopReadCmapTable @ 0x140C5EF64 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140C5F0B4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140C5F2A0 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140C5F424 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140C5F964 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1404154A0 (MmAllocatePagesForMdlEx.c)
 *     BgpFwReserveAllocate @ 0x140468D84 (BgpFwReserveAllocate.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  if ( (dword_140EEFD90 & 0x800) != 0 )
    return BgpFwReserveAllocate();
  v2 = dword_140EEFD90 & 0x8000;
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
        v9 = qword_140EEFE60;
        v10 = v3 - 40;
        if ( *(__int64 **)(qword_140EEFE60 + 8) != &qword_140EEFE60 )
          __fastfail(3u);
        *(_QWORD *)v10 = qword_140EEFE60;
        *((_QWORD *)v10 + 1) = &qword_140EEFE60;
        *(_QWORD *)(v9 + 8) = v10;
        qword_140EEFE60 = (__int64)(v3 - 40);
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
