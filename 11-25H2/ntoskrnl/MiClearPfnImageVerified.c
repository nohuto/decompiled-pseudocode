/*
 * XREFs of MiClearPfnImageVerified @ 0x1402CC5F0
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiAddPageToFlushMdl @ 0x14022FA30 (MiAddPageToFlushMdl.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x14040DA18 (MiReferencePageForModifiedWrite.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140687880 (MiPrepareLargePageSubPageForFree.c)
 *     MmChangeImageProtection @ 0x140A41ED0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140C4A804 (MiTradeBootImagePage.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     VslRemoveProtectedPage @ 0x1402CE210 (VslRemoveProtectedPage.c)
 *     VslMakeProtectedPageExecutable @ 0x1402CF124 (VslMakeProtectedPageExecutable.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR a1, char a2)
{
  char result; // al
  unsigned __int8 v5; // r14
  int PagePrivilege; // eax
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d
  int ProtectedPageExecutable; // eax
  unsigned int v11; // ebp
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  *(_OWORD *)v12 = 0LL;
  if ( result == 3 )
  {
    v5 = 17;
    if ( (a2 & 4) == 0 )
    {
      if ( (a2 & 0x40) != 0 )
      {
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
            {
              HvlNotifyLongSpinWait(v11);
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
    if ( (a2 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, v12);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
        {
          v7 = 256;
        }
        else
        {
          v7 = 16;
          if ( (a2 & 0x10) != 0 )
            v7 = 32;
        }
        v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
        v9 = v7 | 4;
        if ( (a2 & 1) == 0 )
          v9 = v7;
        if ( (v9 & 0x30) != 0 )
          ProtectedPageExecutable = VslRemoveProtectedPage(v8, v12, (v9 >> 2) & 1);
        else
          ProtectedPageExecutable = VslMakeProtectedPageExecutable(v8, 0LL, 0LL);
        if ( ProtectedPageExecutable < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), 0LL, 0LL);
      }
    }
    result = MiSetPfnIdentity(a1, 0);
    if ( (a2 & 4) == 0 )
      return MiUnlockPage(a1, v5);
  }
  return result;
}
