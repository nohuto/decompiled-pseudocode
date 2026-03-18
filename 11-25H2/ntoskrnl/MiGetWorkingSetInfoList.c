/*
 * XREFs of MiGetWorkingSetInfoList @ 0x14021CC50
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1402343E0 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiPureAweVad @ 0x140246010 (MiPureAweVad.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiGetPfnProtection @ 0x14037CFCC (MiGetPfnProtection.c)
 *     MiRotatedToFrameBuffer @ 0x140387DA8 (MiRotatedToFrameBuffer.c)
 *     MiIsPfnEnclave @ 0x14038D160 (MiIsPfnEnclave.c)
 *     MiIsLazyStampedPte @ 0x14040AF1C (MiIsLazyStampedPte.c)
 *     MiQueryPfn @ 0x140449A30 (MiQueryPfn.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1404A2D98 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetProtectionFromPte @ 0x1404D3508 (MiGetProtectionFromPte.c)
 *     MiGetValidAweProtection @ 0x1404D3D14 (MiGetValidAweProtection.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MiGetAweVadPageSize @ 0x1409D236C (MiGetAweVadPageSize.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // r8
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *MappedSystemVa; // r13
  __int64 v10; // r15
  ULONG_PTR v11; // r9
  unsigned __int8 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // r11
  unsigned __int64 j; // rdx
  unsigned __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // r14
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  ULONG_PTR v24; // r13
  __int64 v25; // rbx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  ULONG_PTR v30; // rbx
  __int64 v31; // rax
  unsigned int v32; // ebx
  PMDL v33; // rdi
  __int64 v35; // r14
  unsigned int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // r13
  unsigned __int64 v39; // r14
  char v40; // r15
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // r10
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  ULONG_PTR v48; // rbx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 ProtoPteAddress; // r8
  ULONG_PTR v53; // rbx
  __int64 v54; // r14
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // r14
  unsigned int v60; // r14d
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r15
  unsigned __int64 v64; // rsi
  int v65; // edx
  int v66; // r8d
  unsigned int PfnPriority; // eax
  __int64 v68; // rsi
  int ValidAweProtection; // eax
  unsigned __int64 v70; // r14
  __int64 v71; // r14
  struct _MDL *Pool; // rax
  struct _MDL *v73; // r15
  int i; // r8d
  __int64 v75; // rcx
  unsigned __int8 v76; // [rsp+30h] [rbp-1B8h]
  __int64 v77; // [rsp+38h] [rbp-1B0h]
  __int64 v78; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 v79; // [rsp+48h] [rbp-1A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-198h]
  _BYTE *v81; // [rsp+58h] [rbp-190h]
  __int64 v82; // [rsp+60h] [rbp-188h] BYREF
  __int64 v83; // [rsp+68h] [rbp-180h]
  __int64 valid; // [rsp+70h] [rbp-178h]
  __int64 v85; // [rsp+78h] [rbp-170h]
  unsigned int v86; // [rsp+80h] [rbp-168h] BYREF
  ULONG_PTR v87; // [rsp+88h] [rbp-160h]
  int v88; // [rsp+90h] [rbp-158h]
  unsigned int v89; // [rsp+94h] [rbp-154h]
  _BYTE *v90; // [rsp+98h] [rbp-150h]
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp-148h]
  ULONG_PTR v92; // [rsp+A8h] [rbp-140h] BYREF
  unsigned __int64 v93; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v94; // [rsp+B8h] [rbp-130h]
  PMDL MemoryDescriptorList; // [rsp+C0h] [rbp-128h]
  void *v96; // [rsp+C8h] [rbp-120h]
  ULONG_PTR v97; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v98; // [rsp+D8h] [rbp-110h]
  unsigned __int64 v99; // [rsp+E0h] [rbp-108h]
  char v100[8]; // [rsp+E8h] [rbp-100h] BYREF
  _OWORD v101[3]; // [rsp+F0h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+120h] [rbp-C8h] BYREF

  v96 = (void *)a3;
  BugCheckParameter1 = a1;
  v97 = a1;
  v98 = a3;
  v82 = 0LL;
  v92 = 0LL;
  memset(v101, 0, sizeof(v101));
  v6 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v7 = a4 >> 4;
  v79 = a4 >> 4;
  if ( !(a4 >> 4) )
    return 3221225476LL;
  if ( (a2 & 0x3FFFFFFC) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v7 > 8 )
  {
    Pool = (struct _MDL *)MiAllocatePool(0x40uLL, 8 * ((a4 >> 12) + ((a4 & 0xFFF) != 0) + 7LL));
    v73 = Pool;
    MemoryDescriptorList = Pool;
    if ( Pool )
    {
      Pool->Next = 0LL;
      Pool->Size = 8 * (((a4 + (a3 & 0xFFF) + 4095) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = a3 & 0xFFF;
      Pool->ByteCount = a4;
      MmProbeAndLockPages(Pool, CurrentThread->PreviousMode, IoWriteAccess);
      if ( (v73->MdlFlags & 5) != 0 )
        MappedSystemVa = v73->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v73, 0, MmCached, 0LL, 0, 0x40000010u);
      v90 = MappedSystemVa;
      v81 = MappedSystemVa;
      if ( MappedSystemVa )
        goto LABEL_7;
      MmUnlockPages(v73);
      ExFreePoolWithTag(v73, 0);
    }
    return 3221225626LL;
  }
  memmove(Src, (const void *)a3, 16 * v7);
  MemoryDescriptorList = 0LL;
  MappedSystemVa = Src;
  v81 = Src;
  v90 = Src;
LABEL_7:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess(BugCheckParameter1);
    v6 = 1;
  }
  v10 = 0LL;
  BugCheckParameter2 = 0LL;
  v11 = BugCheckParameter1 + 1024;
  v77 = BugCheckParameter1 + 1024;
  v12 = 17;
  v76 = 17;
  v13 = 0LL;
  valid = 0LL;
  v87 = 0LL;
  v86 = 0;
  v14 = 0LL;
  v78 = 0LL;
  j = 0x7FFFFFFEFFFFLL;
  v16 = v79;
  v17 = a2;
  while ( 1 )
  {
    v18 = 0LL;
    v83 = 0LL;
    v6 &= ~8u;
    v19 = *MappedSystemVa;
    v93 = v19;
    if ( v19 > 0x7FFFFFFEFFFFLL )
      goto LABEL_50;
    v20 = v19 >> 12;
    v94 = v19 >> 12;
    if ( !v10 )
      break;
    if ( v20 < (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
      || (j = *(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32), v20 > j) )
    {
      if ( v14 )
      {
        LOBYTE(j) = 17;
        MiUnlockProtoPoolPage(v14, j);
        v78 = 0LL;
        v87 = 0LL;
        v12 = v76;
        v11 = v77;
      }
      if ( v12 != 17 )
      {
        if ( v13 )
        {
          MiUnlockPageTable(v11, v13);
          v13 = 0LL;
          valid = 0LL;
          v12 = v76;
        }
        MiUnlockWorkingSetShared(v77, v12);
        v76 = 17;
      }
      MiUnlockAndDereferenceVadShared((PVOID)v10);
      break;
    }
LABEL_17:
    v99 = v19 & 0xFFFFFFFFFFFFF000uLL;
    if ( ((v19 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || (v19 & 0x7FFFFFFFF000LL) == qword_140E2D838 && qword_140E2D838)
      && (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 )
    {
      v6 |= 8u;
    }
    v21 = v6 & 0xFFFFFFDF;
    v6 = v6 & 0xFFFFFFDF | 0x20;
    if ( (*(_DWORD *)(v10 + 48) & 0x70) != 0x10 )
      v6 = v21;
LABEL_21:
    v6 &= 0xFFFFFFF9;
    LODWORD(v85) = v6;
    if ( (v6 & 0x20) == 0 )
    {
      if ( (v22 = *(_DWORD *)(v10 + 48), j = v22 & 0x200000, (v22 & 0x200000) != 0)
        && ((v23 = (v22 >> 19) & 3, (v22 & 0x800000) != 0) || v23 >= 2)
        && v23 >= 2
        || !(_DWORD)j && (*(_DWORD *)(v10 + 64) & 1) != 0
        || (unsigned int)MiPureAweVad(v10)
        && (v6 |= 4u, LODWORD(v85) = v6, (unsigned __int64)MiGetAweVadPageSize(v10) >= 0x200) )
      {
        v6 |= 2u;
        LODWORD(v85) = v6;
      }
    }
    v88 = v6 & 2;
    if ( (v6 & 2) != 0 )
    {
      if ( v14 )
      {
        LOBYTE(j) = 17;
        MiUnlockProtoPoolPage(v14, j);
        v78 = 0LL;
        v87 = 0LL;
        v12 = v76;
      }
      if ( v12 != 17 )
      {
        if ( v13 )
        {
          MiUnlockPageTable(v77, v13);
          v13 = 0LL;
          valid = 0LL;
          v12 = v76;
        }
        MiUnlockWorkingSetShared(v77, v12);
        v12 = 17;
        v76 = 17;
      }
    }
    v24 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v12 == 17 )
      goto LABEL_29;
    if ( ((((v19 >> 9) & 0xF8) + 8) & 0x78) == 0 )
    {
      v61 = v77;
      if ( (unsigned int)MiWorkingSetIsContended(v77, 0LL) )
        goto LABEL_158;
    }
    if ( KeShouldYieldProcessor() )
    {
      v61 = v77;
LABEL_158:
      if ( v78 )
      {
        LOBYTE(j) = 17;
        MiUnlockProtoPoolPage(v78, j);
        v78 = 0LL;
        v87 = 0LL;
      }
      if ( v13 )
      {
        MiUnlockPageTable(v61, v13);
        v13 = 0LL;
        valid = 0LL;
      }
      MiUnlockWorkingSetShared(v61, v76);
      v12 = 17;
      v76 = 17;
      goto LABEL_29;
    }
    v12 = v76;
LABEL_29:
    v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v85 = v25;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v12 == 17 )
            v76 = MiLockWorkingSetShared(v77);
          v26 = -1LL;
          v27 = -1LL;
          v18 = 0LL;
          v83 = 0LL;
          if ( v13 == v25 )
          {
            v28 = v24;
            v92 = v24;
          }
          else
          {
            if ( v78 )
            {
              LOBYTE(j) = 17;
              MiUnlockProtoPoolPage(v78, j);
              v78 = 0LL;
              v87 = 0LL;
            }
            if ( v13 )
              MiUnlockPageTable(v77, v13);
            valid = MiLockLowestValidPageTableEx(v77, v24, &v92, 0LL);
            v28 = v92;
          }
          v29 = MI_READ_PTE_LOCK_FREE(v28);
          v30 = v29;
          if ( !v29 )
            break;
          if ( (v29 & 0x81) == 0x81 )
          {
            v26 = (v29 >> 12) & 0xFFFFFFFFFFLL;
            v27 = v26;
            for ( i = -1; v28 >= 0xFFFFF68000000000uLL; ++i )
            {
              if ( v28 > 0xFFFFF6FFFFFFFFFFuLL )
                break;
              v28 = (__int64)(v28 << 25) >> 16;
            }
            v75 = 1LL;
            for ( j = v94; i; --i )
            {
              v26 += v75 * (j & 0x1FF);
              j >>= 9;
              v75 <<= 9;
            }
            v18 = 8388609LL;
            v83 = 8388609LL;
            goto LABEL_37;
          }
          if ( valid == v85 )
            goto LABEL_37;
          if ( !(unsigned int)MiWorkingSetInfoCheckPageTable(v77, v28, (unsigned int)&v82, a2, v76) )
          {
            v18 = v83;
            goto LABEL_37;
          }
          v13 = 0LL;
          valid = 0LL;
          v25 = v85;
          v12 = v76;
        }
        if ( (v6 & 0x20) != 0 )
          goto LABEL_46;
        if ( v88 )
          break;
        v13 = valid;
LABEL_120:
        v10 = BugCheckParameter2;
        if ( (v6 & 8) == 0 && (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) != 0 )
          goto LABEL_47;
LABEL_121:
        ProtoPteAddress = 0LL;
        if ( (v6 & 8) != 0 )
        {
          ProtoPteAddress = qword_140E2D830;
          if ( v99 == 2147352576 )
            ProtoPteAddress = qword_140E2D828;
LABEL_124:
          v53 = ProtoPteAddress;
          goto LABEL_125;
        }
        if ( (*(_DWORD *)(v10 + 48) & 0x200000) == 0 )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v10, v94, 8LL, v100);
          if ( !v30 || (unsigned int)MiIsPrototypePteVadLookup(v30, j, ProtoPteAddress) )
            goto LABEL_124;
        }
        if ( qword_140E2D940 )
        {
          if ( (v30 & 0x10) != 0 )
            v30 &= ~0x10uLL;
          else
            v30 &= ~qword_140E2D940;
        }
        v53 = (__int64)v30 >> 16;
LABEL_125:
        if ( !v53 )
          goto LABEL_47;
        v54 = v18 | 0x8000;
        v83 = v54;
        if ( v53 == ProtoPteAddress )
          v83 = v54 | 0x40000000;
        if ( ((v53 ^ v87) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          goto LABEL_135;
        if ( v78 )
        {
          LOBYTE(j) = 17;
          MiUnlockProtoPoolPage(v78, j);
          v87 = 0LL;
        }
        v78 = MiLockProtoPoolPage(v53, 0LL);
        if ( v78 )
        {
          v87 = v53;
LABEL_135:
          v55 = MiLockLeafPage(v53, 0LL);
          if ( v55 )
          {
            MiQueryPfn(0xAAAAAAAAAAAAAAABuLL * ((v55 + 0x220000000000LL) >> 4), &v82);
            _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v18 = v83;
            goto LABEL_47;
          }
          if ( (*(_QWORD *)v53 & 0xC00LL) == 0 && (unsigned int)MiInvalidPteConforms(*(_QWORD *)v53) )
          {
            if ( (unsigned int)MiGetPagingFileOffset(v56) )
            {
              v18 = v83 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              goto LABEL_47;
            }
            if ( !v57 )
            {
              v18 = 0LL;
              goto LABEL_47;
            }
          }
          goto LABEL_102;
        }
        if ( v76 != 17 )
        {
          if ( v13 )
          {
            MiUnlockPageTable(v77, v13);
            v13 = 0LL;
            valid = 0LL;
          }
          MiUnlockWorkingSetShared(v77, v76);
          v76 = 17;
        }
        MmAccessFault(2uLL, v53);
        v25 = v85;
        v12 = v76;
      }
LABEL_37:
      if ( v27 != -1LL )
        goto LABEL_69;
      if ( v88 )
      {
        v10 = BugCheckParameter2;
        v13 = valid;
        v19 = v93;
        v12 = v76;
        v14 = v78;
        goto LABEL_21;
      }
      v13 = valid;
      if ( valid != ((v93 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
        goto LABEL_46;
      v31 = MI_READ_PTE_LOCK_FREE(v24);
      v30 = v31;
      if ( (v31 & 1) != 0 )
        break;
      if ( (v31 & 0x400) != 0 )
      {
        v10 = BugCheckParameter2;
        goto LABEL_121;
      }
      if ( (v31 & 0x800) == 0 )
      {
        if ( (v6 & 4) != 0 && (unsigned int)MiIsLazyStampedPte(v31) )
        {
          v18 = 0LL;
          v10 = BugCheckParameter2;
          goto LABEL_47;
        }
        if ( (unsigned int)MiGetPagingFileOffset(v30) )
        {
          v18 = v18 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
LABEL_46:
          v10 = BugCheckParameter2;
LABEL_47:
          v14 = v78;
          MappedSystemVa = v81;
          goto LABEL_48;
        }
        if ( v30 )
          goto LABEL_46;
        goto LABEL_120;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v47 = MI_READ_PTE_LOCK_FREE(v24);
          v48 = v47;
          if ( (v47 & 0x800) == 0 )
            goto LABEL_240;
          if ( (unsigned int)MiInvalidPteConforms(v47) )
          {
            if ( qword_140E2D940 )
            {
              if ( (v48 & 0x10) != 0 )
                v49 &= ~0x10uLL;
              else
                v49 = v48 & ~qword_140E2D940;
            }
            v50 = (v49 >> 12) & 0xFFFFFFFFFFLL;
            v51 = 48 * v50 - 0x220000000000LL;
            if ( v50 <= qword_140E2D9A0 && (*(_QWORD *)(48 * v50 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              break;
          }
        }
        v89 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
        {
          do
          {
            v60 = v89 + 1;
            v89 = v60;
            if ( (v60 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v50) )
            {
              HvlNotifyLongSpinWait(v60);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v51 + 24) < 0 );
        }
        if ( MI_READ_PTE_LOCK_FREE(v24) == v48 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      j = (unsigned __int64)qword_140E2FD48;
      if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v51 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      {
        v51 = MiLockSpecialPurposeMemoryCachedPage(v51, 0LL);
        if ( !v51 )
        {
LABEL_240:
          v51 = 0LL;
          goto LABEL_115;
        }
      }
      if ( (*(_QWORD *)(v51 + 8) | 0x8000000000000000uLL) != v24 && (*(_QWORD *)(v51 + 40) & 0x10000000000LL) == 0 )
        KeBugCheckEx(0x1Au, 0x411uLL, v24, v48, *(_QWORD *)(v51 + 8));
LABEL_115:
      if ( v51 )
      {
        MI_READ_PTE_LOCK_FREE(v24);
        MiQueryPfn(0xAAAAAAAAAAAAAAABuLL * ((v51 + 0x220000000000LL) >> 4), &v82);
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v18 = v83;
        v10 = BugCheckParameter2;
        goto LABEL_47;
      }
      v25 = v85;
      v13 = valid;
      v12 = v76;
    }
    v35 = v18 | 1;
    v83 = v35;
    v36 = v6 & 0xFFFFFFEF;
    v6 |= 0x10u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x70) != 0x40 )
      v6 = v36;
    v26 = (v30 >> 12) & 0xFFFFFFFFFFLL;
    if ( (v6 & 0x30) != 0 )
    {
      v62 = (unsigned int)MiPageToNode((v30 >> 12) & 0xFFFFFFFFFFLL);
      v63 = 48 * v26 - 0x220000000000LL;
      if ( v26 <= qword_140E2D9A0 )
      {
        if ( (*(_QWORD *)(48 * v26 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
          && ((*(_DWORD *)(v63 + 32) & 0x40000000) != 0 || (unsigned int)MiIsPageOnBadList(v63, v62)) )
        {
          v35 = v83 | 0x80000000LL;
        }
        else
        {
          v35 = v83;
        }
      }
      v64 = v35 & 0xFFFFFFFFFFC0FFFFuLL | ((unsigned __int64)(v62 & 0x3F) << 16);
      if ( (v6 & 0x20) != 0 )
      {
        v10 = BugCheckParameter2;
        v65 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
        if ( (v30 & 0x18) == 8 )
        {
          v65 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 7 | 0x18;
        }
        else if ( (v30 & 0x10) != 0 )
        {
          v65 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x17 | 8;
        }
        v64 |= 0x400001uLL;
      }
      else if ( (unsigned int)MiRotatedToFrameBuffer(v24) )
      {
        if ( (v30 & 0x800) != 0 )
          v65 = 4;
        else
          v65 = 1;
        v10 = BugCheckParameter2;
        v66 = *(_DWORD *)(BugCheckParameter2 + 48) & 0xC00;
        if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x380) != 0 && v66 == 3072 )
        {
          v65 |= 0x18u;
        }
        else if ( v66 == 1024 )
        {
          v65 |= 8u;
        }
      }
      else
      {
        PfnPriority = MiGetPfnPriority(v63);
        v83 = ((unsigned __int64)PfnPriority << 24) ^ (((unsigned __int64)PfnPriority << 24) ^ v64) & 0xFFFFFFFFF8FFFFFFuLL;
        v65 = (*(_DWORD *)(v63 + 16) >> 5) & 0x1F;
        if ( (*(_QWORD *)(v63 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v63 + 8) <= 0 )
        {
          v64 = v83;
        }
        else
        {
          v83 |= 0x8000uLL;
          if ( (*(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
            LOBYTE(v68) = 7;
          else
            v68 = *(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          v64 = v83 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v68 & 7));
          v65 = MmMakeProtectNotWriteCopy[v65];
        }
        v10 = BugCheckParameter2;
      }
      v18 = v64 & 0xFFFFFFFFFFFF800FuLL | (16LL * (MmProtectToValue[v65] & 0x7FF));
      goto LABEL_47;
    }
LABEL_69:
    v37 = 48 * v26 - 0x220000000000LL;
    v38 = v37;
    if ( (*(_QWORD *)(v37 + 40) & 0x10000000000LL) != 0 )
    {
      if ( v27 == -1LL )
        v27 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
      v38 = 48 * v27 - 0x220000000000LL;
    }
    v39 = *(_QWORD *)(v38 + 40);
    v40 = MiGetPfnPriority(v38);
    v41 = MI_NODE_FROM_PFN(v38);
    v83 = v83 & 0xFFFFFFFFF8C07FFFuLL | HIWORD(v39) & 0x8000 | ((v41 & 0x3F | ((unsigned __int64)(v40 & 7) << 8)) << 16);
    if ( (*(_DWORD *)(v37 + 32) & 0x40000000) != 0 || (unsigned int)MiIsPageOnBadList(48 * v26 - 0x220000000000LL, v42) )
    {
      v44 = v83 | 0x80000000LL;
      v83 |= 0x80000000uLL;
    }
    else
    {
      v44 = v83;
    }
    if ( (v44 & 0x800000) != 0 )
      goto LABEL_99;
    if ( (*(_QWORD *)(v37 + 40) & 0x10000000000LL) != 0
      || ((*(_QWORD *)(v37 + 40) >> 60) & 7) == 1 && *(__int64 *)(v37 + 40) < 0 )
    {
      v44 = v83;
LABEL_99:
      v10 = BugCheckParameter2;
      v46 = v44 & 0xFFFFFFFFFFFF800FuLL | (16LL
                                         * (MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                             BugCheckParameter2,
                                                                             v30)] & 0x7FF));
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x4200000) == 0x4200000 )
        v46 &= 0xFFFFFFF0FFFFFFFFuLL;
      v83 = v46 | 0x400000;
      if ( *(__int64 *)(v38 + 40) < 0 )
      {
        if ( (*(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v71 = *(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        else
          LOBYTE(v71) = 7;
        v18 = v83 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v71 & 7 | 0x20000000));
        goto LABEL_47;
      }
LABEL_102:
      v18 = v83;
      goto LABEL_47;
    }
    if ( ((*(_QWORD *)(v37 + 40) >> 60) & 7) == 1 )
    {
      v10 = BugCheckParameter2;
      if ( (unsigned int)MiIsPfnEnclave(48 * v26 - 0x220000000000LL) )
        ValidAweProtection = (*(_DWORD *)(v37 + 16) >> 5) & 0x1F;
      else
        ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v30);
      v70 = v83 & 0xFFFFFFFFFFFF800FuLL | (16LL * (MmProtectToValue[ValidAweProtection] & 0x7FF));
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x4200000) == 0x4200000 )
        v70 = v83 & 0xFFFFFFF0FFFF800FuLL | (16LL * (MmProtectToValue[ValidAweProtection] & 0x7FF)) & 0xFFFFFFF0FFFFFFFFuLL;
      v18 = v70 | 0x400000;
      goto LABEL_47;
    }
    if ( (MiGetWsleContents(v43, v93) & 0xF) == 8 )
      v83 |= 0x400000uLL;
    if ( *(__int64 *)(v37 + 40) < 0 )
    {
      if ( (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
        LOBYTE(v58) = 7;
      else
        v58 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v59 = 2
          * (v58 & 7 | (8LL
                      * (MmProtectToValue[(unsigned int)MiGetPfnProtection(
                                                          0x3FFFFFFFFFFFFFFFLL,
                                                          v45,
                                                          48 * v26 - 0x220000000000LL)] & 0x7FF)));
      v18 = v83 & 0xFFFFFFFFFFFF8001uLL | v59;
      v83 = v18;
      v10 = BugCheckParameter2;
      if ( (v6 & 8) == 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) != 0 )
          goto LABEL_47;
        if ( MiGetProtoPteAddress(BugCheckParameter2, v94, 8LL, v100) != (*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL) )
          goto LABEL_102;
        v18 = v83;
      }
      v18 |= 0x40000000uLL;
      goto LABEL_47;
    }
    v18 = v83 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v37 + 16) >> 5) & 0x1F] & 0x7FF));
    v10 = BugCheckParameter2;
    MappedSystemVa = v81;
    v12 = v76;
    v17 = a2;
    v11 = v77;
    v14 = v78;
    j = 0x7FFFFFFEFFFFLL;
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x4200000) == 0x4200000 )
      v18 = v83 & 0xFFFFFFF0FFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v37 + 16) >> 5) & 0x1F] & 0x7FF)) & 0xFFFFFFF0FFFFFFFFuLL;
LABEL_49:
    v16 = v79;
LABEL_50:
    if ( (v17 & 0x40000000) != 0 )
    {
      if ( (v18 & 1) != 0 )
      {
        if ( (v18 & 0x40000000) != 0 )
          v18 = v18 & 0xFFFFFFFFF8C0FFF1uLL | 0xE;
      }
      else if ( (v18 & 0x40000000) != 0 )
      {
        v18 &= 0xFFFFFFFFF03FFFFFuLL;
      }
    }
    MappedSystemVa[1] = v18;
    MappedSystemVa += 2;
    v81 = MappedSystemVa;
    v90 = MappedSystemVa;
    v79 = --v16;
    if ( !v16 )
    {
      v32 = 0;
      goto LABEL_53;
    }
    v13 = valid;
  }
  v10 = MiObtainReferencedVadEx(v19, 2LL, &v86);
  BugCheckParameter2 = v10;
  v14 = v78;
  if ( v10 )
  {
    v12 = v76;
    goto LABEL_17;
  }
  v32 = v86;
  if ( v86 != -1073741558 )
  {
LABEL_48:
    v12 = v76;
    v17 = a2;
    v11 = v77;
    j = 0x7FFFFFFEFFFFLL;
    goto LABEL_49;
  }
LABEL_53:
  if ( v14 )
  {
    LOBYTE(j) = 17;
    MiUnlockProtoPoolPage(v14, j);
  }
  if ( v76 != 17 )
  {
    if ( valid )
      MiUnlockPageTable(v77, valid);
    MiUnlockWorkingSetShared(v77, v76);
  }
  if ( v10 )
    MiUnlockAndDereferenceVadShared((PVOID)v10);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess(v101, 0LL);
  v33 = MemoryDescriptorList;
  if ( MemoryDescriptorList )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(v33, 0);
  }
  else
  {
    memmove(v96, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v32;
}
