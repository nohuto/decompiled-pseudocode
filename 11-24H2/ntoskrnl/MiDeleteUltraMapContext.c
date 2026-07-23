/*
 * XREFs of MiDeleteUltraMapContext @ 0x140352DF0
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x14035384C (MiReclaimUnusedUltraMdlMaps.c)
 *     MiGetUltraMdlContext @ 0x1404930EC (MiGetUltraMdlContext.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // r12d
  unsigned __int8 CurrentIrql; // al
  char v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR *v10; // rsi
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = *(_BYTE *)(a1 + 25) != 0 ? 0xFFFFFFFE : 0;
    CurrentIrql = KeGetCurrentIrql();
    v5 = 6;
    v6 = 2LL;
    if ( CurrentIrql != 2 )
      v5 = 2;
    MiGetUltraMapping(a1, a2, MiPageSizes[(unsigned int)a2], v5);
    _InterlockedDecrement(&dword_140E3605C);
    v10 = (ULONG_PTR *)(a1 + 8);
    v11 = 0LL;
    do
    {
      v12 = *v10;
      if ( *v10 != -1LL )
      {
        v13 = 48 * v12 - 0x220000000000LL;
        if ( byte_140E2DC81 )
        {
          v14 = MI_PAGE_TO_FULL_COLOR(v12);
          MiManageUltraSpacePageTable(v13, v14, v3 + 3);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(v12);
          if ( (v5 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v13, v7, v8, v9);
          else
            MiReleaseFreshPage(v13);
          ++v11;
        }
        *v10 = -1LL;
      }
      ++v10;
      --v6;
    }
    while ( v6 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v11 )
      MiReleaseNonPagedResources((__int64)&MiSystemPartition, v11);
  }
}
