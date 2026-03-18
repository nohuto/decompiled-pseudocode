/*
 * XREFs of MiClearPfnImageVerified @ 0x14036C0C0
 * Callers:
 *     MiAddPageToFlushMdl @ 0x140210ED0 (MiAddPageToFlushMdl.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiProbeLeafPteAccess @ 0x140283F40 (MiProbeLeafPteAccess.c)
 *     MmStoreProbeAndLockPages @ 0x140284E70 (MmStoreProbeAndLockPages.c)
 *     MiDeleteClusterPage @ 0x1402ED270 (MiDeleteClusterPage.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140692CE0 (MiPrepareLargePageSubPageForFree.c)
 *     MmChangeImageProtection @ 0x140A45E20 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x140C5BB90 (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     VslRemoveProtectedPage @ 0x14026638C (VslRemoveProtectedPage.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     VslMakeProtectedPageExecutable @ 0x14036C2C0 (VslMakeProtectedPageExecutable.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR a1, char a2)
{
  char result; // al
  unsigned __int8 v5; // r14
  int v6; // ebp
  int PagePrivilege; // eax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // r8d
  int ProtectedPageExecutable; // eax
  unsigned int v12; // esi
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  v13 = 0LL;
  if ( result == 3 )
  {
    v5 = 17;
    v6 = a2 & 4;
    if ( (a2 & 4) == 0 )
    {
      if ( (a2 & 0x40) != 0 )
      {
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v12);
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
      PagePrivilege = MiGetPagePrivilege(a1, 1, (unsigned __int64 *)&v13);
      if ( PagePrivilege )
      {
        if ( (PagePrivilege & 0x20) != 0 )
        {
          v8 = 256;
        }
        else
        {
          v8 = 16;
          if ( (a2 & 0x10) != 0 )
            v8 = 32;
        }
        v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
        v10 = v8 | 4;
        if ( (a2 & 1) == 0 )
          v10 = v8;
        if ( (v10 & 0x30) != 0 )
          ProtectedPageExecutable = VslRemoveProtectedPage(v9, &v13, (v10 >> 2) & 1);
        else
          ProtectedPageExecutable = VslMakeProtectedPageExecutable(v9, 0LL, 0LL);
        if ( ProtectedPageExecutable < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), 0LL, 0LL);
      }
    }
    result = MiSetPfnIdentity(a1, 0LL);
    if ( !v6 )
      return MiUnlockPage(a1, v5);
  }
  return result;
}
