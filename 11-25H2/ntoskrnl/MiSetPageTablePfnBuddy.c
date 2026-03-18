/*
 * XREFs of MiSetPageTablePfnBuddy @ 0x14049D0B8
 * Callers:
 *     MiSetSystemCacheReverseMap @ 0x1402C0620 (MiSetSystemCacheReverseMap.c)
 *     MmInSwapProcess @ 0x1402F1540 (MmInSwapProcess.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MiCreatePfnTemplate @ 0x1406609D0 (MiCreatePfnTemplate.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 *     MiInitializeBootProcess @ 0x140C3D150 (MiInitializeBootProcess.c)
 *     MxInsertEnclaveBootPages @ 0x140C46EE4 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiSetPageTablePfnBuddy(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int8 v5; // bp
  int v6; // r14d
  int v7; // esi
  __int64 result; // rax

  v5 = 17;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v5 = MiLockPageInline(a1);
    }
  }
  if ( (a2 & 0xFFFFFEFFFFFFFFFEuLL) != 0 || a2 == 1 )
    a2 = ((a2 - qword_140E38878) >> 4) + 1;
  *(_QWORD *)a1 = (2 * a2) ^ (*(_QWORD *)a1 ^ (2 * a2)) & 0xFFFFFFFF00000001uLL;
  result = *(unsigned int *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = ((unsigned int)(a2 >> 31) << 16) ^ (result ^ ((unsigned int)(a2 >> 31) << 16)) & 0xFC00FFFF;
  if ( !v6 )
  {
    if ( v5 == 17 )
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      return MiUnlockPage(a1, v5);
    }
  }
  return result;
}
