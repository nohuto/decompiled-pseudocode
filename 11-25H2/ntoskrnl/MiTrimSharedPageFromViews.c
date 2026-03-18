/*
 * XREFs of MiTrimSharedPageFromViews @ 0x140321850
 * Callers:
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiSystemVaTypeToVm @ 0x140219640 (MiSystemVaTypeToVm.c)
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     KeForceDetachProcess @ 0x14023A720 (KeForceDetachProcess.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiAttachThreadDone @ 0x1402BC1A0 (MiAttachThreadDone.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiGetMultiplexedVm @ 0x1402C2444 (MiGetMultiplexedVm.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiGetSystemCacheReverseMap @ 0x1403B53D0 (MiGetSystemCacheReverseMap.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_Servicing_UseAfterFreeInMiGetProtoPteAddress__private_IsEnabledNoReportingNoInline @ 0x14066D7FC (Feature_Servicing_UseAfterFreeInMiGetProtoPteAddress__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiDeleteTrimViewInfoList @ 0x140A49668 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, char a3, unsigned __int64 a4, _QWORD *a5)
{
  __int64 ProcessorFlushList; // rbx
  unsigned __int64 MmInternal; // rdx
  unsigned int v9; // r9d
  __int64 p_Blink; // r14
  unsigned __int64 v11; // r12
  __int64 CurrentThread; // rcx
  _QWORD *v13; // r9
  unsigned __int64 ActiveProcessors; // r8
  unsigned __int64 v15; // r13
  __int64 v16; // r15
  KIRQL v17; // al
  _KPROCESS *v18; // r9
  unsigned __int64 v19; // rbx
  int v20; // ecx
  int v21; // r15d
  unsigned int v22; // eax
  __int64 *v23; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 Flink; // r15
  __int64 v30; // rax
  int v31; // r9d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v33; // esi
  unsigned __int64 v34; // rcx
  unsigned int v35; // r10d
  int v36; // eax
  int v37; // r10d
  __int64 v38; // rcx
  __int64 v39; // r9
  BOOL v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  BOOL v48; // eax
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  _KPROCESS *Process; // r8
  struct _LIST_ENTRY *Address; // rax
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // r8
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  __int64 v59; // r14
  unsigned int v60; // esi
  char v61; // al
  __int64 v62; // rdx
  __int64 v63; // r9
  __int64 v64; // r10
  ULONG *v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // ecx
  struct _KPRCB *v71; // rax
  __int64 *v72; // rdx
  _KPROCESS *v73; // rsi
  __int64 v74; // rcx
  __int64 v76; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v77; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v78; // [rsp+40h] [rbp-C0h]
  __int64 v79; // [rsp+48h] [rbp-B8h]
  __int64 v80; // [rsp+48h] [rbp-B8h]
  unsigned int v81; // [rsp+50h] [rbp-B0h]
  unsigned __int64 valid; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY **v83; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v84; // [rsp+68h] [rbp-98h]
  int v85; // [rsp+70h] [rbp-90h]
  int ContextSwitches; // [rsp+70h] [rbp-90h]
  _KPROCESS *Object; // [rsp+78h] [rbp-88h]
  __int64 v88; // [rsp+80h] [rbp-80h]
  struct _LIST_ENTRY *Blink; // [rsp+90h] [rbp-70h] BYREF
  __int64 v91; // [rsp+98h] [rbp-68h]
  unsigned __int64 v92; // [rsp+A0h] [rbp-60h]
  int v93; // [rsp+A8h] [rbp-58h]
  int v94; // [rsp+ACh] [rbp-54h]
  PVOID P; // [rsp+B0h] [rbp-50h]
  _QWORD *v96; // [rsp+B8h] [rbp-48h]
  PVOID v97; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v98; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v99[8]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v100[6]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v94 = a2;
  v96 = a5;
  v98 = 0LL;
  ProcessorFlushList = 0LL;
  Blink = 0LL;
  MmInternal = 0LL;
  v77 = 17;
  v9 = 0;
  v76 = 0LL;
  p_Blink = 0LL;
  v88 = 0LL;
  v11 = 0LL;
  v78 = 0LL;
  v81 = 0;
  v83 = 0LL;
  valid = 0LL;
  memset(v100, 0, 48);
  CurrentThread = (__int64)KeGetCurrentThread();
  v91 = CurrentThread;
  memset(v99, 0, sizeof(v99));
  if ( !a1 )
    return v9;
  while ( 2 )
  {
    v13 = a1;
    P = a1;
    v97 = (PVOID)*a1;
    ActiveProcessors = a1[1];
    v15 = v13[2];
    v16 = v13[4];
    Object = (_KPROCESS *)ActiveProcessors;
    v92 = v13[3];
    v79 = v16;
    v85 = 0;
    v93 = 0;
    if ( ActiveProcessors )
    {
      if ( (_KPROCESS *)ActiveProcessors != KeGetCurrentThread()->ApcState.Process )
      {
        v17 = ExAcquireSpinLockExclusive(&dword_140E37180);
        v18 = Object;
        v19 = v17;
        ContextSwitches = Object[2].ContextSwitches;
        if ( (HIDWORD(Object[1].DirectoryTableBase) & 0xC00u) < 0xC00
          || Object[2].Padding[3]
          || (v20 = LODWORD(Object[2].ContextSwitches) >> 8, (v20 & 0xF0) == 0xF0)
          || *(_QWORD *)&Object[2].Spare0d <= 1uLL )
        {
          v21 = 0;
        }
        else
        {
          v21 = 1;
          BYTE1(ContextSwitches) = (v20 + 16) ^ ((v20 + 16) ^ v20) & 0xF;
          LOWORD(Object[2].ContextSwitches) = ContextSwitches;
        }
        v85 = v21;
        if ( v17 == 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            dword_140E37180 = 0;
LABEL_23:
            if ( !v21 )
              goto LABEL_219;
            memset(&v100[3], 0, 48);
            KiStackAttachProcess(v18, 1, (__int64)v100);
LABEL_48:
            MmInternal = v78;
            ProcessorFlushList = v76;
            goto LABEL_49;
          }
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E37180, retaddr);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            dword_140E37180 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E37180, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v19);
          __writecr8(v19);
        }
        v18 = Object;
        goto LABEL_23;
      }
      CurrentThread = v91;
    }
    v22 = *((_DWORD *)v13 + 10);
    if ( v22 >= 2 && v22 != 3 )
    {
      if ( (a3 & 6) != 0 )
        goto LABEL_219;
      --*(_WORD *)(CurrentThread + 486);
      v23 = KeAbPreAcquire((__int64)&qword_140E35D00, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E35D00, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E35D00, 0, v23, (unsigned __int64)&qword_140E35D00);
      if ( v23 )
        *((_BYTE *)v23 + 10) = 1;
      v24 = ::P;
      if ( !::P )
        goto LABEL_40;
      do
      {
        ActiveProcessors = v24[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( v15 < ActiveProcessors + v24[4] )
        {
          if ( v15 >= ActiveProcessors )
            break;
          v24 = (_QWORD *)*v24;
        }
        else
        {
          v24 = (_QWORD *)v24[1];
        }
      }
      while ( v24 );
      if ( !v24
        || (Blink = (struct _LIST_ENTRY *)v24[6], Blink->Flink != (struct _LIST_ENTRY *)a4)
        || (CurrentThread = v24[11] & 0xFFFFFFFFFFFFF000uLL, v15 + (v24[3] << 12) - v16 != CurrentThread) )
      {
LABEL_40:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E35D00, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&qword_140E35D00);
        KeAbPostRelease((ULONG_PTR)&qword_140E35D00);
        v25 = v91;
        v26 = (*(_WORD *)(v91 + 486))++ == 0xFFFF;
        if ( v26 && *(_QWORD *)(v25 + 152) != v25 + 152 )
          KiCheckForKernelApcDelivery();
        goto LABEL_219;
      }
      v93 = 1;
      goto LABEL_48;
    }
LABEL_49:
    v27 = v79 - 4096;
    v28 = (v15 - 4096) >> 12;
    Flink = 0LL;
    if ( v15 >= v92 )
      goto LABEL_219;
    while ( 1 )
    {
      v84 = v28 + 1;
      v80 = v27 + 4096;
      if ( p_Blink )
      {
        CurrentThread = ((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        if ( CurrentThread != v11 )
        {
          if ( MmInternal )
          {
            if ( *(_DWORD *)(MmInternal + 28) )
            {
              v30 = MiFreeWsleList(p_Blink, MmInternal, 0LL);
              v31 = v81;
              if ( v30 )
                v31 = 277;
              v81 = v31;
            }
            v78 = 0LL;
          }
          if ( v88 )
          {
            MiFlushTbList(v88, MmInternal, ActiveProcessors);
            v88 = 0LL;
          }
          if ( ProcessorFlushList )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            MmInternal = (unsigned __int64)MxTempPrcb;
            ProcessorFlushList = 0LL;
            v76 = 0LL;
            if ( CurrentPrcb->MmInternal )
              MmInternal = (unsigned __int64)CurrentPrcb->MmInternal;
            CurrentThread = 20600LL * (unsigned int)(*(_DWORD *)(MmInternal + 348) - 1);
            *(_QWORD *)(CurrentThread + MmInternal + 20976) = 0LL;
            --*(_DWORD *)(MmInternal + 348);
          }
          if ( Object )
          {
            if ( v11 )
              MiUnlockPageTable(p_Blink, v11);
            MiUnlockWorkingSetShared(p_Blink, v77);
          }
          else if ( *((_QWORD *)&v99[1] + 1) )
          {
            MiReleaseFaultState((__int64)&v99[1] + 8, 0x11u, 0LL);
            *((_QWORD *)&v99[1] + 1) = 0LL;
          }
          v11 = 0LL;
          valid = 0LL;
          p_Blink = 0LL;
          v83 = 0LL;
        }
      }
      if ( Object )
        break;
      v33 = 1;
      if ( !p_Blink )
      {
        if ( v15 < 0xFFFF800000000000uLL )
          goto LABEL_240;
        v34 = ((v15 >> 39) & 0x1FF) - 256;
        v35 = *((unsigned __int8 *)&MiState + v34 + 49000);
        if ( v35 > 0x11 )
          goto LABEL_240;
        v36 = 133280;
        if ( !_bittest(&v36, v35) )
          goto LABEL_240;
        v83 = MiSystemVaTypeToVm(*((unsigned __int8 *)&MiState + v34 + 49000));
        p_Blink = (__int64)v83;
        if ( !v83 )
          goto LABEL_240;
        if ( !(unsigned int)MiSynchronizeSystemVa((__int64)v83, v15, v37, 0, (__int64)v99) )
        {
          v57 = v76;
          goto LABEL_221;
        }
        p_Blink = *((_QWORD *)&v99[1] + 1);
        v83 = (struct _LIST_ENTRY **)*((_QWORD *)&v99[1] + 1);
        if ( (a3 & 1) != 0 && !v88 )
        {
          if ( !ProcessorFlushList )
          {
            ProcessorFlushList = MiGetProcessorFlushList(v38, MmInternal, ActiveProcessors, v39);
            v76 = ProcessorFlushList;
          }
          MmInternal = 0LL;
          *(_QWORD *)ProcessorFlushList = *((_QWORD *)&v99[1] + 1);
          *(_DWORD *)(ProcessorFlushList + 16) = 0;
          *(_DWORD *)(ProcessorFlushList + 20) = 10;
          v88 = ProcessorFlushList;
          *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(p_Blink + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(*((_QWORD *)&v99[1] + 1) + 184LL) & 0xF) != 0
            || (struct _LIST_ENTRY **)*((_QWORD *)&v99[1] + 1) == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            v40 = (*(_DWORD *)(*((_QWORD *)&v99[1] + 1) + 184LL) & 0xF) == 0;
          }
          else
          {
            *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
            v40 = 0;
          }
          *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
          *(_DWORD *)(ProcessorFlushList + 8) = v40;
          *(_WORD *)(ProcessorFlushList + 25) = 0;
          *(_DWORD *)(ProcessorFlushList + 28) = 0;
          *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
          *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
        }
        v11 = ((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        valid = v11;
LABEL_88:
        CurrentThread = ((v15 >> 39) & 0x1FF) - 256;
        v41 = *((unsigned __int8 *)&MiState + CurrentThread + 49000);
        goto LABEL_89;
      }
      if ( v15 >= 0xFFFF800000000000uLL )
        goto LABEL_88;
      v41 = 0;
LABEL_89:
      if ( *((_DWORD *)P + 10) )
        goto LABEL_159;
      if ( v41 != 7
        || !MiGetSystemCacheReverseMap(v15)
        || p_Blink != MiGetMultiplexedVm(v42, v15)
        || *(_QWORD *)(v43 + 32) >> 62 != 3 )
      {
        goto LABEL_219;
      }
      v44 = *(_QWORD *)(v43 + 24);
      Blink = (struct _LIST_ENTRY *)v44;
      if ( (v44 & 1) != 0 )
      {
        v44 &= ~1uLL;
        Blink = (struct _LIST_ENTRY *)v44;
      }
      ActiveProcessors = a4;
      if ( *(_QWORD *)v44 != a4 )
        goto LABEL_219;
      CurrentThread = 4 * (*(_QWORD *)(v43 + 32) & 0xFFFFFFFFFFFF0000uLL);
      if ( CurrentThread + (v15 & 0x3FFFF) != v80 )
        goto LABEL_219;
LABEL_160:
      v58 = *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (v58 & 1) == 0 )
        goto LABEL_207;
      CurrentThread = 0xFFFFFFFFFFLL;
      v59 = 48 * ((v58 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( (a3 & 8) != 0 && ((v58 & 0x42) != 0 || (*(_BYTE *)(v59 + 34) & 0x10) != 0) )
        goto LABEL_206;
      CurrentThread = *(_QWORD *)(v59 + 16);
      if ( *(__int64 *)(v59 + 40) >= 0 )
        goto LABEL_206;
      CurrentThread = *(_QWORD *)(v59 + 16) & 0x400LL;
      if ( (a3 & 1) != 0 )
      {
        if ( CurrentThread && (v58 & 0x42) != 0 )
        {
          v60 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v60 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentThread) )
              {
                HvlNotifyLongSpinWait(v60);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v59 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v59 + 34) & 0x10) == 0 )
            MiSetPfnModified(48 * ((v58 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiWriteValidPteNewProtection(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v58 & 0xFFFFFFFFFFFFFFBDuLL);
          MiInsertTbFlushEntry(v88, v15, 1LL, 0LL);
        }
        goto LABEL_206;
      }
      if ( !CurrentThread && (*(_DWORD *)(ActiveProcessors + 56) & 0x80u) != 0 )
        goto LABEL_206;
      v61 = MiGetWsleContents(CurrentThread, v15) & 0xF;
      if ( *(_DWORD *)(v64 + 40) == 3 && v61 == 9 )
        goto LABEL_206;
      if ( v61 == 8 || (a3 & 0x10) != 0 )
      {
        CurrentThread = ((a3 & 0x40) << 9) | 1u;
        HIDWORD(ActiveProcessors) = HIDWORD(CurrentThread);
        LODWORD(ActiveProcessors) = ((a3 & 0x40) << 9) | 0x801;
        if ( a3 >= 0 )
          ActiveProcessors = (unsigned int)CurrentThread;
        if ( (a3 & 8) != 0
          || !v94
          || ((_DWORD)v83[23] & 0xF) == 1
          || !(unsigned int)MiReplaceLockedPage(
                              48 * ((v58 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
                              v15,
                              ActiveProcessors,
                              v33) )
        {
          v81 = 277;
        }
LABEL_206:
        p_Blink = (__int64)v83;
LABEL_207:
        MmInternal = v78;
        v57 = v76;
LABEL_208:
        v27 = v80;
        v28 = v84;
        v11 = valid;
        goto LABEL_209;
      }
      p_Blink = (__int64)v83;
      if ( ((_DWORD)v83[23] & 0xF) == 1 )
      {
        v65 = &MiSystemPartition;
      }
      else
      {
        CurrentThread = *((unsigned __int16 *)v83 + 87);
        v65 = (ULONG *)*((_QWORD *)qword_140E2FD48 + CurrentThread);
      }
      if ( v65[4363] )
        MI_WSLE_LOG_ACCESS(v83, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, ActiveProcessors, v63);
      v66 = v78;
      v57 = v76;
      if ( !v78 )
      {
        if ( !v76 )
        {
          v57 = MiGetProcessorFlushList(CurrentThread, v62, ActiveProcessors, v63);
          v76 = v57;
        }
        v78 = v57 + 4136;
        MiInitializeTbFlushList(v57 + 4136, (_DWORD)v83, *(_DWORD *)(v57 + 4148), 2, 1);
        v66 = v67;
      }
      MiInsertTbFlushEntry(v66, v15, 1LL, 0LL);
      MmInternal = v78;
      if ( *(_DWORD *)(v78 + 28) != *(_DWORD *)(v78 + 12) )
        goto LABEL_208;
      v68 = MiFreeWsleList(v83, v78, 0LL);
      CurrentThread = v81;
      v11 = valid;
      v28 = v84;
      if ( v68 )
        CurrentThread = 277LL;
      v27 = v80;
      MmInternal = 0LL;
      v81 = CurrentThread;
      v78 = 0LL;
LABEL_209:
      v15 += 4096LL;
      if ( v15 >= v92 )
        goto LABEL_220;
      ProcessorFlushList = v76;
    }
    v33 = 0;
    if ( !p_Blink )
    {
      p_Blink = (__int64)&Object[2].ReadyListHead.Blink;
      Flink = 0LL;
      v83 = &Object[2].ReadyListHead.Blink;
      v77 = MiLockWorkingSetShared((__int64)&Object[2].ReadyListHead.Blink);
      if ( (a3 & 1) != 0 && !v88 )
      {
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList(CurrentThread, v45, v46, v47);
          v76 = ProcessorFlushList;
        }
        *(_DWORD *)(ProcessorFlushList + 20) = 10;
        *(_DWORD *)(ProcessorFlushList + 16) = 0;
        *(_QWORD *)ProcessorFlushList = p_Blink;
        v88 = ProcessorFlushList;
        *(_BYTE *)(ProcessorFlushList + 24) = (Object[2].ContextSwitches & 0x800) != 0;
        if ( (Object[2].ContextSwitches & 0xF) != 0
          || (CurrentThread = (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
              p_Blink == CurrentThread) )
        {
          v48 = (Object[2].ContextSwitches & 0xF) == 0;
        }
        else
        {
          *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
          v48 = 0;
        }
        *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
        *(_DWORD *)(ProcessorFlushList + 8) = v48;
        *(_WORD *)(ProcessorFlushList + 25) = 0;
        *(_DWORD *)(ProcessorFlushList + 28) = 0;
        *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
        *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
      }
    }
    if ( (unsigned int)Feature_Servicing_UseAfterFreeInMiGetProtoPteAddress__private_IsEnabledNoReportingNoInline(CurrentThread) )
    {
      MiLockVadTree(1, v49);
      Address = MiLocateAddress(v15);
      Flink = (__int64)Address;
      if ( !Address || (MmInternal = LODWORD(Address[3].Flink), (MmInternal & 0x200000) != 0) )
      {
        ActiveProcessors = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
LABEL_218:
          _InterlockedAnd((volatile signed __int32 *)(ActiveProcessors + 1004), 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(ActiveProcessors + 1004));
          goto LABEL_219;
        }
LABEL_144:
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(ActiveProcessors + 1004, retaddr);
        goto LABEL_219;
      }
      ActiveProcessors = a4;
      v50 = *(unsigned int *)(a4 + 56);
      if ( (v50 & 0x20) == 0 && (MmInternal & 0x70) != 0 )
        goto LABEL_142;
      Blink = Address[4].Blink;
      if ( Blink->Flink != (struct _LIST_ENTRY *)a4 )
        goto LABEL_142;
    }
    else if ( Flink
           && (v49 = v84,
               v84 >= (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32)))
           && (v50 = *(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32),
               v84 <= v50) )
    {
      ActiveProcessors = a4;
    }
    else
    {
      MiLockVadTree(1, v49);
      Process = KeGetCurrentThread()->ApcState.Process;
      Flink = (__int64)Process[3].Header.WaitListHead.Flink;
      if ( Flink )
      {
        MmInternal = v15 >> 12;
        if ( v15 >> 12 < (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
          || MmInternal > (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
        {
          Flink = *(_QWORD *)&Process[3].Header.Lock;
          if ( !Flink )
            goto LABEL_125;
          do
          {
            if ( MmInternal <= (*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
            {
              if ( MmInternal >= (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32)) )
                break;
              Flink = *(_QWORD *)Flink;
            }
            else
            {
              Flink = *(_QWORD *)(Flink + 8);
            }
          }
          while ( Flink );
          if ( Flink )
            Process[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
          else
LABEL_125:
            Flink = 0LL;
        }
      }
      ActiveProcessors = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd((volatile signed __int32 *)(ActiveProcessors + 1004), 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)(ActiveProcessors + 1004));
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(ActiveProcessors + 1004, retaddr);
      }
      if ( !Flink )
        goto LABEL_219;
      v50 = *(unsigned int *)(Flink + 48);
      if ( (v50 & 0x200000) != 0 )
        goto LABEL_219;
      ActiveProcessors = a4;
      if ( (*(_DWORD *)(a4 + 56) & 0x20) == 0 && (v50 & 0x70) != 0 )
        goto LABEL_219;
      Blink = *(struct _LIST_ENTRY **)(Flink + 72);
      if ( Blink->Flink != (struct _LIST_ENTRY *)a4 )
        goto LABEL_219;
    }
    if ( (*(_DWORD *)(ActiveProcessors + 56) & 0x20) == 0 )
    {
      ProtoPteAddress = MiGetProtoPteAddress(Flink, v15 >> 12, 8, (unsigned __int64 **)&Blink);
      if ( !ProtoPteAddress
        || (v50 = (unsigned __int64)Blink) == 0
        || v80 != MiStartingOffset(Blink, ProtoPteAddress, 0xFFFFFFFFLL) )
      {
        if ( (unsigned int)Feature_Servicing_UseAfterFreeInMiGetProtoPteAddress__private_IsEnabledNoReportingNoInline(v50) )
          MiUnlockVadTree(1, 0x11u);
        goto LABEL_219;
      }
LABEL_153:
      if ( (unsigned int)Feature_Servicing_UseAfterFreeInMiGetProtoPteAddress__private_IsEnabledNoReportingNoInline(v50) )
        MiUnlockVadTree(1, 0x11u);
      ActiveProcessors = 0xFFFFF68000000000uLL;
      v56 = (((((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v11 != v56 )
      {
        if ( v11 )
        {
          v15 -= 4096LL;
          v28 = v84 - 1;
          v57 = v76;
          v27 = v80 - 4096;
          MmInternal = v78;
          goto LABEL_209;
        }
        valid = MiLockLowestValidPageTableEx(p_Blink, ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v98, 0);
        v11 = valid;
        if ( valid != v56 )
          goto LABEL_219;
      }
LABEL_159:
      ActiveProcessors = a4;
      goto LABEL_160;
    }
    v53 = *(_QWORD *)(Flink + 80);
    if ( (unsigned __int64)v96 >= v53 )
    {
      v54 = *(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32);
      v50 = v53 - 8 * v54;
      if ( (unsigned __int64)v96 < v50
                                 + 8
                                 * ((*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32))
                                  + 1) )
      {
        v15 = (v54 << 12) + ((__int64)((__int64)v96 - v53) >> 3 << 12);
        goto LABEL_153;
      }
    }
    if ( (unsigned int)Feature_Servicing_UseAfterFreeInMiGetProtoPteAddress__private_IsEnabledNoReportingNoInline(v50) )
    {
LABEL_142:
      ActiveProcessors = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        goto LABEL_218;
      goto LABEL_144;
    }
LABEL_219:
    v57 = v76;
LABEL_220:
    if ( p_Blink )
    {
LABEL_221:
      if ( v78 )
      {
        if ( *(_DWORD *)(v78 + 28) )
        {
          v69 = MiFreeWsleList(p_Blink, v78, 0LL);
          v70 = v81;
          if ( v69 )
            v70 = 277;
          v81 = v70;
        }
        v78 = 0LL;
      }
      if ( v88 )
      {
        MiFlushTbList(v88, MmInternal, ActiveProcessors);
        v88 = 0LL;
      }
      if ( v57 )
      {
        v71 = KeGetCurrentPrcb();
        v72 = MxTempPrcb;
        v76 = 0LL;
        if ( v71->MmInternal )
          v72 = (__int64 *)v71->MmInternal;
        v72[2575 * (unsigned int)--*((_DWORD *)v72 + 87) + 2622] = 0LL;
      }
      v73 = Object;
      if ( Object )
      {
        if ( v11 )
          MiUnlockPageTable(p_Blink, v11);
        MiUnlockWorkingSetShared(p_Blink, v77);
      }
      else if ( *((_QWORD *)&v99[1] + 1) )
      {
        MiReleaseFaultState((__int64)&v99[1] + 8, 0x11u, 0LL);
        *((_QWORD *)&v99[1] + 1) = 0LL;
        v11 = 0LL;
        valid = 0LL;
        p_Blink = 0LL;
        v83 = 0LL;
        goto LABEL_241;
      }
      v11 = 0LL;
      valid = 0LL;
      p_Blink = 0LL;
      v83 = 0LL;
    }
    else
    {
LABEL_240:
      v73 = Object;
    }
LABEL_241:
    if ( v93 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E35D00, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E35D00);
      KeAbPostRelease((ULONG_PTR)&qword_140E35D00);
      v74 = v91;
      v26 = (*(_WORD *)(v91 + 486))++ == 0xFFFF;
      if ( v26 && *(_QWORD *)(v74 + 152) != v74 + 152 )
        KiCheckForKernelApcDelivery();
    }
    if ( v85 )
    {
      KeForceDetachProcess((volatile _KAFFINITY_EX *)v100, 0);
      MiAttachThreadDone((__int64)&v73[2].ReadyListHead.Blink);
    }
    if ( v73 )
      ObDereferenceObjectDeferDeleteWithTag(v73, 0x77566D4Du);
    ExFreePoolWithTag(P, 0);
    if ( v94 && (*v96 & 1) == 0 )
    {
      MiDeleteTrimViewInfoList(v97);
      return 0LL;
    }
    else
    {
      a1 = v97;
      if ( v97 )
      {
        ProcessorFlushList = v76;
        MmInternal = v78;
        CurrentThread = v91;
        continue;
      }
      return v81;
    }
  }
}
