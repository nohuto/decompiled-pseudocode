/*
 * XREFs of MiGetPagePrivilege @ 0x140230BA0
 * Callers:
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiAddPageToFlushMdl @ 0x14022FA30 (MiAddPageToFlushMdl.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiPageMightBeZero @ 0x14023ABF8 (MiPageMightBeZero.c)
 *     MiAgePte @ 0x1402483B0 (MiAgePte.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiResetAccessBitPte @ 0x14037CD60 (MiResetAccessBitPte.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiEmptyWorkingSetHelper @ 0x1403808F0 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140380E70 (MiEmptyPte.c)
 *     MiCountWslesInPageTableRange @ 0x140385CD0 (MiCountWslesInPageTableRange.c)
 *     MiTrimThisWsle @ 0x140388394 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiActivePageTradeable @ 0x1403FF1D0 (MiActivePageTradeable.c)
 *     MiReferencePageForModifiedWrite @ 0x14040DA18 (MiReferencePageForModifiedWrite.c)
 *     MiUpdateOldPte @ 0x140441BC0 (MiUpdateOldPte.c)
 *     MiSimpleAgePte @ 0x1404A3CC0 (MiSimpleAgePte.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiApplyDebuggerPatches @ 0x1404F41FC (MiApplyDebuggerPatches.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MiDbgWriteCheck @ 0x140673E54 (MiDbgWriteCheck.c)
 *     MmChangeImageProtection @ 0x140A41ED0 (MmChangeImageProtection.c)
 * Callees:
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402C9D70 (MiGetTopLevelPfn.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

unsigned __int64 __fastcall MiGetPagePrivilege(ULONG_PTR BugCheckParameter2, char a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rsi
  unsigned int v16; // r14d
  int v17; // r10d
  unsigned __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // edx
  unsigned __int8 v21; // r12
  __int64 TopLevelPfn; // rax
  __int64 v23; // rdx
  __int64 PageTablePfnBuddyRaw; // r15
  __int64 v25; // r8
  unsigned int v26; // r15d

  v3 = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  if ( (MiFlags & 0x1000) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  v7 = v6 >> 60;
  LOBYTE(v7) = (v6 >> 60) & 7;
  if ( (_BYTE)v7 != 3 || (v6 & 0x20000000000000LL) != 0 )
    return 0LL;
  if ( a3 && (MiFlags & 0x4000) == 0 )
    v3 = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
  {
    if ( (MiFlags & 0x20000) != 0 )
    {
      v16 = 17;
      if ( (unsigned __int64)((__int64)(v8 << 25) >> 16) < 0xFFFF800000000000uLL )
        return 2;
    }
    else if ( *(_QWORD *)(BugCheckParameter2 + 8) )
    {
      v15 = (__int64)(v8 << 25) >> 16;
      if ( v15 < 0xFFFF800000000000uLL )
      {
        v16 = 20;
        if ( v3 )
        {
          v21 = 17;
          if ( (a2 & 1) == 0 )
          {
            if ( (a2 & 2) != 0 )
            {
              v26 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v26 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
                  {
                    HvlNotifyLongSpinWait(v26);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
              }
            }
            else if ( (a2 & 4) == 0 )
            {
              v21 = MiLockPageInline(BugCheckParameter2);
            }
          }
          TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
          PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v23, TopLevelPfn);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (a2 & 5) == 0 )
            MiUnlockPage(BugCheckParameter2, v21);
          if ( *(_QWORD *)(PageTablePfnBuddyRaw + 368) )
          {
            *v3 = v15;
            v3[1] = *(_QWORD *)(PageTablePfnBuddyRaw + 368);
          }
          else
          {
            return 0;
          }
        }
      }
      else
      {
        v16 = 1;
        if ( (((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 2) == 0 )
          v16 = 64;
        if ( v3 )
        {
          *v3 = v15;
          v3[1] = 0LL;
        }
      }
    }
    else
    {
      v16 = 4;
      if ( v3 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
      }
    }
    return v16;
  }
  else
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v9 & 0x400) != 0 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( qword_140E2D940 && (v9 & 0x10) == 0 )
        v10 = ~qword_140E2D940 & v9;
      v11 = v10 >> 16;
      v12 = *(_QWORD *)v11;
      if ( (*(_DWORD *)(*(_QWORD *)v11 + 56LL) & 0x20) == 0 )
        return 2LL;
      v13 = *(_QWORD *)(v11 + 8);
      if ( v8 >= v13 && v8 < v13 + 8LL * *(unsigned int *)(v11 + 44) )
      {
        v17 = *(_DWORD *)(v12 + 92) & 0xC0000;
        if ( v17 != 0 && (*(_DWORD *)(v12 + 92) & 0x20000) != 0 && v11 != v12 + 128 )
          return 40LL;
        v18 = v9 >> 5;
        if ( (MiFlags & 0x20000) != 0 )
        {
          v20 = 2;
          if ( v17 )
          {
            v20 = 10;
            if ( (v18 & 2) != 0 )
              v20 = 11;
          }
          goto LABEL_31;
        }
        if ( v17 )
        {
          v19 = 8;
          if ( (v18 & 2) != 0 )
            v19 = 11;
          v20 = v19;
LABEL_31:
          if ( v3 )
          {
            v3[1] = *(_QWORD *)((*(_QWORD *)(v12 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64);
            *v3 = (__int64)(v8 - *(_QWORD *)(v12 + 136)) >> 3 << 12;
          }
          return v20;
        }
      }
      return 0LL;
    }
    result = ((unsigned __int64)MiFlags >> 13) & 0x10 | 3;
    if ( v3 )
    {
      *v3 = 0LL;
      v3[1] = 0LL;
    }
  }
  return result;
}
