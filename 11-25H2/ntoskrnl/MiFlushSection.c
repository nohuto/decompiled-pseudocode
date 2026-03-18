/*
 * XREFs of MiFlushSection @ 0x14033E540
 * Callers:
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 *     MiCleanSection @ 0x1404190A4 (MiCleanSection.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiAddPageToFlushMdl @ 0x14022FA30 (MiAddPageToFlushMdl.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockFlushMdl @ 0x14023D228 (MiUnlockFlushMdl.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A7470 (MiIncrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     PsGetIoPriorityThread @ 0x1403031B0 (PsGetIoPriorityThread.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiReadyFlushMdlToWrite @ 0x14033F528 (MiReadyFlushMdlToWrite.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     MiEndingOffset @ 0x14034EDF8 (MiEndingOffset.c)
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     MiIsRetryIoStatus @ 0x1403BF170 (MiIsRetryIoStatus.c)
 *     MiWaitForPageWriteCompletion @ 0x140417F6C (MiWaitForPageWriteCompletion.c)
 *     MiExpandFlushMdl @ 0x1404679F0 (MiExpandFlushMdl.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiFlushFileOnlyMdl @ 0x1404C7068 (MiFlushFileOnlyMdl.c)
 *     MiFlushWaitForReadInProgress @ 0x1404C9AA4 (MiFlushWaitForReadInProgress.c)
 *     MiWaitForAsynchronousFlushes @ 0x1404CF440 (MiWaitForAsynchronousFlushes.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  struct _MDL *v9; // r12
  __int64 v10; // r14
  int v11; // edi
  int v12; // ecx
  __int64 v13; // rsi
  signed int v14; // ebx
  struct _FILE_OBJECT *v15; // rax
  struct _KTHREAD *CurrentThread; // r13
  int IoPriorityThread; // eax
  ULONG_PTR v18; // rax
  unsigned int v19; // edi
  unsigned __int64 v20; // r15
  KIRQL v21; // al
  KIRQL v22; // bl
  unsigned __int64 v23; // rcx
  ULONG_PTR v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // r13
  __int64 v28; // r8
  unsigned __int64 v29; // r9
  ULONG_PTR v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  ULONG_PTR v34; // rsi
  int v35; // r14d
  char v36; // cl
  int v37; // ebx
  __int64 v38; // rbx
  __int64 v39; // rsi
  unsigned int v40; // ebx
  ULONG_PTR v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r8
  struct _MDL *Next; // rax
  unsigned __int64 v45; // rsi
  unsigned int v46; // r9d
  int v47; // ebx
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // r15
  bool v52; // zf
  PVOID v53; // rbx
  __int64 v54; // rsi
  _DWORD *v55; // rdx
  __int64 result; // rax
  int v57; // eax
  ULONG_PTR v58; // rax
  __int64 Pool; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int16 v62; // ax
  __int64 v63; // r8
  int v64; // eax
  int v65; // eax
  unsigned int ByteCount; // esi
  int v67; // eax
  unsigned __int8 v68[4]; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int ByteOffset; // [rsp+44h] [rbp-1C4h]
  ULONG_PTR v70; // [rsp+48h] [rbp-1C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-1B8h]
  __int64 v72; // [rsp+58h] [rbp-1B0h]
  __int64 v73; // [rsp+60h] [rbp-1A8h]
  int v74; // [rsp+68h] [rbp-1A0h]
  __int64 v75; // [rsp+70h] [rbp-198h]
  _DWORD *v76; // [rsp+78h] [rbp-190h]
  PVOID v77; // [rsp+80h] [rbp-188h] BYREF
  int v78; // [rsp+88h] [rbp-180h]
  unsigned int v79; // [rsp+8Ch] [rbp-17Ch]
  __int64 v80; // [rsp+90h] [rbp-178h]
  __int64 v81; // [rsp+98h] [rbp-170h]
  PFILE_OBJECT FileObject; // [rsp+A0h] [rbp-168h]
  __int64 v83; // [rsp+A8h] [rbp-160h]
  unsigned __int64 v84; // [rsp+B0h] [rbp-158h]
  __int64 v85; // [rsp+B8h] [rbp-150h]
  __int128 v86; // [rsp+C0h] [rbp-148h] BYREF
  __int64 *v87; // [rsp+D0h] [rbp-138h]
  unsigned __int64 v88; // [rsp+D8h] [rbp-130h]
  _QWORD *v89; // [rsp+E0h] [rbp-128h]
  unsigned __int64 v90; // [rsp+E8h] [rbp-120h]
  struct _KTHREAD *v91; // [rsp+F0h] [rbp-118h]
  unsigned __int64 v92; // [rsp+F8h] [rbp-110h]
  _BYTE P[192]; // [rsp+100h] [rbp-108h] BYREF

  v92 = a2;
  v88 = a1;
  v84 = a2;
  v87 = a3;
  v76 = a8;
  v81 = a5;
  v89 = a7;
  v83 = a4;
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
  v73 = v10;
  v13 = 0LL;
  if ( !a5 )
    v12 = a6;
  v14 = v12 & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v10 + 62) & 0xC) == 0 )
    v14 = v12;
  v79 = v14;
  if ( (v14 & 4) != 0 )
  {
    Pool = MiAllocatePool(0x40uLL, 0xA00uLL, 1632005453);
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
    v60 = Pool + 48;
    *(_BYTE *)(Pool + 50) = 6;
    v9 = (struct _MDL *)(Pool + 80);
    v80 = Pool;
    *(_DWORD *)(Pool + 52) = 0;
    v61 = (_QWORD *)(Pool + 56);
    v61[1] = v61;
    *v61 = v61;
    *(_QWORD *)(v13 + 40) = a5;
    *(_QWORD *)(v13 + 32) = v10;
    *(_QWORD *)(v13 + 72) = v9;
    *(_QWORD *)(v13 + 2112) = v60;
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
  }
LABEL_8:
  v84 += 8LL;
  v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFileWithTag(v10, 0x63536D4Du, 0);
  CurrentThread = KeGetCurrentThread();
  FileObject = v15;
  v91 = CurrentThread;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  v78 = IoPriorityThread;
  if ( IoPriorityThread < 2 && (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->PreviousMode != 1 )
  {
    if ( KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
      IoPriorityThread = 2;
    v78 = IoPriorityThread;
  }
  if ( v14 < 0 )
    v11 |= 0x10u;
  v18 = (ULONG_PTR)v87;
  v9->Next = 0LL;
  v19 = v11 | 0x20;
  v9->MdlFlags = 0;
  v9->StartVa = 0LL;
  *(_QWORD *)&v9->ByteCount = 0LL;
  --CurrentThread->KernelApcDisable;
  v74 = 0;
  v72 = 0LL;
  v20 = v88;
  BugCheckParameter2 = v18;
  ByteOffset = 16;
  v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
  v22 = v21;
  if ( !*(_QWORD *)(v10 + 32) )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v10 + 72), v21);
    if ( v13 )
    {
      ExFreePoolWithTag((PVOID)v13, 0);
      if ( v81 )
        *(_QWORD *)(v81 + 40) = 0LL;
    }
    ObFastDereferenceObjectDeferDelete((__int64 *)(v10 + 64), (ULONG_PTR)FileObject, 1666411853LL);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  v23 = *(_QWORD *)(v10 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
  v85 = v23;
  if ( v23 && _InterlockedIncrement64((volatile signed __int64 *)(v23 + 32)) <= 1 )
    __fastfail(0xEu);
  v24 = BugCheckParameter2;
  v25 = v83;
  v75 = 0LL;
  while ( 2 )
  {
    v26 = v72;
    while ( 1 )
    {
      if ( v24 == v25 )
      {
        v27 = v84;
      }
      else
      {
        v27 = *(_QWORD *)(v24 + 8) + 8LL * (*(_DWORD *)(v24 + 44) - (*(_DWORD *)(v24 + 52) & 0x3FFFFFFFu));
        v25 = v83;
      }
      if ( !v20 )
        v20 = *(_QWORD *)(v24 + 8);
      if ( *(_DWORD *)(v24 + 104) && *(_QWORD *)(v24 + 8) )
        break;
      v26 += (__int64)(v27 - v20) >> 3 << 12;
      v58 = *(_QWORD *)(v24 + 16);
      v72 = v26;
      if ( !v58 )
      {
        if ( v27 == *(_QWORD *)(v24 + 8) + 8LL * (*(_DWORD *)(v24 + 44) - (*(_DWORD *)(v24 + 52) & 0x3FFFFFFFu)) )
        {
          v62 = MiEndingOffset(v24);
          v51 = v75;
          v49 = v63;
          v64 = v62 & 0xFFF;
          if ( v64 )
            v49 = v63 - (unsigned int)(4096 - v64);
          goto LABEL_99;
        }
LABEL_129:
        v51 = v75;
        v49 = v26;
        goto LABEL_99;
      }
      if ( v25 == v24 )
        goto LABEL_129;
      v20 = *(_QWORD *)(v58 + 8);
      v24 = v58;
      BugCheckParameter2 = v58;
    }
    MiIncrementSubsectionViewCount((__int64 *)v24, 0);
    MiReleaseSpinLockExclusive((_DWORD *)(v10 + 72), v22);
    v30 = 0LL;
    v90 = v20;
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
            if ( v20 >= v27 )
              goto LABEL_93;
            if ( (v20 & 0xFFF) != 0 )
            {
              if ( v68[0] != 17 )
                goto LABEL_26;
            }
            else if ( v68[0] != 17 )
            {
              MiUnlockProtoPoolPage(v30, v68[0], v28, v29);
            }
            v30 = MiCheckProtoPtePageState(v10, v20, 0, v68);
            v70 = v30;
            if ( !v30 )
            {
              v20 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              if ( !v9->ByteCount )
                continue;
LABEL_79:
              if ( v68[0] != 17 )
              {
                MiUnlockProtoPoolPage(v30, v68[0], v28, v29);
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
              v31 = *(_QWORD *)v20;
              v32 = *(_QWORD *)v20;
              if ( (*(_QWORD *)v20 & 1) != 0 )
                goto LABEL_33;
              if ( (*(_QWORD *)v20 & 0xC00LL) != 0x800 )
                goto LABEL_44;
              if ( !v31 || !qword_140E2D940 || (v31 & qword_140E2D940) != 0 )
              {
                v32 = *(_QWORD *)v20;
                if ( qword_140E2D940 )
                {
                  if ( (v31 & 0x10) != 0 )
                    v32 = v31 & 0xFFFFFFFFFFFFFFEFuLL;
                  else
                    v32 = v31 & ~qword_140E2D940;
                }
LABEL_33:
                v33 = (v32 >> 12) & 0xFFFFFFFFFFLL;
                if ( v33 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v33 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
                  break;
              }
            }
            v34 = 48 * v33 - 0x220000000000LL;
            v35 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v35 & HvlLongSpinCountMask) == 0
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
              while ( *(__int64 *)(v34 + 24) < 0 );
            }
            if ( *(_QWORD *)v20 == v31 )
              break;
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v34 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
            v34 = MiLockSpecialPurposeMemoryCachedPage(v34, 0LL);
          if ( !v34 )
          {
LABEL_44:
            if ( v9->ByteCount )
              v19 |= 4u;
LABEL_46:
            v20 += 8LL;
            if ( (v19 & 4) == 0 && (v20 != v27 || !v9->ByteCount) )
            {
              v10 = v73;
              v24 = BugCheckParameter2;
              v30 = v70;
              continue;
            }
LABEL_78:
            v30 = v70;
            v10 = v73;
            goto LABEL_79;
          }
          break;
        }
        v36 = *(_BYTE *)(v34 + 34);
        if ( (v36 & 8) != 0 )
        {
          if ( v9->ByteCount )
            goto LABEL_77;
          v10 = v73;
          if ( (v19 & 2) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v24 = BugCheckParameter2;
            v20 = v27;
            v19 |= 8u;
            goto LABEL_92;
          }
          MiWaitForPageWriteCompletion(v34, v73, v70, v68[0]);
          v30 = v70;
          v24 = BugCheckParameter2;
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
        v30 = v70;
        v10 = v73;
        v24 = BugCheckParameter2;
        continue;
      }
      break;
    }
    v10 = v73;
    v37 = MiAddPageToFlushMdl((__int64)v9, v34, v73, ByteOffset, *(_QWORD *)v20);
    if ( v37 < 1 )
      goto LABEL_46;
    MiUnlockProtoPoolPage(v70, v68[0], v28, v29);
    v68[0] = 17;
    if ( v37 == 3 )
      goto LABEL_81;
    if ( v37 == 2 || ByteOffset == 1 || v20 + 8 >= v27 )
    {
      v20 += 8LL;
    }
    else
    {
      v38 = MiExpandFlushMdl(v9);
      if ( v38 )
      {
        v39 = v80;
        if ( v9 != (struct _MDL *)P && (!v80 || v9 != (struct _MDL *)(v80 + 80)) )
          ExFreePoolWithTag(v9, 0);
        v9 = (struct _MDL *)v38;
        if ( v39 )
          *(_QWORD *)(v39 + 72) = v38;
        v20 += 8LL;
        v24 = BugCheckParameter2;
        ByteOffset = *(_DWORD *)(v38 + 44);
        v30 = v70;
        goto LABEL_23;
      }
      v20 += 8LL;
      ByteOffset = v9->ByteOffset;
    }
LABEL_81:
    v19 &= ~4u;
    if ( v89 )
      *v89 += v9->ByteCount;
    v24 = BugCheckParameter2;
    v40 = v79;
    v41 = BugCheckParameter2;
    v42 = v79;
    v9->ByteCount <<= 12;
    v43 = MiReadyFlushMdlToWrite(v9, v41, v42);
    if ( v80 )
    {
      v48 = MiIssueAsynchronousFlush(FileObject, v43, (v40 >> 2) & 4, v78, v85);
      v80 = v48;
      if ( !v48 )
      {
        v20 = v27;
        v19 = v19 & 0xFFFFFFDE | 1;
        goto LABEL_92;
      }
      v9 = *(struct _MDL **)(v48 + 72);
      v30 = v70;
      ByteOffset = 16;
      v9->ByteCount = 0;
      goto LABEL_23;
    }
    Next = v9[1].Next;
    v86 = 0LL;
    v45 = *(_QWORD *)(48LL * (_QWORD)Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (*(_BYTE *)(v10 + 62) & 0xC) != 0 )
    {
      MiFlushFileOnlyMdl(6LL * (_QWORD)Next, v9, v43);
    }
    else
    {
      v46 = v40 >> 2;
      LOBYTE(v46) = (v40 >> 2) & 4;
      MiIssueSynchronousFlush((_DWORD)FileObject, (_DWORD)v9, v43, v46, v85, (__int64)&v86);
    }
    MiUnlockFlushMdl(v9, v10, (__int64)&v86);
    v47 = v86;
    if ( (int)v86 >= 0 )
    {
      v74 = 0;
      if ( v9 != (struct _MDL *)P )
      {
        ByteOffset = 16;
        ExFreePoolWithTag(v9, 0);
        v9 = (struct _MDL *)P;
      }
      v24 = BugCheckParameter2;
      v30 = v70;
      v9->ByteCount = 0;
      goto LABEL_23;
    }
    v20 = v45;
    if ( (_DWORD)v86 == -1073741740 && (v19 & 0x10) != 0 )
    {
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      goto LABEL_158;
    }
    ByteCount = v9->ByteCount;
    if ( !(unsigned int)MiIsRetryIoStatus((unsigned int)v86, ByteCount) )
      goto LABEL_167;
    if ( (--v74 & 0x1F) != 0 )
    {
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      goto LABEL_158;
    }
    if ( ByteCount <= 0x1000 || ByteOffset == 1 )
    {
LABEL_167:
      v65 = 0;
    }
    else
    {
      ByteOffset = 1;
LABEL_158:
      v47 = 0;
      v65 = 32;
      LODWORD(v86) = 0;
    }
    v19 = v65 | v19 & 0xFFFFFFDF;
    if ( v9 != (struct _MDL *)P )
    {
      v67 = ByteOffset;
      if ( ByteOffset != 1 )
        v67 = 16;
      ByteOffset = v67;
      ExFreePoolWithTag(v9, 0);
      v47 = v86;
      v9 = (struct _MDL *)P;
    }
    v24 = BugCheckParameter2;
    v9->ByteCount = 0;
    if ( (v19 & 0x20) != 0 )
    {
      v30 = v70;
      goto LABEL_23;
    }
    *v76 = v47;
LABEL_92:
    v30 = v70;
LABEL_93:
    if ( v68[0] != 17 )
      MiUnlockProtoPoolPage(v30, v68[0], v28, v29);
    v49 = ((__int64)(v20 - v90) >> 3 << 12) + v72;
    v72 = v49;
    v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    if ( !*(_QWORD *)(v24 + 16)
      && v20 == *(_QWORD *)(v24 + 8) + 8LL * (*(_DWORD *)(v24 + 44) - (*(_DWORD *)(v24 + 52) & 0x3FFFFFFFu)) )
    {
      v57 = MiEndingOffset(v24) & 0xFFF;
      if ( v57 )
      {
        v49 -= (unsigned int)(4096 - v57);
        v72 = v49;
      }
    }
    v50 = MiDecrementSubsectionViewCount(v24);
    v51 = v50 + v75;
    v52 = *(_QWORD *)(v24 + 80) == 0LL;
    v75 += v50;
    if ( v52 && (*(_DWORD *)(v24 + 32) & 0x10000) == 0 )
    {
      v51 += MiInsertUnusedSubsection(v24);
      v75 = v51;
    }
    if ( (v19 & 0x28) == 0x20 )
    {
      v25 = v83;
      if ( v24 != v83 )
      {
        v24 = *(_QWORD *)(v24 + 16);
        BugCheckParameter2 = v24;
        if ( v24 )
        {
          v20 = *(_QWORD *)(v24 + 8);
          continue;
        }
      }
    }
    break;
  }
LABEL_99:
  MiReleaseSpinLockExclusive((_DWORD *)(v10 + 72), v22);
  v53 = v77;
  v54 = v81;
  if ( v77 && !v81 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v77) < 0 )
      LOBYTE(v19) = v19 | 1;
    ExFreePoolWithTag(v53, 0);
  }
  ObFastDereferenceObjectDeferDelete((__int64 *)(v10 + 64), (ULONG_PTR)FileObject, 1666411853LL);
  if ( v51 )
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v10 + 60) & 0x3FF)), 1LL, v51);
  if ( v85 )
    IoDiskIoAttributionDereference(v85);
  KeLeaveCriticalRegionThread((__int64)v91);
  v55 = v76;
  if ( (v19 & 1) != 0 )
  {
    v77 = 0LL;
    result = MiFlushSection(v88, v92, (_DWORD)v87, v83, v54, v79 & 0xFFFFFFFB, (__int64)&v77, (__int64)v76);
    if ( v89 )
      *v89 += v77;
  }
  else
  {
    if ( (v19 & 8) != 0 )
    {
      result = 3221226547LL;
      *v76 = -1073740749;
    }
    else
    {
      result = (unsigned int)*v76;
      if ( (int)result >= 0 )
        v49 = 0LL;
    }
    *((_QWORD *)v55 + 1) = v49;
  }
  return result;
}
