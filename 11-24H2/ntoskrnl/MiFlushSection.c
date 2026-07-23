/*
 * XREFs of MiFlushSection @ 0x140272630
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MiCleanSection @ 0x140270170 (MiCleanSection.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     MiUnlockFlushMdl @ 0x1402571C0 (MiUnlockFlushMdl.c)
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiIssueAsynchronousFlush @ 0x14025ADBC (MiIssueAsynchronousFlush.c)
 *     MiIssueSynchronousFlush @ 0x14025BAA8 (MiIssueSynchronousFlush.c)
 *     MiIsRetryIoStatus @ 0x140260570 (MiIsRetryIoStatus.c)
 *     MiWaitForPageWriteCompletion @ 0x140270FAC (MiWaitForPageWriteCompletion.c)
 *     MiFlushWaitForReadInProgress @ 0x140272338 (MiFlushWaitForReadInProgress.c)
 *     MiExpandFlushMdl @ 0x140272448 (MiExpandFlushMdl.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiReadyFlushMdlToWrite @ 0x1402735E4 (MiReadyFlushMdlToWrite.c)
 *     MiIncrementSubsectionViewCount @ 0x1402743B0 (MiIncrementSubsectionViewCount.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     MiAddPageToFlushMdl @ 0x14033A230 (MiAddPageToFlushMdl.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiEndingOffset @ 0x1403F2438 (MiEndingOffset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFlushFileOnlyMdl @ 0x1404C0FF0 (MiFlushFileOnlyMdl.c)
 *     MiWaitForAsynchronousFlushes @ 0x1404C860C (MiWaitForAsynchronousFlushes.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSection(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7,
        NTSTATUS *a8)
{
  struct _MDL *v9; // r12
  __int64 v10; // r14
  int v11; // edi
  int v12; // ecx
  __int64 v13; // rsi
  signed int v14; // ebx
  int IoPriorityThread; // eax
  __int64 v16; // r9
  ULONG_PTR v17; // r13
  unsigned int v18; // edi
  unsigned __int64 v19; // r15
  KIRQL v20; // al
  KIRQL v21; // bl
  __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned int v35; // r14d
  char v36; // cl
  int v37; // ebx
  __int64 v38; // rbx
  unsigned __int64 v39; // rsi
  unsigned int v40; // ebx
  __int64 v41; // r8
  ULONG_PTR v42; // rdx
  __int64 v43; // rax
  LARGE_INTEGER v44; // r8
  struct _MDL *Next; // rax
  unsigned __int64 v46; // rsi
  NTSTATUS Status; // ebx
  unsigned __int64 v48; // rax
  KIRQL v49; // al
  ULONG_PTR v50; // r13
  __int64 v51; // rax
  PVOID v52; // rbx
  __int64 v53; // r15
  NTSTATUS *v54; // rdx
  __int64 result; // rax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // r15
  ULONG_PTR v59; // rax
  __int64 Pool; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rax
  int v63; // eax
  int v64; // eax
  __int64 inserted; // rax
  unsigned int ByteCount; // esi
  int v67; // eax
  char v68[4]; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int ByteOffset; // [rsp+44h] [rbp-1C4h]
  __int64 v70; // [rsp+48h] [rbp-1C0h]
  __int64 v71; // [rsp+50h] [rbp-1B8h]
  __int64 v72; // [rsp+58h] [rbp-1B0h]
  __int64 v73; // [rsp+60h] [rbp-1A8h]
  int v74; // [rsp+68h] [rbp-1A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-198h]
  NTSTATUS *v76; // [rsp+78h] [rbp-190h]
  PVOID v77; // [rsp+80h] [rbp-188h] BYREF
  int v78; // [rsp+88h] [rbp-180h]
  unsigned int v79; // [rsp+8Ch] [rbp-17Ch]
  unsigned __int64 v80; // [rsp+90h] [rbp-178h]
  __int64 v81; // [rsp+98h] [rbp-170h]
  __int64 v82; // [rsp+A0h] [rbp-168h]
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-160h]
  __int64 v84; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v85; // [rsp+B8h] [rbp-150h]
  struct _IO_STATUS_BLOCK v86; // [rsp+C0h] [rbp-148h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-138h]
  __int64 *v88; // [rsp+D8h] [rbp-130h]
  unsigned __int64 v89; // [rsp+E0h] [rbp-128h]
  _QWORD *v90; // [rsp+E8h] [rbp-120h]
  unsigned __int64 v91; // [rsp+F0h] [rbp-118h]
  unsigned __int64 v92; // [rsp+F8h] [rbp-110h]
  _BYTE P[192]; // [rsp+100h] [rbp-108h] BYREF

  v92 = a2;
  v89 = a1;
  v85 = a2;
  v88 = a3;
  v76 = a8;
  v82 = a5;
  v90 = a7;
  v84 = a4;
  memset_0(P, 0, 0xB8uLL);
  if ( a7 )
    *a7 = 0LL;
  v9 = (struct _MDL *)P;
  *a8 = 0;
  *((_QWORD *)a8 + 1) = 0LL;
  v10 = *a3;
  v11 = ~(_BYTE)a6 & 2;
  v77 = 0LL;
  v12 = a6 | 4;
  v80 = 0LL;
  v72 = v10;
  v13 = 0LL;
  if ( !a5 )
    v12 = a6;
  v14 = v12 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v10 + 62) & 0xC) == 0 )
    v14 = v12;
  v79 = v14;
  if ( (v14 & 4) == 0 )
    goto LABEL_8;
  Pool = MiAllocatePool(0x40uLL, 0xA00uLL);
  v77 = (PVOID)Pool;
  v13 = Pool;
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
  v61 = Pool + 48;
  *(_BYTE *)(Pool + 50) = 6;
  v9 = (struct _MDL *)(Pool + 80);
  v80 = Pool;
  *(_DWORD *)(Pool + 52) = 0;
  v62 = (_QWORD *)(Pool + 56);
  v62[1] = v62;
  *v62 = v62;
  *(_QWORD *)(v13 + 40) = a5;
  *(_QWORD *)(v13 + 32) = v10;
  *(_QWORD *)(v13 + 72) = v9;
  *(_QWORD *)(v13 + 2112) = v61;
  *(_WORD *)(v13 + 312) = 0;
  *(_BYTE *)(v13 + 314) = 6;
  *(_DWORD *)(v13 + 316) = 0;
  *(_QWORD *)(v13 + 328) = v13 + 320;
  *(_QWORD *)(v13 + 320) = v13 + 320;
  *(_QWORD *)(v13 + 336) = v13 + 344;
  *(_QWORD *)(v13 + 304) = a5;
  *(_QWORD *)(v13 + 296) = v10;
  *(_QWORD *)(v13 + 2120) = v13 + 312;
  *(_WORD *)(v13 + 576) = 0;
  *(_BYTE *)(v13 + 578) = 6;
  *(_DWORD *)(v13 + 580) = 0;
  *(_QWORD *)(v13 + 592) = v13 + 584;
  *(_QWORD *)(v13 + 584) = v13 + 584;
  *(_QWORD *)(v13 + 600) = v13 + 608;
  *(_QWORD *)(v13 + 568) = a5;
  *(_QWORD *)(v13 + 560) = v10;
  *(_QWORD *)(v13 + 2128) = v13 + 576;
  *(_WORD *)(v13 + 840) = 0;
  *(_BYTE *)(v13 + 842) = 6;
  *(_DWORD *)(v13 + 844) = 0;
  *(_QWORD *)(v13 + 856) = v13 + 848;
  *(_QWORD *)(v13 + 848) = v13 + 848;
  *(_QWORD *)(v13 + 864) = v13 + 872;
  *(_QWORD *)(v13 + 832) = a5;
  *(_QWORD *)(v13 + 824) = v10;
  *(_QWORD *)(v13 + 2136) = v13 + 840;
  *(_WORD *)(v13 + 1104) = 0;
  *(_BYTE *)(v13 + 1106) = 6;
  *(_DWORD *)(v13 + 1108) = 0;
  *(_QWORD *)(v13 + 1120) = v13 + 1112;
  *(_QWORD *)(v13 + 1112) = v13 + 1112;
  *(_QWORD *)(v13 + 1128) = v13 + 1136;
  *(_QWORD *)(v13 + 1096) = a5;
  *(_QWORD *)(v13 + 1088) = v10;
  *(_QWORD *)(v13 + 2144) = v13 + 1104;
  *(_WORD *)(v13 + 1368) = 0;
  *(_BYTE *)(v13 + 1370) = 6;
  *(_DWORD *)(v13 + 1372) = 0;
  *(_QWORD *)(v13 + 1384) = v13 + 1376;
  *(_QWORD *)(v13 + 1376) = v13 + 1376;
  *(_QWORD *)(v13 + 1392) = v13 + 1400;
  *(_QWORD *)(v13 + 1360) = a5;
  *(_QWORD *)(v13 + 1352) = v10;
  *(_QWORD *)(v13 + 2152) = v13 + 1368;
  *(_WORD *)(v13 + 1632) = 0;
  *(_BYTE *)(v13 + 1634) = 6;
  *(_DWORD *)(v13 + 1636) = 0;
  *(_QWORD *)(v13 + 1648) = v13 + 1640;
  *(_QWORD *)(v13 + 1640) = v13 + 1640;
  *(_QWORD *)(v13 + 1624) = a5;
  *(_QWORD *)(v13 + 1656) = v13 + 1664;
  *(_QWORD *)(v13 + 1616) = v10;
  *(_QWORD *)(v13 + 2160) = v13 + 1632;
  *(_WORD *)(v13 + 1896) = 0;
  *(_BYTE *)(v13 + 1898) = 6;
  *(_DWORD *)(v13 + 1900) = 0;
  *(_QWORD *)(v13 + 1912) = v13 + 1904;
  *(_QWORD *)(v13 + 1904) = v13 + 1904;
  *(_QWORD *)(v13 + 1920) = v13 + 1928;
  *(_QWORD *)(v13 + 1888) = a5;
  *(_QWORD *)(v13 + 1880) = v10;
  *(_QWORD *)(v13 + 2168) = v13 + 1896;
LABEL_8:
  v85 += 8LL;
  FileObject = (PFILE_OBJECT)MiReferenceControlAreaFileWithTag(v10, 0x63536D4Du, 0);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  v78 = IoPriorityThread;
  if ( IoPriorityThread < 2 && (*(_DWORD *)(v16 + 116) & 0x400) == 0 && *(_BYTE *)(v16 + 562) != 1 )
  {
    if ( KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
      IoPriorityThread = 2;
    v78 = IoPriorityThread;
  }
  if ( v14 < 0 )
    v11 |= 0x10u;
  v17 = (ULONG_PTR)v88;
  v9->Next = 0LL;
  v18 = v11 | 0x20;
  v9->MdlFlags = 0;
  v9->StartVa = 0LL;
  *(_QWORD *)&v9->ByteCount = 0LL;
  --*(_WORD *)(v16 + 484);
  v74 = 0;
  v73 = 0LL;
  v19 = v89;
  BugCheckParameter2 = v17;
  ByteOffset = 16;
  v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
  v21 = v20;
  if ( !*(_QWORD *)(v10 + 32) )
  {
    MiReleaseSpinLockExclusive(v10 + 72, v20);
    if ( v13 )
    {
      ExFreePoolWithTag((PVOID)v13, 0);
      if ( v82 )
        *(_QWORD *)(v82 + 40) = 0LL;
    }
    ObFastDereferenceObjectDeferDelete((__int64 *)(v10 + 64), (ULONG_PTR)FileObject);
    KeLeaveCriticalRegionThread(CurrentThread);
    return 0LL;
  }
  v22 = *(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
  v71 = v22;
  if ( v22 && _InterlockedIncrement64((volatile signed __int64 *)(v22 + 32)) <= 1 )
    __fastfail(0xEu);
  v23 = v84;
  v81 = 0LL;
  while ( 2 )
  {
    while ( 2 )
    {
      v24 = (unsigned __int64 *)(v17 + 8);
      if ( v17 == v23 )
      {
        v25 = v85;
      }
      else
      {
        v25 = *v24 + 8LL * (*(_DWORD *)(v17 + 44) - (*(_DWORD *)(v17 + 52) & 0x3FFFFFFFu));
        v23 = v84;
      }
      if ( !v19 )
        v19 = *v24;
      if ( !*(_DWORD *)(BugCheckParameter2 + 104) || !*v24 )
      {
        v58 = ((__int64)(v25 - v19) >> 3 << 12) + v73;
        v59 = *(_QWORD *)(BugCheckParameter2 + 16);
        v73 = v58;
        if ( v59 )
        {
          if ( v23 != BugCheckParameter2 )
          {
            v19 = *(_QWORD *)(v59 + 8);
            v17 = v59;
            BugCheckParameter2 = v59;
            continue;
          }
        }
        else if ( v25 == *v24
                       + 8LL
                       * (*(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu)) )
        {
          v63 = MiEndingOffset(BugCheckParameter2) & 0xFFF;
          if ( v63 )
            v73 = v58 - (unsigned int)(4096 - v63);
        }
        goto LABEL_99;
      }
      break;
    }
    MiIncrementSubsectionViewCount(BugCheckParameter2);
    MiReleaseSpinLockExclusive(v10 + 72, v21);
    v29 = 0LL;
    v91 = v19;
    v70 = 0LL;
    while ( 2 )
    {
      while ( 2 )
      {
        v68[0] = 17;
LABEL_23:
        while ( 2 )
        {
          while ( 2 )
          {
            if ( v19 >= v25 )
              goto LABEL_93;
            if ( (v19 & 0xFFF) != 0 )
            {
              if ( v68[0] != 17 )
                goto LABEL_26;
            }
            else if ( v68[0] != 17 )
            {
              MiUnlockProtoPoolPage(v29, (unsigned __int8)v68[0]);
            }
            v29 = MiCheckProtoPtePageState(v10, v19, 0LL, v68);
            v70 = v29;
            if ( !v29 )
            {
              v19 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              if ( !v9->ByteCount )
                continue;
LABEL_79:
              if ( v68[0] != 17 )
              {
                MiUnlockProtoPoolPage(v29, (unsigned __int8)v68[0]);
                v68[0] = 17;
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
              v30 = *(_QWORD *)v19;
              v31 = *(_QWORD *)v19;
              if ( (*(_QWORD *)v19 & 1) != 0 )
                goto LABEL_33;
              if ( (*(_QWORD *)v19 & 0xC00LL) != 0x800 )
                goto LABEL_44;
              if ( !v30 || !qword_140E2DCC0 || (v30 & qword_140E2DCC0) != 0 )
              {
                v31 = *(_QWORD *)v19;
                if ( qword_140E2DCC0 )
                {
                  if ( (v30 & 0x10) != 0 )
                    v31 = v30 & 0xFFFFFFFFFFFFFFEFuLL;
                  else
                    v31 = v30 & ~qword_140E2DCC0;
                }
LABEL_33:
                v32 = (v31 >> 12) & 0xFFFFFFFFFFLL;
                if ( v32 <= qword_140E2DD20 )
                {
                  v33 = 6 * v32;
                  if ( (*(_QWORD *)(48 * v32 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
                    break;
                }
              }
            }
            v34 = 48 * v32 - 0x220000000000LL;
            v35 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v35 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33, v26, v27, v28) )
                {
                  HvlNotifyLongSpinWait(v35);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v34 + 24) < 0 );
            }
            if ( *(_QWORD *)v19 == v30 )
              break;
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v34 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
            v34 = MiLockSpecialPurposeMemoryCachedPage(v34, 0);
          if ( !v34 )
          {
LABEL_44:
            if ( v9->ByteCount )
              v18 |= 4u;
LABEL_46:
            v19 += 8LL;
            if ( (v18 & 4) == 0 && (v19 != v25 || !v9->ByteCount) )
            {
              v10 = v72;
              v22 = v71;
              v29 = v70;
              continue;
            }
LABEL_78:
            v29 = v70;
            v10 = v72;
            goto LABEL_79;
          }
          break;
        }
        v36 = *(_BYTE *)(v34 + 34);
        if ( (v36 & 8) != 0 )
        {
          if ( v9->ByteCount )
            goto LABEL_77;
          v10 = v72;
          if ( (v18 & 2) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v22 = v71;
            v19 = v25;
            v18 |= 8u;
            goto LABEL_92;
          }
          MiWaitForPageWriteCompletion(v34, v72, v70, v68[0]);
          v29 = v70;
          v22 = v71;
          continue;
        }
        break;
      }
      if ( (v36 & 0x10) == 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_44;
      }
      if ( (v36 & 0x20) != 0 )
      {
        if ( v9->ByteCount )
        {
LABEL_77:
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_78;
        }
        MiFlushWaitForReadInProgress(v34, v70, v68[0]);
        v29 = v70;
        v10 = v72;
        v22 = v71;
        continue;
      }
      break;
    }
    v10 = v72;
    v37 = MiAddPageToFlushMdl(v9, v34, v72, ByteOffset, *(_QWORD *)v19);
    if ( v37 < 1 )
      goto LABEL_46;
    MiUnlockProtoPoolPage(v70, (unsigned __int8)v68[0]);
    v68[0] = 17;
    if ( v37 == 3 )
      goto LABEL_81;
    if ( v37 == 2 || ByteOffset == 1 || v19 + 8 >= v25 )
    {
      v19 += 8LL;
    }
    else
    {
      v38 = MiExpandFlushMdl((unsigned int *)v9, ByteOffset - 1 + (unsigned int)((__int64)(v25 - v19) >> 3));
      if ( v38 )
      {
        v39 = v80;
        if ( v9 != (struct _MDL *)P && (!v80 || v9 != (struct _MDL *)(v80 + 80)) )
          ExFreePoolWithTag(v9, 0);
        v9 = (struct _MDL *)v38;
        if ( v39 )
          *(_QWORD *)(v39 + 72) = v38;
        v19 += 8LL;
        v22 = v71;
        ByteOffset = *(_DWORD *)(v38 + 44);
        v29 = v70;
        goto LABEL_23;
      }
      v19 += 8LL;
      ByteOffset = v9->ByteOffset;
    }
LABEL_81:
    v18 &= ~4u;
    if ( v90 )
      *v90 += v9->ByteCount;
    v40 = v79;
    v41 = v79;
    v42 = BugCheckParameter2;
    v9->ByteCount <<= 12;
    v43 = MiReadyFlushMdlToWrite(v9, v42, v41);
    v44.QuadPart = v43;
    if ( v80 )
    {
      v22 = v71;
      v48 = MiIssueAsynchronousFlush(FileObject, v80, (unsigned __int64)v77, v82, v43, (v40 >> 2) & 4, v78, v71);
      v80 = v48;
      if ( !v48 )
      {
        v19 = v25;
        v18 = v18 & 0xFFFFFFDE | 1;
        goto LABEL_92;
      }
      v9 = *(struct _MDL **)(v48 + 72);
      v29 = v70;
      ByteOffset = 16;
      v9->ByteCount = 0;
      goto LABEL_23;
    }
    Next = v9[1].Next;
    v86 = 0LL;
    v46 = *(_QWORD *)(48LL * (_QWORD)Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (*(_BYTE *)(v10 + 62) & 0xC) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MiFlushFileOnlyMdl)(
        6LL * (_QWORD)Next,
        v9,
        (LARGE_INTEGER)v44.QuadPart);
    else
      MiIssueSynchronousFlush(FileObject, v9, v44, (v40 >> 2) & 4, v71, &v86);
    MiUnlockFlushMdl(v9, v10, (__int64)&v86);
    Status = v86.Status;
    if ( v86.Status >= 0 )
    {
      v74 = 0;
      if ( v9 != (struct _MDL *)P )
      {
        ByteOffset = 16;
        ExFreePoolWithTag(v9, 0);
        v9 = (struct _MDL *)P;
      }
      v22 = v71;
      v29 = v70;
      v9->ByteCount = 0;
      goto LABEL_23;
    }
    v19 = v46;
    if ( v86.Status == -1073741740 && (v18 & 0x10) != 0 )
    {
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      goto LABEL_155;
    }
    ByteCount = v9->ByteCount;
    if ( !MiIsRetryIoStatus(v86.Status, ByteCount) )
      goto LABEL_164;
    if ( (--v74 & 0x1F) != 0 )
    {
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      goto LABEL_155;
    }
    if ( ByteCount <= 0x1000 || ByteOffset == 1 )
    {
LABEL_164:
      v64 = 0;
    }
    else
    {
      ByteOffset = 1;
LABEL_155:
      Status = 0;
      v64 = 32;
      v86.Status = 0;
    }
    v18 = v64 | v18 & 0xFFFFFFDF;
    if ( v9 != (struct _MDL *)P )
    {
      v67 = ByteOffset;
      if ( ByteOffset != 1 )
        v67 = 16;
      ByteOffset = v67;
      ExFreePoolWithTag(v9, 0);
      Status = v86.Status;
      v9 = (struct _MDL *)P;
    }
    v22 = v71;
    v9->ByteCount = 0;
    if ( (v18 & 0x20) != 0 )
    {
      v29 = v70;
      goto LABEL_23;
    }
    *v76 = Status;
LABEL_92:
    v29 = v70;
LABEL_93:
    if ( v68[0] != 17 )
      MiUnlockProtoPoolPage(v29, (unsigned __int8)v68[0]);
    v73 += (__int64)(v19 - v91) >> 3 << 12;
    v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    v50 = BugCheckParameter2;
    v21 = v49;
    if ( !*(_QWORD *)(BugCheckParameter2 + 16)
      && v19 == *(_QWORD *)(BugCheckParameter2 + 8)
              + 8LL * (*(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu)) )
    {
      v57 = MiEndingOffset(BugCheckParameter2) & 0xFFF;
      if ( v57 )
        v73 -= (unsigned int)(4096 - v57);
    }
    v51 = MiDecrementSubsectionViewCount((__int64 *)v50, 0);
    v81 += v51;
    if ( !*(_QWORD *)(v50 + 80) && (*(_DWORD *)(v50 + 32) & 0x10000) == 0 )
    {
      inserted = MiInsertUnusedSubsection(v50);
      v81 += inserted;
    }
    if ( (v18 & 0x28) == 0x20 )
    {
      v23 = v84;
      if ( v50 != v84 )
      {
        v17 = *(_QWORD *)(v50 + 16);
        BugCheckParameter2 = v17;
        if ( v17 )
        {
          v19 = *(_QWORD *)(v17 + 8);
          continue;
        }
      }
    }
    break;
  }
LABEL_99:
  MiReleaseSpinLockExclusive(v10 + 72, v21);
  v52 = v77;
  v53 = v82;
  if ( v77 && !v82 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v77) < 0 )
      LOBYTE(v18) = v18 | 1;
    ExFreePoolWithTag(v52, 0);
  }
  ObFastDereferenceObjectDeferDelete((__int64 *)(v10 + 64), (ULONG_PTR)FileObject);
  if ( v81 )
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v10 + 60) & 0x3FF)), 1LL, v81);
  if ( v22 )
    IoDiskIoAttributionDereference(v22);
  KeLeaveCriticalRegionThread(CurrentThread);
  v54 = v76;
  if ( (v18 & 1) != 0 )
  {
    v77 = 0LL;
    result = MiFlushSection(v89, v92, (_DWORD)v88, v84, v53, v79 & 0xFFFFFFFB, (__int64)&v77, (__int64)v76);
    if ( v90 )
      *v90 += v77;
  }
  else
  {
    if ( (v18 & 8) != 0 )
    {
      result = 3221226547LL;
      *v76 = -1073740749;
LABEL_107:
      v56 = v73;
    }
    else
    {
      result = (unsigned int)*v76;
      if ( (int)result < 0 )
        goto LABEL_107;
      v56 = 0LL;
    }
    *((_QWORD *)v54 + 1) = v56;
  }
  return result;
}
