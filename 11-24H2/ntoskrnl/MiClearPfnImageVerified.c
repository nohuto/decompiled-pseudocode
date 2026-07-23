/*
 * XREFs of MiClearPfnImageVerified @ 0x1402EAB40
 * Callers:
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiAddPageToFlushMdl @ 0x14033A230 (MiAddPageToFlushMdl.c)
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140693DB0 (MiPrepareLargePageSubPageForFree.c)
 *     MmChangeImageProtection @ 0x140A3BAE0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140C5DD20 (MiTradeBootImagePage.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     VslRemoveProtectedPage @ 0x1403A9AF4 (VslRemoveProtectedPage.c)
 *     VslMakeProtectedPageExecutable @ 0x1404921E8 (VslMakeProtectedPageExecutable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  char result; // al
  unsigned __int8 v7; // r14
  int v8; // ebp
  int PagePrivilege; // eax
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // r8d
  int ProtectedPageExecutable; // eax
  unsigned int v14; // esi
  unsigned __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  *(_OWORD *)v15 = 0LL;
  if ( result == 3 )
  {
    v7 = 17;
    v8 = a2 & 4;
    if ( (a2 & 4) == 0 )
    {
      if ( (a2 & 0x40) != 0 )
      {
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v14);
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
        v7 = MiLockPageInline(a1, a2, a3, a4);
      }
    }
    if ( (v4 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, v15);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
        {
          v10 = 256;
        }
        else
        {
          v10 = 16;
          if ( (v4 & 0x10) != 0 )
            v10 = 32;
        }
        v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
        v12 = v10 | 4;
        if ( (v4 & 1) == 0 )
          v12 = v10;
        if ( (v12 & 0x30) != 0 )
          ProtectedPageExecutable = VslRemoveProtectedPage(v11, v15, (v12 >> 2) & 1);
        else
          ProtectedPageExecutable = VslMakeProtectedPageExecutable(v11, 0LL, 0LL);
        if ( ProtectedPageExecutable < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), 0LL, 0LL);
      }
    }
    result = MiSetPfnIdentity(a1, 0);
    if ( !v8 )
      return MiUnlockPage(a1, v7);
  }
  return result;
}
