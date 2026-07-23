/*
 * XREFs of MxZeroBootMappings @ 0x140C52754
 * Callers:
 *     MiZeroBootMappings @ 0x140C52560 (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x140C52754 (MxZeroBootMappings.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeBootPageTable @ 0x140C51300 (MiFreeBootPageTable.c)
 *     MxZeroBootMappings @ 0x140C52754 (MxZeroBootMappings.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 i; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  ULONG_PTR v17; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    for ( i = a1; i < a2; i += 8LL )
    {
      v6 = MI_READ_PTE_LOCK_FREE(i);
      v10 = v6;
      if ( v6 )
      {
        if ( (v6 & 1) == 0 )
          goto LABEL_10;
        if ( (v6 & 0x80u) == 0LL )
        {
          if ( a3 > 1 )
            MxZeroBootMappings((__int64)(i << 25) >> 16, ((__int64)(i << 25) >> 16) + 4096);
          MiFreeBootPageTable((v10 >> 12) & 0xFFFFFFFFFFLL, v7, v8, v9);
LABEL_10:
          v11 = CLFS_LSN_NULL_EXT;
          v17 = CLFS_LSN_NULL_EXT;
          v12 = 0;
          if ( MiPteInShadowRange(i) )
          {
            v16 = MiSanitizeShadowPxe(v13, (__int64)&v17, v14);
            v11 = v17;
            v12 = v16;
          }
          *(_QWORD *)i = v11;
          if ( v12 )
            MiWritePteShadow(i, v11, v14, v15);
          continue;
        }
        *(_QWORD *)i = CLFS_LSN_NULL_EXT;
      }
    }
  }
}
