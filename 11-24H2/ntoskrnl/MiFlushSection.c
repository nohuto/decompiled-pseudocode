/*
 * XREFs of MiFlushSection @ 0x14023A550
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MiCleanSection @ 0x140417040 (MiCleanSection.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiAddPageToFlushMdl @ 0x140210ED0 (MiAddPageToFlushMdl.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiReadyFlushMdlToWrite @ 0x14023C268 (MiReadyFlushMdlToWrite.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     PsGetIoPriorityThread @ 0x140276920 (PsGetIoPriorityThread.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiIsRetryIoStatus @ 0x1402CBFE0 (MiIsRetryIoStatus.c)
 *     MiUnlockFlushMdl @ 0x1402F1680 (MiUnlockFlushMdl.c)
 *     MiEndingOffset @ 0x140314E58 (MiEndingOffset.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 *     MiIssueSynchronousFlush @ 0x1403731E8 (MiIssueSynchronousFlush.c)
 *     MiWaitForPageWriteCompletion @ 0x14041514C (MiWaitForPageWriteCompletion.c)
 *     MiExpandFlushMdl @ 0x140465CB0 (MiExpandFlushMdl.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFlushFileOnlyMdl @ 0x1404C7B90 (MiFlushFileOnlyMdl.c)
 *     MiFlushWaitForReadInProgress @ 0x1404C9D74 (MiFlushWaitForReadInProgress.c)
 *     MiWaitForAsynchronousFlushes @ 0x1404CF344 (MiWaitForAsynchronousFlushes.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSection(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v9; // r9
  struct _MDL *v10; // r12
  __int64 v11; // r14
  int v12; // edi
  int v13; // ecx
  __int64 v14; // rsi
  signed int v15; // ebx
  int IoPriorityThread; // eax
  __int64 v17; // r9
  ULONG_PTR v18; // r13
  unsigned int v19; // edi
  unsigned __int64 v20; // r15
  KIRQL v21; // al
  KIRQL v22; // bl
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  ULONG_PTR v32; // rsi
  unsigned int v33; // r14d
  char v34; // cl
  int v35; // ebx
  __int64 v36; // rbx
  __int64 v37; // rsi
  unsigned int v38; // ebx
  __int64 v39; // r8
  ULONG_PTR v40; // rdx
  __int64 v41; // r8
  struct _MDL *Next; // rax
  unsigned __int64 v43; // rsi
  unsigned int v44; // r9d
  int v45; // ebx
  __int64 v46; // rax
  KIRQL v47; // al
  ULONG_PTR v48; // r13
  __int64 v49; // rax
  PVOID v50; // rbx
  __int64 v51; // r15
  _DWORD *v52; // rdx
  __int64 result; // rax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // r15
  ULONG_PTR v57; // rax
  __int64 Pool; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  int v61; // eax
  int v62; // eax
  __int64 inserted; // rax
  unsigned int ByteCount; // esi
  int v65; // eax
  unsigned __int8 v66[4]; // [rsp+40h] [rbp-1C8h] BYREF
  int ByteOffset; // [rsp+44h] [rbp-1C4h]
  __int64 v68; // [rsp+48h] [rbp-1C0h]
  __int64 v69; // [rsp+50h] [rbp-1B8h]
  __int64 v70; // [rsp+58h] [rbp-1B0h]
  __int64 v71; // [rsp+60h] [rbp-1A8h]
  int v72; // [rsp+68h] [rbp-1A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-198h]
  _DWORD *v74; // [rsp+78h] [rbp-190h]
  PVOID v75; // [rsp+80h] [rbp-188h] BYREF
  int v76; // [rsp+88h] [rbp-180h]
  unsigned int v77; // [rsp+8Ch] [rbp-17Ch]
  __int64 v78; // [rsp+90h] [rbp-178h]
  __int64 v79; // [rsp+98h] [rbp-170h]
  __int64 v80; // [rsp+A0h] [rbp-168h]
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-160h]
  __int64 v82; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v83; // [rsp+B8h] [rbp-150h]
  __int128 v84; // [rsp+C0h] [rbp-148h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-138h]
  __int64 *v86; // [rsp+D8h] [rbp-130h]
  unsigned __int64 v87; // [rsp+E0h] [rbp-128h]
  _QWORD *v88; // [rsp+E8h] [rbp-120h]
  unsigned __int64 v89; // [rsp+F0h] [rbp-118h]
  unsigned __int64 v90; // [rsp+F8h] [rbp-110h]
  _BYTE P[192]; // [rsp+100h] [rbp-108h] BYREF

  v90 = a2;
  v87 = a1;
  v83 = a2;
  v86 = a3;
  v74 = a8;
  v80 = a5;
  v88 = a7;
  v82 = a4;
  memset_0(P, 0, 0xB8uLL);
  if ( a7 )
    *a7 = 0LL;
  v10 = (struct _MDL *)P;
  *a8 = 0;
  *((_QWORD *)a8 + 1) = 0LL;
  v11 = *a3;
  v12 = ~(_BYTE)a6 & 2;
  v75 = 0LL;
  v13 = a6 | 4;
  v78 = 0LL;
  v70 = v11;
  v14 = 0LL;
  if ( !a5 )
    v13 = a6;
  v15 = v13 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v11 + 62) & 0xC) == 0 )
    v15 = v13;
  v77 = v15;
  if ( (v15 & 4) == 0 )
    goto LABEL_8;
  Pool = MiAllocatePool(0x40uLL, 0xA00uLL);
  v75 = (PVOID)Pool;
  v14 = Pool;
  if ( a5 )
  {
    if ( !Pool )
    {
      *a8 = -1073741670;
      return 3221225626LL;
    }
    *(_QWORD *)(a5 + 40) = Pool;
  }
  else if ( !Pool )
  {
    goto LABEL_8;
  }
  *(_WORD *)(Pool + 48) = 0;
  v59 = Pool + 48;
  *(_BYTE *)(Pool + 50) = 6;
  v10 = (struct _MDL *)(Pool + 80);
  v78 = Pool;
  *(_DWORD *)(Pool + 52) = 0;
  v60 = (_QWORD *)(Pool + 56);
  v60[1] = v60;
  *v60 = v60;
  *(_QWORD *)(v14 + 40) = a5;
  *(_QWORD *)(v14 + 32) = v11;
  *(_QWORD *)(v14 + 72) = v10;
  *(_QWORD *)(v14 + 2112) = v59;
  *(_WORD *)(v14 + 312) = 0;
  *(_BYTE *)(v14 + 314) = 6;
  *(_DWORD *)(v14 + 316) = 0;
  *(_QWORD *)(v14 + 328) = v14 + 320;
  *(_QWORD *)(v14 + 320) = v14 + 320;
  *(_QWORD *)(v14 + 336) = v14 + 344;
  *(_QWORD *)(v14 + 304) = a5;
  *(_QWORD *)(v14 + 296) = v11;
  *(_QWORD *)(v14 + 2120) = v14 + 312;
  *(_WORD *)(v14 + 576) = 0;
  *(_BYTE *)(v14 + 578) = 6;
  *(_DWORD *)(v14 + 580) = 0;
  *(_QWORD *)(v14 + 592) = v14 + 584;
  *(_QWORD *)(v14 + 584) = v14 + 584;
  *(_QWORD *)(v14 + 600) = v14 + 608;
  *(_QWORD *)(v14 + 568) = a5;
  *(_QWORD *)(v14 + 560) = v11;
  *(_QWORD *)(v14 + 2128) = v14 + 576;
  *(_WORD *)(v14 + 840) = 0;
  *(_BYTE *)(v14 + 842) = 6;
  *(_DWORD *)(v14 + 844) = 0;
  *(_QWORD *)(v14 + 856) = v14 + 848;
  *(_QWORD *)(v14 + 848) = v14 + 848;
  *(_QWORD *)(v14 + 864) = v14 + 872;
  *(_QWORD *)(v14 + 832) = a5;
  *(_QWORD *)(v14 + 824) = v11;
  *(_QWORD *)(v14 + 2136) = v14 + 840;
  *(_WORD *)(v14 + 1104) = 0;
  *(_BYTE *)(v14 + 1106) = 6;
  *(_DWORD *)(v14 + 1108) = 0;
  *(_QWORD *)(v14 + 1120) = v14 + 1112;
  *(_QWORD *)(v14 + 1112) = v14 + 1112;
  *(_QWORD *)(v14 + 1128) = v14 + 1136;
  *(_QWORD *)(v14 + 1096) = a5;
  *(_QWORD *)(v14 + 1088) = v11;
  *(_QWORD *)(v14 + 2144) = v14 + 1104;
  *(_WORD *)(v14 + 1368) = 0;
  *(_BYTE *)(v14 + 1370) = 6;
  *(_DWORD *)(v14 + 1372) = 0;
  *(_QWORD *)(v14 + 1384) = v14 + 1376;
  *(_QWORD *)(v14 + 1376) = v14 + 1376;
  *(_QWORD *)(v14 + 1392) = v14 + 1400;
  *(_QWORD *)(v14 + 1360) = a5;
  *(_QWORD *)(v14 + 1352) = v11;
  *(_QWORD *)(v14 + 2152) = v14 + 1368;
  *(_WORD *)(v14 + 1632) = 0;
  *(_BYTE *)(v14 + 1634) = 6;
  *(_DWORD *)(v14 + 1636) = 0;
  *(_QWORD *)(v14 + 1648) = v14 + 1640;
  *(_QWORD *)(v14 + 1640) = v14 + 1640;
  *(_QWORD *)(v14 + 1624) = a5;
  *(_QWORD *)(v14 + 1656) = v14 + 1664;
  *(_QWORD *)(v14 + 1616) = v11;
  *(_QWORD *)(v14 + 2160) = v14 + 1632;
  *(_WORD *)(v14 + 1896) = 0;
  *(_BYTE *)(v14 + 1898) = 6;
  *(_DWORD *)(v14 + 1900) = 0;
  *(_QWORD *)(v14 + 1912) = v14 + 1904;
  *(_QWORD *)(v14 + 1904) = v14 + 1904;
  *(_QWORD *)(v14 + 1920) = v14 + 1928;
  *(_QWORD *)(v14 + 1888) = a5;
  *(_QWORD *)(v14 + 1880) = v11;
  *(_QWORD *)(v14 + 2168) = v14 + 1896;
LABEL_8:
  v83 += 8LL;
  FileObject = (PFILE_OBJECT)MiReferenceControlAreaFileWithTag(v11, 1666411853LL, 0LL, v9);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  v76 = IoPriorityThread;
  if ( IoPriorityThread < 2 && (*(_DWORD *)(v17 + 116) & 0x400) == 0 && *(_BYTE *)(v17 + 562) != 1 )
  {
    if ( KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
      IoPriorityThread = 2;
    v76 = IoPriorityThread;
  }
  if ( v15 < 0 )
    v12 |= 0x10u;
  v18 = (ULONG_PTR)v86;
  v10->Next = 0LL;
  v19 = v12 | 0x20;
  v10->MdlFlags = 0;
  v10->StartVa = 0LL;
  *(_QWORD *)&v10->ByteCount = 0LL;
  --*(_WORD *)(v17 + 484);
  v72 = 0;
  v71 = 0LL;
  v20 = v87;
  BugCheckParameter2 = v18;
  ByteOffset = 16;
  v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
  v22 = v21;
  if ( !*(_QWORD *)(v11 + 32) )
  {
    MiReleaseSpinLockExclusive(v11 + 72, v21);
    if ( v14 )
    {
      ExFreePoolWithTag((PVOID)v14, 0);
      if ( v80 )
        *(_QWORD *)(v80 + 40) = 0LL;
    }
    ObFastDereferenceObjectDeferDelete(v11 + 64, FileObject, 1666411853LL);
    KeLeaveCriticalRegionThread(CurrentThread);
    return 0LL;
  }
  v23 = *(_QWORD *)(v11 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
  v69 = v23;
  if ( v23 && _InterlockedIncrement64((volatile signed __int64 *)(v23 + 32)) <= 1 )
    __fastfail(0xEu);
  v24 = v82;
  v79 = 0LL;
  while ( 2 )
  {
    while ( 2 )
    {
      v25 = (unsigned __int64 *)(v18 + 8);
      if ( v18 == v24 )
      {
        v26 = v83;
      }
      else
      {
        v26 = *v25 + 8LL * (*(_DWORD *)(v18 + 44) - (*(_DWORD *)(v18 + 52) & 0x3FFFFFFFu));
        v24 = v82;
      }
      if ( !v20 )
        v20 = *v25;
      if ( !*(_DWORD *)(BugCheckParameter2 + 104) || !*v25 )
      {
        v56 = ((__int64)(v26 - v20) >> 3 << 12) + v71;
        v57 = *(_QWORD *)(BugCheckParameter2 + 16);
        v71 = v56;
        if ( v57 )
        {
          if ( v24 != BugCheckParameter2 )
          {
            v20 = *(_QWORD *)(v57 + 8);
            v18 = v57;
            BugCheckParameter2 = v57;
            continue;
          }
        }
        else if ( v26 == *v25
                       + 8LL
                       * (*(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu)) )
        {
          v61 = MiEndingOffset(BugCheckParameter2) & 0xFFF;
          if ( v61 )
            v71 = v56 - (unsigned int)(4096 - v61);
        }
        goto LABEL_99;
      }
      break;
    }
    MiIncrementSubsectionViewCount(BugCheckParameter2);
    MiReleaseSpinLockExclusive(v11 + 72, v22);
    v27 = 0LL;
    v89 = v20;
    v68 = 0LL;
    while ( 2 )
    {
      while ( 2 )
      {
        v66[0] = 17;
LABEL_23:
        while ( 2 )
        {
          while ( 2 )
          {
            if ( v20 >= v26 )
              goto LABEL_93;
            if ( (v20 & 0xFFF) != 0 )
            {
              if ( v66[0] != 17 )
                goto LABEL_26;
            }
            else if ( v66[0] != 17 )
            {
              MiUnlockProtoPoolPage(v27, v66[0]);
            }
            v27 = MiCheckProtoPtePageState(v11, v20, 0LL, v66);
            v68 = v27;
            if ( !v27 )
            {
              v20 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              if ( !v10->ByteCount )
                continue;
LABEL_79:
              if ( v66[0] != 17 )
              {
                MiUnlockProtoPoolPage(v27, v66[0]);
                v66[0] = 17;
              }
              goto LABEL_81;
            }
            break;
          }
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_26:
              v28 = *(_QWORD *)v20;
              v29 = *(_QWORD *)v20;
              if ( (*(_QWORD *)v20 & 1) != 0 )
                goto LABEL_33;
              if ( (*(_QWORD *)v20 & 0xC00LL) != 0x800 )
                goto LABEL_44;
              if ( !v28 || !qword_140E2DB80 || (v28 & qword_140E2DB80) != 0 )
              {
                v29 = *(_QWORD *)v20;
                if ( qword_140E2DB80 )
                {
                  if ( (v28 & 0x10) != 0 )
                    v29 = v28 & 0xFFFFFFFFFFFFFFEFuLL;
                  else
                    v29 = v28 & ~qword_140E2DB80;
                }
LABEL_33:
                v30 = (v29 >> 12) & 0xFFFFFFFFFFLL;
                if ( v30 <= qword_140E2DBE0 )
                {
                  v31 = 6 * v30;
                  if ( (*(_QWORD *)(48 * v30 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
                    break;
                }
              }
            }
            v32 = 48 * v30 - 0x220000000000LL;
            v33 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v33 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v31) )
                {
                  HvlNotifyLongSpinWait(v33);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v32 + 24) < 0 );
            }
            if ( *(_QWORD *)v20 == v28 )
              break;
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
            v32 = MiLockSpecialPurposeMemoryCachedPage(v32, 0LL);
          if ( !v32 )
          {
LABEL_44:
            if ( v10->ByteCount )
              v19 |= 4u;
LABEL_46:
            v20 += 8LL;
            if ( (v19 & 4) == 0 && (v20 != v26 || !v10->ByteCount) )
            {
              v11 = v70;
              v23 = v69;
              v27 = v68;
              continue;
            }
LABEL_78:
            v27 = v68;
            v11 = v70;
            goto LABEL_79;
          }
          break;
        }
        v34 = *(_BYTE *)(v32 + 34);
        if ( (v34 & 8) != 0 )
        {
          if ( v10->ByteCount )
            goto LABEL_77;
          v11 = v70;
          if ( (v19 & 2) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v23 = v69;
            v20 = v26;
            v19 |= 8u;
            goto LABEL_92;
          }
          MiWaitForPageWriteCompletion(v32, v70, v68, v66[0]);
          v27 = v68;
          v23 = v69;
          continue;
        }
        break;
      }
      if ( (v34 & 0x10) == 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_44;
      }
      if ( (v34 & 0x20) != 0 )
      {
        if ( v10->ByteCount )
        {
LABEL_77:
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_78;
        }
        MiFlushWaitForReadInProgress(v32, v68, v66[0]);
        v27 = v68;
        v11 = v70;
        v23 = v69;
        continue;
      }
      break;
    }
    v11 = v70;
    v35 = MiAddPageToFlushMdl((__int64)v10, v32, v70, ByteOffset, *(_QWORD *)v20);
    if ( v35 < 1 )
      goto LABEL_46;
    MiUnlockProtoPoolPage(v68, v66[0]);
    v66[0] = 17;
    if ( v35 == 3 )
      goto LABEL_81;
    if ( v35 == 2 || ByteOffset == 1 || v20 + 8 >= v26 )
    {
      v20 += 8LL;
    }
    else
    {
      v36 = MiExpandFlushMdl(v10);
      if ( v36 )
      {
        v37 = v78;
        if ( v10 != (struct _MDL *)P && (!v78 || v10 != (struct _MDL *)(v78 + 80)) )
          ExFreePoolWithTag(v10, 0);
        v10 = (struct _MDL *)v36;
        if ( v37 )
          *(_QWORD *)(v37 + 72) = v36;
        v20 += 8LL;
        v23 = v69;
        ByteOffset = *(_DWORD *)(v36 + 44);
        v27 = v68;
        goto LABEL_23;
      }
      v20 += 8LL;
      ByteOffset = v10->ByteOffset;
    }
LABEL_81:
    v19 &= ~4u;
    if ( v88 )
      *v88 += v10->ByteCount;
    v38 = v77;
    v39 = v77;
    v40 = BugCheckParameter2;
    v10->ByteCount <<= 12;
    v41 = MiReadyFlushMdlToWrite(v10, v40, v39);
    if ( v78 )
    {
      v23 = v69;
      v46 = MiIssueAsynchronousFlush(FileObject, v41, (v38 >> 2) & 4, v76, v69);
      v78 = v46;
      if ( !v46 )
      {
        v20 = v26;
        v19 = v19 & 0xFFFFFFDE | 1;
        goto LABEL_92;
      }
      v10 = *(struct _MDL **)(v46 + 72);
      v27 = v68;
      ByteOffset = 16;
      v10->ByteCount = 0;
      goto LABEL_23;
    }
    Next = v10[1].Next;
    v84 = 0LL;
    v43 = *(_QWORD *)(48LL * (_QWORD)Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (*(_BYTE *)(v11 + 62) & 0xC) != 0 )
    {
      MiFlushFileOnlyMdl(6LL * (_QWORD)Next, v10, v41);
    }
    else
    {
      v44 = v38 >> 2;
      LOBYTE(v44) = (v38 >> 2) & 4;
      MiIssueSynchronousFlush((_DWORD)FileObject, (_DWORD)v10, v41, v44, v69, (__int64)&v84);
    }
    MiUnlockFlushMdl(v10);
    v45 = v84;
    if ( (int)v84 >= 0 )
    {
      v72 = 0;
      if ( v10 != (struct _MDL *)P )
      {
        ByteOffset = 16;
        ExFreePoolWithTag(v10, 0);
        v10 = (struct _MDL *)P;
      }
      v23 = v69;
      v27 = v68;
      v10->ByteCount = 0;
      goto LABEL_23;
    }
    v20 = v43;
    if ( (_DWORD)v84 == -1073741740 && (v19 & 0x10) != 0 )
    {
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      goto LABEL_155;
    }
    ByteCount = v10->ByteCount;
    if ( !(unsigned int)MiIsRetryIoStatus((unsigned int)v84, ByteCount) )
      goto LABEL_164;
    if ( (--v72 & 0x1F) != 0 )
    {
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      goto LABEL_155;
    }
    if ( ByteCount <= 0x1000 || ByteOffset == 1 )
    {
LABEL_164:
      v62 = 0;
    }
    else
    {
      ByteOffset = 1;
LABEL_155:
      v45 = 0;
      v62 = 32;
      LODWORD(v84) = 0;
    }
    v19 = v62 | v19 & 0xFFFFFFDF;
    if ( v10 != (struct _MDL *)P )
    {
      v65 = ByteOffset;
      if ( ByteOffset != 1 )
        v65 = 16;
      ByteOffset = v65;
      ExFreePoolWithTag(v10, 0);
      v45 = v84;
      v10 = (struct _MDL *)P;
    }
    v23 = v69;
    v10->ByteCount = 0;
    if ( (v19 & 0x20) != 0 )
    {
      v27 = v68;
      goto LABEL_23;
    }
    *v74 = v45;
LABEL_92:
    v27 = v68;
LABEL_93:
    if ( v66[0] != 17 )
      MiUnlockProtoPoolPage(v27, v66[0]);
    v71 += (__int64)(v20 - v89) >> 3 << 12;
    v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
    v48 = BugCheckParameter2;
    v22 = v47;
    if ( !*(_QWORD *)(BugCheckParameter2 + 16)
      && v20 == *(_QWORD *)(BugCheckParameter2 + 8)
              + 8LL * (*(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu)) )
    {
      v55 = MiEndingOffset(BugCheckParameter2) & 0xFFF;
      if ( v55 )
        v71 -= (unsigned int)(4096 - v55);
    }
    v49 = MiDecrementSubsectionViewCount(v48);
    v79 += v49;
    if ( !*(_QWORD *)(v48 + 80) && (*(_DWORD *)(v48 + 32) & 0x10000) == 0 )
    {
      inserted = MiInsertUnusedSubsection(v48);
      v79 += inserted;
    }
    if ( (v19 & 0x28) == 0x20 )
    {
      v24 = v82;
      if ( v48 != v82 )
      {
        v18 = *(_QWORD *)(v48 + 16);
        BugCheckParameter2 = v18;
        if ( v18 )
        {
          v20 = *(_QWORD *)(v18 + 8);
          continue;
        }
      }
    }
    break;
  }
LABEL_99:
  MiReleaseSpinLockExclusive(v11 + 72, v22);
  v50 = v75;
  v51 = v80;
  if ( v75 && !v80 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v75) < 0 )
      LOBYTE(v19) = v19 | 1;
    ExFreePoolWithTag(v50, 0);
  }
  ObFastDereferenceObjectDeferDelete(v11 + 64, FileObject, 1666411853LL);
  if ( v79 )
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v11 + 60) & 0x3FF)), 1LL, v79);
  if ( v23 )
    IoDiskIoAttributionDereference(v23);
  KeLeaveCriticalRegionThread(CurrentThread);
  v52 = v74;
  if ( (v19 & 1) != 0 )
  {
    v75 = 0LL;
    result = MiFlushSection(v87, v90, (_DWORD)v86, v82, v51, v77 & 0xFFFFFFFB, (__int64)&v75, (__int64)v74);
    if ( v88 )
      *v88 += v75;
  }
  else
  {
    if ( (v19 & 8) != 0 )
    {
      result = 3221226547LL;
      *v74 = -1073740749;
LABEL_107:
      v54 = v71;
    }
    else
    {
      result = (unsigned int)*v74;
      if ( (int)result < 0 )
        goto LABEL_107;
      v54 = 0LL;
    }
    *((_QWORD *)v52 + 1) = v54;
  }
  return result;
}
