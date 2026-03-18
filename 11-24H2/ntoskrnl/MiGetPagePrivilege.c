/*
 * XREFs of MiGetPagePrivilege @ 0x14021CE30
 * Callers:
 *     MiCombineCandidate @ 0x14020C0F0 (MiCombineCandidate.c)
 *     MiAddPageToFlushMdl @ 0x140210ED0 (MiAddPageToFlushMdl.c)
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiAgePte @ 0x14022F8D0 (MiAgePte.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiTrimThisWsle @ 0x140242F50 (MiTrimThisWsle.c)
 *     MmStoreProbeAndLockPages @ 0x140284E70 (MmStoreProbeAndLockPages.c)
 *     MiEmptyWorkingSetHelper @ 0x140287320 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140287AF0 (MiEmptyPte.c)
 *     MiCountWslesInPageTableRange @ 0x1402E3F20 (MiCountWslesInPageTableRange.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiPageMightBeZero @ 0x1402F9A88 (MiPageMightBeZero.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiActivePageTradeable @ 0x1403A0B30 (MiActivePageTradeable.c)
 *     MiSimpleAgePte @ 0x1403FA2E0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x1403FA590 (MiUpdateOldPte.c)
 *     MiResetAccessBitPte @ 0x1403FA890 (MiResetAccessBitPte.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiApplyDebuggerPatches @ 0x1404F6A1C (MiApplyDebuggerPatches.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiDbgWriteCheck @ 0x14067F674 (MiDbgWriteCheck.c)
 *     MmChangeImageProtection @ 0x140A45E20 (MmChangeImageProtection.c)
 * Callees:
 *     MiGetPageTablePfnBuddyRaw @ 0x140227FA0 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x140228010 (MiGetTopLevelPfn.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
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
      if ( qword_140E2DB80 && (v9 & 0x10) == 0 )
        v10 = ~qword_140E2DB80 & v9;
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
