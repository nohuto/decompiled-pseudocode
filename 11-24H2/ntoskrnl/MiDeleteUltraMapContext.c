/*
 * XREFs of MiDeleteUltraMapContext @ 0x1402D1B78
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402D25D4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiGetUltraMdlContext @ 0x14049878C (MiGetUltraMdlContext.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // r12d
  unsigned __int8 CurrentIrql; // al
  char v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  ULONG_PTR *v9; // rsi
  unsigned __int64 v10; // rdi
  ULONG_PTR v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = *(_BYTE *)(a1 + 25) != 0 ? 0xFFFFFFFE : 0;
    CurrentIrql = KeGetCurrentIrql();
    v5 = 6;
    v6 = 2LL;
    if ( CurrentIrql != 2 )
      v5 = 2;
    MiGetUltraMapping(a1, a2, MiPageSizes[(unsigned int)a2], v5);
    _InterlockedDecrement(&dword_140E35F1C);
    v9 = (ULONG_PTR *)(a1 + 8);
    v10 = 0LL;
    do
    {
      v11 = *v9;
      if ( *v9 != -1LL )
      {
        v12 = 48 * v11 - 0x220000000000LL;
        if ( byte_140E2DB41 )
        {
          v13 = MI_PAGE_TO_FULL_COLOR(v11);
          MiManageUltraSpacePageTable(v12, v13, v3 + 3);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E30170 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(v11);
          if ( (v5 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v12);
          else
            MiReleaseFreshPage(v12, v7, v8);
          ++v10;
        }
        *v9 = -1LL;
      }
      ++v9;
      --v6;
    }
    while ( v6 );
    *(_BYTE *)(a1 + 24) = 0;
    if ( v10 )
      MiReleaseNonPagedResources((__int64)&MiSystemPartition, v10);
  }
}
