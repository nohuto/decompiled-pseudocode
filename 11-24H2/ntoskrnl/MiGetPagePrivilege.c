/*
 * XREFs of MiGetPagePrivilege @ 0x140249B80
 * Callers:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiTrimThisWsle @ 0x140213460 (MiTrimThisWsle.c)
 *     MiActivePageTradeable @ 0x140217690 (MiActivePageTradeable.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiResetAccessBitPte @ 0x140294320 (MiResetAccessBitPte.c)
 *     MiEmptyWorkingSetHelper @ 0x140296F20 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x1402976F0 (MiEmptyPte.c)
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiAgePte @ 0x140303CD0 (MiAgePte.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 *     MiAddPageToFlushMdl @ 0x14033A230 (MiAddPageToFlushMdl.c)
 *     MiPageMightBeZero @ 0x1403421F4 (MiPageMightBeZero.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiCountWslesInPageTableRange @ 0x140392E70 (MiCountWslesInPageTableRange.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     MiUpdateOldPte @ 0x140438350 (MiUpdateOldPte.c)
 *     MiSimpleAgePte @ 0x14049EAD0 (MiSimpleAgePte.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiDbgWriteCheck @ 0x140680874 (MiDbgWriteCheck.c)
 *     MmChangeImageProtection @ 0x140A3BAE0 (MmChangeImageProtection.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402FB290 (MiGetTopLevelPfn.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

unsigned __int64 __fastcall MiGetPagePrivilege(ULONG_PTR BugCheckParameter2, char a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // r10d
  unsigned __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // r14d
  unsigned __int64 v19; // rbp
  unsigned __int8 v20; // r12
  __int64 TopLevelPfn; // rax
  __int64 v22; // rdx
  __int64 PageTablePfnBuddyRaw; // r15
  __int64 v24; // r8
  int v25; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  if ( (MiFlags & 0x1000) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( ((v6 >> 60) & 7) != 3 || (v6 & 0x20000000000000LL) != 0 )
    return 0LL;
  if ( a3 && (MiFlags & 0x4000) == 0 )
    v3 = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
  {
    if ( (MiFlags & 0x20000) != 0 )
    {
      v18 = 17;
      if ( (unsigned __int64)((__int64)(v8 << 25) >> 16) < 0xFFFF800000000000uLL )
        return 2;
    }
    else if ( *(_QWORD *)(BugCheckParameter2 + 8) )
    {
      v19 = (__int64)(v8 << 25) >> 16;
      if ( v19 < 0xFFFF800000000000uLL )
      {
        v18 = 20;
        if ( v3 )
        {
          v20 = 17;
          if ( (a2 & 1) == 0 )
          {
            if ( (a2 & 2) != 0 )
            {
              v25 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v25);
                while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
              }
            }
            else if ( (a2 & 4) == 0 )
            {
              v20 = MiLockPageInline(BugCheckParameter2);
            }
          }
          TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
          PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v22, TopLevelPfn);
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (a2 & 5) == 0 )
            MiUnlockPage(BugCheckParameter2, v20);
          if ( *(_QWORD *)(PageTablePfnBuddyRaw + 368) )
          {
            *v3 = v19;
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
        v18 = 1;
        if ( (((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 2) == 0 )
          v18 = 64;
        if ( v3 )
        {
          *v3 = v19;
          v3[1] = 0LL;
        }
      }
    }
    else
    {
      v18 = 4;
      if ( v3 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
      }
    }
    return v18;
  }
  else
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v9 & 0x400) != 0 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( qword_140E2DCC0 && (v9 & 0x10) == 0 )
        v10 = ~qword_140E2DCC0 & v9;
      v11 = v10 >> 16;
      v12 = *(_QWORD *)v11;
      if ( (*(_DWORD *)(*(_QWORD *)v11 + 56LL) & 0x20) == 0 )
        return 2LL;
      v13 = *(_QWORD *)(v11 + 8);
      if ( v8 < v13 || v8 >= v13 + 8LL * *(unsigned int *)(v11 + 44) )
        return 0LL;
      v14 = *(_DWORD *)(v12 + 92) & 0xC0000;
      if ( v14 != 0 && (*(_DWORD *)(v12 + 92) & 0x20000) != 0 && v11 != v12 + 128 )
        return 40LL;
      v15 = v9 >> 5;
      if ( (MiFlags & 0x20000) != 0 )
      {
        v17 = 2;
        if ( v14 )
        {
          v17 = 10;
          if ( (v15 & 2) != 0 )
            v17 = 11;
        }
      }
      else
      {
        if ( !v14 )
          return 0LL;
        v16 = 8;
        if ( (v15 & 2) != 0 )
          v16 = 11;
        v17 = v16;
      }
      if ( v3 )
      {
        v3[1] = *(_QWORD *)((*(_QWORD *)(v12 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64);
        *v3 = (__int64)(v8 - *(_QWORD *)(v12 + 136)) >> 3 << 12;
      }
      return v17;
    }
    else
    {
      result = ((unsigned __int64)MiFlags >> 13) & 0x10 | 3;
      if ( v3 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
      }
    }
  }
  return result;
}
