/*
 * XREFs of BgpFwAllocateMemory @ 0x14045ED38
 * Callers:
 *     RaspAllocateMemory @ 0x14045EBE4 (RaspAllocateMemory.c)
 *     BgpRasPrintGlyph @ 0x14046EF8C (BgpRasPrintGlyph.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1404BE988 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x14069AF40 (BcpGetProgressMessages.c)
 *     BgpDisplayCharacterGetContext @ 0x140BB2860 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140BB30B0 (BgpConsoleInitialize.c)
 *     ResFwpPageInBackground @ 0x140BB3BB0 (ResFwpPageInBackground.c)
 *     BgpTxtCreateRegion @ 0x140BB4908 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x140BB53FC (TxtpAddCacheEntry.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 *     BgpTxtGetRegionContext @ 0x140BB5D94 (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x140BB5E78 (BgpGxRectangleCreate.c)
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 *     BgpFoInitialize @ 0x140C72100 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140C7234C (FopInitializeFonts.c)
 *     FopReadCmapTable @ 0x140C724A4 (FopReadCmapTable.c)
 *     FopReadMappingTable @ 0x140C725F4 (FopReadMappingTable.c)
 *     FopReadNamingTable @ 0x140C727E0 (FopReadNamingTable.c)
 *     FopValidateFontNameTable @ 0x140C72964 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140C72EA4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x140395340 (MmAllocatePagesForMdlEx.c)
 *     BgpFwReserveAllocate @ 0x14045ED90 (BgpFwReserveAllocate.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v2; // ebp
  char *v3; // rdi
  PMDL v4; // rbx
  ULONG v5; // r14d
  __int64 v6; // r15
  ULONG_PTR v7; // rsi
  char *Pool2; // rax
  PMDL PagesForMdl; // rax
  __int64 v10; // rcx
  char *v11; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140EF0270 & 0x800) != 0 )
    return BgpFwReserveAllocate();
  v2 = dword_140EF0270 & 0x8000;
  v3 = 0LL;
  v4 = 0LL;
  v5 = v2 != 0 ? 1262634818 : 1263093570;
  v6 = v2 != 0 ? 48LL : 32LL;
  v7 = v6 + a1;
  if ( v6 + a1 >= a1 && v7 < 0xFFFFEFFF )
  {
    if ( v7 < 0x1000 )
    {
      Pool2 = (char *)ExAllocatePool2(0x40uLL, v7, v5);
LABEL_13:
      if ( !Pool2 )
        goto LABEL_19;
      v3 = &Pool2[v6];
      if ( v2 )
      {
        v10 = qword_140EF0340;
        v11 = v3 - 40;
        if ( *(__int64 **)(qword_140EF0340 + 8) != &qword_140EF0340 )
          __fastfail(3u);
        *(_QWORD *)v11 = qword_140EF0340;
        *((_QWORD *)v11 + 1) = &qword_140EF0340;
        *(_QWORD *)(v10 + 8) = v11;
        qword_140EF0340 = (__int64)(v3 - 40);
      }
      *((_DWORD *)v3 - 6) = v5;
      *((_QWORD *)v3 - 2) = v7;
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
    v7 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v7, MmCached, 5u);
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
