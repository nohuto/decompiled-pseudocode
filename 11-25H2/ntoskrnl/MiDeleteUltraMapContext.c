/*
 * XREFs of MiDeleteUltraMapContext @ 0x140450D20
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x140450C38 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiGetUltraMdlContext @ 0x140498B1C (MiGetUltraMdlContext.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiManageUltraSpacePageTable @ 0x140450E6C (MiManageUltraSpacePageTable.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // r12d
  unsigned __int8 CurrentIrql; // al
  char v5; // r15
  __int64 v6; // r14
  ULONG_PTR *v7; // rsi
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = *(_BYTE *)(a1 + 25) != 0 ? 0xFFFFFFFE : 0;
    CurrentIrql = KeGetCurrentIrql();
    v5 = 6;
    v6 = 2LL;
    if ( CurrentIrql != 2 )
      v5 = 2;
    MiGetUltraMapping(a1, a2, MiPageSizes[(unsigned int)a2], v5);
    _InterlockedDecrement(&dword_140E35CDC);
    v7 = (ULONG_PTR *)(a1 + 8);
    v8 = 0LL;
    do
    {
      v9 = *v7;
      if ( *v7 != -1LL )
      {
        v10 = 48 * v9 - 0x220000000000LL;
        if ( byte_140E2D901 )
        {
          v11 = MI_PAGE_TO_FULL_COLOR(v9);
          MiManageUltraSpacePageTable(v10, v11, v3 + 3);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(v9);
          if ( (v5 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v10);
          else
            MiReleaseFreshPage(v10);
          ++v8;
        }
        *v7 = -1LL;
      }
      ++v7;
      --v6;
    }
    while ( v6 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v8 )
      MiReleaseNonPagedResources((__int64)&MiSystemPartition, v8);
  }
}
