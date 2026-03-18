/*
 * XREFs of MiUnlockDriverCode @ 0x140A8370C
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 */

char __fastcall MiUnlockDriverCode(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 BaseLoaderPortion; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 i; // rsi
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  LODWORD(BaseLoaderPortion) = MI_IS_PHYSICAL_ADDRESS(v1);
  if ( !(_DWORD)BaseLoaderPortion )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
    v4 = BaseLoaderPortion;
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 1) != 0 )
    {
      BaseLoaderPortion = MiGetPteAddress(v1);
      v5 = 0LL;
      for ( i = BaseLoaderPortion; (unsigned int)v5 < *(_DWORD *)(v4 + 296); v5 = (unsigned int)(v5 + 1) )
      {
        v7 = *(_QWORD *)(v4 + 200);
        LODWORD(BaseLoaderPortion) = *(_DWORD *)(v7 + 12 * v5 + 8);
        if ( (_DWORD)BaseLoaderPortion )
          LOBYTE(BaseLoaderPortion) = MiUnlockCodePage(
                                        i + 8LL * *(unsigned int *)(v7 + 12 * v5),
                                        i + 8LL * *(unsigned int *)(v7 + 12 * v5 + 4),
                                        0);
      }
    }
  }
  return BaseLoaderPortion;
}
