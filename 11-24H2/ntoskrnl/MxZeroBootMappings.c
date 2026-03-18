/*
 * XREFs of MxZeroBootMappings @ 0x140C505C4
 * Callers:
 *     MiZeroBootMappings @ 0x140C503D0 (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x140C505C4 (MxZeroBootMappings.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiFreeBootPageTable @ 0x140C4F170 (MiFreeBootPageTable.c)
 *     MxZeroBootMappings @ 0x140C505C4 (MxZeroBootMappings.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 i; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  ULONG_PTR v8; // rbx
  int v9; // esi

  if ( a1 < a2 )
  {
    for ( i = a1; i < a2; i += 8LL )
    {
      v6 = MI_READ_PTE_LOCK_FREE(i);
      v7 = v6;
      if ( v6 )
      {
        if ( (v6 & 1) == 0 )
          goto LABEL_10;
        if ( (v6 & 0x80u) == 0LL )
        {
          if ( a3 > 1 )
            MxZeroBootMappings((__int64)(i << 25) >> 16, ((__int64)(i << 25) >> 16) + 4096);
          MiFreeBootPageTable((v7 >> 12) & 0xFFFFFFFFFFLL);
LABEL_10:
          v8 = CLFS_LSN_NULL_EXT;
          v9 = 0;
          if ( MiPteInShadowRange(i) )
          {
            v8 = CLFS_LSN_NULL_EXT;
            v9 = MiSanitizeShadowPxe();
          }
          *(_QWORD *)i = v8;
          if ( v9 )
            MiWritePteShadow();
          continue;
        }
        *(_QWORD *)i = CLFS_LSN_NULL_EXT;
      }
    }
  }
}
