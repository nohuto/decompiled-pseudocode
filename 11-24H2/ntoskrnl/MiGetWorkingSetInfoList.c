/*
 * XREFs of MiGetWorkingSetInfoList @ 0x14030D190
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x140204044 (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiRotatedToFrameBuffer @ 0x140213AD4 (MiRotatedToFrameBuffer.c)
 *     MiIsPfnEnclave @ 0x140219470 (MiIsPfnEnclave.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiGetPfnProtection @ 0x140306170 (MiGetPfnProtection.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiPureAweVad @ 0x14030CA90 (MiPureAweVad.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiInvalidPteConforms @ 0x1403461F0 (MiInvalidPteConforms.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiIsLazyStampedPte @ 0x1403F4D00 (MiIsLazyStampedPte.c)
 *     MiQueryPfn @ 0x14043F858 (MiQueryPfn.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x14049D728 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetProtectionFromPte @ 0x1404CC4F4 (MiGetProtectionFromPte.c)
 *     MiGetValidAweProtection @ 0x1404CCCF0 (MiGetValidAweProtection.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiGetAweVadPageSize @ 0x14097085C (MiGetAweVadPageSize.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 j; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 *MappedSystemVa; // r13
  __int64 v12; // rsi
  __int64 v13; // r11
  unsigned __int8 v14; // r10
  unsigned __int64 v15; // r8
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r12
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned __int64 v23; // r13
  __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  signed __int64 v30; // rbx
  int v31; // esi
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rax
  unsigned int v34; // ebx
  PMDL v35; // rdi
  __int64 v37; // rsi
  __int64 v38; // r13
  __int64 v39; // r15
  char v40; // r14
  char v41; // al
  unsigned __int64 v42; // rcx
  __int64 v43; // r14
  unsigned __int64 v44; // r10
  __int64 v45; // r14
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  ULONG_PTR v48; // rbx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // r8
  __int64 v53; // rbx
  __int64 v54; // r14
  __int64 v55; // rbx
  int PfnProtection; // eax
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v58; // rcx
  unsigned int v59; // esi
  __int64 v60; // rbx
  char v61; // dl
  __int64 v62; // r15
  unsigned __int64 v63; // rsi
  unsigned int v64; // edx
  __int64 v65; // rax
  int v66; // r8d
  __int64 v67; // rsi
  __int64 v68; // rcx
  unsigned int PfnPriority; // eax
  __int64 v70; // rsi
  int ValidAweProtection; // eax
  unsigned __int64 v72; // r14
  struct _MDL *Pool; // rax
  __int16 v74; // dx
  void *v75; // rax
  PMDL v76; // r14
  __int64 v77; // r14
  int i; // r8d
  __int64 v79; // rcx
  char v80; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 valid; // [rsp+38h] [rbp-1B0h]
  __int64 v82; // [rsp+40h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 *v84; // [rsp+50h] [rbp-198h]
  unsigned __int64 v85; // [rsp+58h] [rbp-190h]
  __int64 v86; // [rsp+60h] [rbp-188h] BYREF
  __int64 v87; // [rsp+68h] [rbp-180h]
  __int64 v88; // [rsp+70h] [rbp-178h]
  __int64 v89; // [rsp+78h] [rbp-170h]
  int v90; // [rsp+80h] [rbp-168h]
  unsigned int v91; // [rsp+84h] [rbp-164h] BYREF
  __int64 v92; // [rsp+88h] [rbp-160h]
  unsigned int v93; // [rsp+90h] [rbp-158h]
  unsigned __int64 v94; // [rsp+98h] [rbp-150h]
  unsigned __int64 *v95; // [rsp+A0h] [rbp-148h]
  PMDL MemoryDescriptorList; // [rsp+A8h] [rbp-140h]
  ULONG_PTR BugCheckParameter1; // [rsp+B0h] [rbp-138h]
  ULONG_PTR v98; // [rsp+B8h] [rbp-130h] BYREF
  unsigned __int64 v99; // [rsp+C0h] [rbp-128h]
  void *v100; // [rsp+C8h] [rbp-120h]
  ULONG_PTR v101; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v102; // [rsp+D8h] [rbp-110h]
  unsigned __int64 v103; // [rsp+E0h] [rbp-108h]
  __int64 v104; // [rsp+E8h] [rbp-100h] BYREF
  _OWORD v105[3]; // [rsp+F0h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+120h] [rbp-C8h] BYREF

  v100 = (void *)a3;
  BugCheckParameter1 = a1;
  v101 = a1;
  v102 = a3;
  v86 = 0LL;
  v98 = 0LL;
  memset(v105, 0, sizeof(v105));
  v6 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v7 = a4 >> 4;
  v85 = a4 >> 4;
  if ( !(a4 >> 4) )
    return 3221225476LL;
  if ( (a2 & 0x3FFFFFFC) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v7 > 8 )
  {
    Pool = (struct _MDL *)MiAllocatePool(0x40uLL, 8 * ((a4 >> 12) + ((a4 & 0xFFF) != 0) + 7LL), 538996045);
    MemoryDescriptorList = Pool;
    if ( Pool )
    {
      Pool->Next = 0LL;
      v74 = a3;
      Pool->Size = 8 * (((a4 + (a3 & 0xFFF) + 4095) >> 12) + 6);
      Pool->MdlFlags = 0;
      v75 = (void *)(a3 & 0xFFFFFFFFFFFFF000uLL);
      v76 = MemoryDescriptorList;
      MemoryDescriptorList->StartVa = v75;
      v76->ByteOffset = v74 & 0xFFF;
      v76->ByteCount = a4;
      MmProbeAndLockPages(v76, CurrentThread->PreviousMode, IoWriteAccess);
      if ( (v76->MdlFlags & 5) != 0 )
        MappedSystemVa = (unsigned __int64 *)v76->MappedSystemVa;
      else
        MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v76, 0, MmCached, 0LL, 0, 0x40000010u);
      v95 = MappedSystemVa;
      v84 = MappedSystemVa;
      if ( MappedSystemVa )
        goto LABEL_7;
      MmUnlockPages(v76);
      ExFreePoolWithTag(v76, 0);
    }
    return 3221225626LL;
  }
  memmove(Src, (const void *)a3, 16 * v7);
  MemoryDescriptorList = 0LL;
  MappedSystemVa = (unsigned __int64 *)Src;
  v84 = (unsigned __int64 *)Src;
  v95 = (unsigned __int64 *)Src;
LABEL_7:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v105);
    v6 = 1;
  }
  v12 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = BugCheckParameter1 + 1024;
  v82 = BugCheckParameter1 + 1024;
  v14 = 17;
  v80 = 17;
  v15 = 0LL;
  valid = 0LL;
  v92 = 0LL;
  v91 = 0;
  v88 = 0LL;
  do
  {
    v16 = 0LL;
    v87 = 0LL;
    v6 &= ~8u;
    v17 = *MappedSystemVa;
    v94 = v17;
    if ( v17 > 0x7FFFFFFEFFFFLL )
      goto LABEL_53;
    v10 = v17 >> 12;
    v99 = v17 >> 12;
    if ( v12 )
    {
      if ( v10 >= (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) )
      {
        j = *(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32);
        if ( v10 <= j )
        {
          v18 = valid;
          goto LABEL_18;
        }
      }
      if ( v88 )
      {
        LOBYTE(j) = 17;
        MiUnlockProtoPoolPage(v88, j, v15, v10);
        v88 = 0LL;
        v92 = 0LL;
        v14 = v80;
        v15 = valid;
        v13 = v82;
      }
      if ( v14 == 17 )
      {
        v18 = valid;
        MiUnlockAndDereferenceVadShared(v12);
      }
      else
      {
        if ( v15 )
        {
          MiUnlockPageTableInternal(v13, v15);
          v18 = 0LL;
          valid = 0LL;
          v14 = v80;
        }
        else
        {
          v18 = valid;
        }
        MiUnlockWorkingSetShared(v82, v14);
        v80 = 17;
        MiUnlockAndDereferenceVadShared(v12);
      }
    }
    else
    {
      v18 = valid;
    }
    v12 = MiObtainReferencedVadEx(v17, 2LL, &v91);
    BugCheckParameter2 = v12;
    if ( v12 )
    {
      v14 = v80;
LABEL_18:
      v103 = v17 & 0xFFFFFFFFFFFFF000uLL;
      if ( ((v17 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || (v17 & 0x7FFFFFFFF000LL) == qword_140E2DBB8
                                                        && qword_140E2DBB8)
        && (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 )
      {
        v6 |= 8u;
      }
      v19 = v6 & 0xFFFFFFDF;
      v6 = v6 & 0xFFFFFFDF | 0x20;
      if ( (*(_DWORD *)(v12 + 48) & 0x70) != 0x10 )
        v6 = v19;
LABEL_22:
      v6 &= 0xFFFFFFF9;
      LODWORD(v89) = v6;
      if ( (v6 & 0x20) == 0 )
      {
        if ( (v20 = *(_DWORD *)(v12 + 48), j = v20 & 0x200000, (v20 & 0x200000) != 0)
          && ((v21 = (v20 >> 19) & 3, (v20 & 0x800000) != 0) || v21 >= 2)
          && v21 >= 2
          || !(_DWORD)j && (*(_DWORD *)(v12 + 64) & 1) != 0
          || MiPureAweVad(v12) && (v6 |= 4u, LODWORD(v89) = v6, (unsigned __int64)MiGetAweVadPageSize(v12) >= 0x200) )
        {
          v6 |= 2u;
          LODWORD(v89) = v6;
        }
      }
      v90 = v6 & 2;
      v22 = v88;
      if ( (v6 & 2) != 0 )
      {
        if ( v88 )
        {
          LOBYTE(j) = 17;
          MiUnlockProtoPoolPage(v88, j, v15, v10);
          v22 = 0LL;
          v88 = 0LL;
          v92 = 0LL;
          v14 = v80;
        }
        if ( v14 != 17 )
        {
          if ( v18 )
          {
            MiUnlockPageTableInternal(v82, v18);
            v18 = 0LL;
            valid = 0LL;
            v14 = v80;
          }
          MiUnlockWorkingSetShared(v82, v14);
          v14 = 17;
          v80 = 17;
        }
      }
      v23 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v14 == 17 )
        goto LABEL_30;
      if ( ((((v17 >> 9) & 0xF8) + 8) & 0x78) != 0 || (v60 = v82, !(unsigned int)MiWorkingSetIsContended(v82, 0LL)) )
      {
        if ( !KeShouldYieldProcessor() )
        {
          v14 = v80;
LABEL_30:
          v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v89 = v24;
          while ( 1 )
          {
            while ( 1 )
            {
              v25 = valid;
              while ( 1 )
              {
                if ( v14 == 17 )
                  v80 = MiLockWorkingSetShared(v82, j, v15, v10);
                v26 = -1LL;
                v27 = -1LL;
                v16 = 0LL;
                v87 = 0LL;
                if ( v25 == v24 )
                {
                  v28 = v23;
                  v98 = v23;
                }
                else
                {
                  if ( v88 )
                  {
                    LOBYTE(j) = 17;
                    MiUnlockProtoPoolPage(v88, j, v15, v10);
                    v88 = 0LL;
                    v92 = 0LL;
                  }
                  if ( v25 )
                    MiUnlockPageTableInternal(v82, v25);
                  valid = MiLockLowestValidPageTableEx(v82, v23, &v98, 0);
                  v28 = v98;
                }
                v29 = MI_READ_PTE_LOCK_FREE(v28);
                v30 = v29;
                if ( !v29 )
                {
                  if ( (v6 & 0x20) == 0 )
                  {
                    v31 = v90;
                    if ( v90 )
                    {
                      v15 = valid;
                      goto LABEL_40;
                    }
                    v32 = v94;
                    goto LABEL_126;
                  }
                  goto LABEL_49;
                }
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
                  v79 = 1LL;
                  for ( j = v99; i; --i )
                  {
                    v26 += v79 * (j & 0x1FF);
                    j >>= 9;
                    v79 <<= 9;
                  }
                  v16 = 8388609LL;
                  v87 = 8388609LL;
                  goto LABEL_264;
                }
                v15 = valid;
                if ( valid == v89 )
                  goto LABEL_39;
                if ( !(unsigned int)MiWorkingSetInfoCheckPageTable(v82, v28, (unsigned int)&v86, a2, v80) )
                  break;
                v25 = 0LL;
                valid = 0LL;
                v24 = v89;
                v14 = v80;
              }
              v16 = v87;
LABEL_264:
              v15 = valid;
LABEL_39:
              v31 = v90;
LABEL_40:
              if ( v27 != -1LL )
                goto LABEL_84;
              if ( v31 )
              {
                v14 = v80;
                v18 = valid;
                v12 = BugCheckParameter2;
                v17 = v94;
                goto LABEL_22;
              }
              v32 = v94;
              j = 0xFFFFF6FB40000000uLL;
              if ( v15 != ((v94 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
              {
                v12 = BugCheckParameter2;
                MappedSystemVa = v84;
                goto LABEL_52;
              }
              v33 = MI_READ_PTE_LOCK_FREE(v23);
              v30 = v33;
              if ( (v33 & 1) != 0 )
              {
                v45 = v16 | 1;
                v87 = v45;
                if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x70) == 0x40 )
                  v6 |= 0x10u;
                else
                  v6 &= ~0x10u;
                v26 = (v33 >> 12) & 0xFFFFFFFFFFLL;
                if ( (v6 & 0x30) != 0 )
                {
                  v61 = MiPageToNode((v33 >> 12) & 0xFFFFFFFFFFLL);
                  v62 = 48 * v26 - 0x220000000000LL;
                  if ( v26 <= qword_140E2DD20 )
                  {
                    if ( (*(_QWORD *)(48 * v26 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
                      && ((*(_DWORD *)(v62 + 32) & 0x40000000) != 0
                       || (unsigned int)MiIsPageOnBadList(48 * v26 - 0x220000000000LL)) )
                    {
                      v45 = v87 | 0x80000000LL;
                    }
                    else
                    {
                      v45 = v87;
                    }
                  }
                  v63 = v45 & 0xFFFFFFFFFFC0FFFFuLL | ((unsigned __int64)(v61 & 0x3F) << 16);
                  if ( (v6 & 0x20) != 0 )
                  {
                    v64 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
                    if ( (v30 & 0x18) == 8 )
                    {
                      v64 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 7 | 0x18;
                    }
                    else if ( (v30 & 0x10) != 0 )
                    {
                      v64 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x17 | 8;
                    }
                    v63 |= 0x400001uLL;
                  }
                  else if ( (unsigned int)MiRotatedToFrameBuffer(v23) )
                  {
                    if ( (v30 & 0x800) != 0 )
                      v64 = 4;
                    else
                      v64 = 1;
                    v66 = *(_DWORD *)(BugCheckParameter2 + 48) & 0xC00;
                    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x380) != 0 && v66 == 3072 )
                    {
                      v64 |= 0x18u;
                    }
                    else if ( v66 == 1024 )
                    {
                      v64 |= 8u;
                    }
                  }
                  else
                  {
                    PfnPriority = MiGetPfnPriority(48 * v26 - 0x220000000000LL);
                    v87 = ((unsigned __int64)PfnPriority << 24) ^ (((unsigned __int64)PfnPriority << 24) ^ v63) & 0xFFFFFFFFF8FFFFFFuLL;
                    v64 = (*(_DWORD *)(v62 + 16) >> 5) & 0x1F;
                    if ( (*(_QWORD *)(v62 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v62 + 8) <= 0 )
                    {
                      v63 = v87;
                    }
                    else
                    {
                      v87 |= 0x8000uLL;
                      if ( (*(_QWORD *)(v62 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
                        LOBYTE(v70) = 7;
                      else
                        v70 = *(_QWORD *)(v62 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                      v63 = v87 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v70 & 7));
                      v64 = MmMakeProtectNotWriteCopy[v64];
                    }
                  }
                  v65 = v64;
                  j = 0x140000000uLL;
                  v16 = v63 & 0xFFFFFFFFFFFF800FuLL | (16LL * (MmProtectToValue[v65] & 0x7FF));
                  v12 = BugCheckParameter2;
                  goto LABEL_50;
                }
LABEL_84:
                v37 = 48 * v26 - 0x220000000000LL;
                v38 = v37;
                if ( (*(_QWORD *)(v37 + 40) & 0x10000000000LL) != 0 )
                {
                  if ( v27 == -1LL )
                    v27 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
                  v38 = 48 * v27 - 0x220000000000LL;
                }
                if ( *(__int64 *)(v38 + 40) < 0 )
                  v39 = 0x8000LL;
                else
                  v39 = 0LL;
                v40 = MiGetPfnPriority(v38);
                v41 = MI_NODE_FROM_PFN(v38);
                v42 = v87 & 0xFFFFFFFFF8C07FFFuLL;
                v87 = v39 | v87 & 0xFFFFFFFFF8C07FFFuLL | ((v41 & 0x3F | ((unsigned __int64)(v40 & 7) << 8)) << 16);
                if ( (*(_DWORD *)(v37 + 32) & 0x40000000) != 0
                  || (unsigned int)MiIsPageOnBadList(48 * v26 - 0x220000000000LL) )
                {
                  v43 = v87 | 0x80000000LL;
                  v87 |= 0x80000000uLL;
                }
                else
                {
                  v43 = v87;
                }
                if ( (v43 & 0x800000) != 0 )
                  goto LABEL_106;
                if ( (*(_QWORD *)(v37 + 40) & 0x10000000000LL) != 0
                  || ((*(_QWORD *)(v37 + 40) >> 60) & 7) == 1 && *(__int64 *)(v37 + 40) < 0 )
                {
                  v43 = v87;
LABEL_106:
                  v12 = BugCheckParameter2;
                  v46 = v43 & 0xFFFFFFFFFFFF800FuLL | (16LL
                                                     * (MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                         BugCheckParameter2,
                                                                                         v30)] & 0x7FF));
                  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x4200000) == 0x4200000 )
                    v46 &= 0xFFFFFFF0FFFFFFFFuLL;
                  j = v46 | 0x400000;
                  v87 = j;
                  if ( *(__int64 *)(v38 + 40) < 0 )
                  {
                    j = 0x3FFFFFFFFFFFFFFFLL;
                    if ( (*(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
                      LOBYTE(v77) = 7;
                    else
                      v77 = *(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                    v16 = v87 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v77 & 7 | 0x20000000));
                    goto LABEL_50;
                  }
                  goto LABEL_109;
                }
                if ( ((*(_QWORD *)(v37 + 40) >> 60) & 7) == 1 )
                {
                  if ( (unsigned int)MiIsPfnEnclave(48 * v26 - 0x220000000000LL) )
                  {
                    ValidAweProtection = (*(_DWORD *)(v37 + 16) >> 5) & 0x1F;
                    v12 = BugCheckParameter2;
                  }
                  else
                  {
                    v12 = BugCheckParameter2;
                    ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v30);
                  }
                  v72 = v87 & 0xFFFFFFFFFFFF800FuLL | (16LL * (MmProtectToValue[ValidAweProtection] & 0x7FF));
                  if ( (*(_DWORD *)(v12 + 48) & 0x4200000) == 0x4200000 )
                    v72 = v87 & 0xFFFFFFF0FFFF800FuLL | (16LL * (MmProtectToValue[ValidAweProtection] & 0x7FF)) & 0xFFFFFFF0FFFFFFFFuLL;
                  v16 = v72 | 0x400000;
                  goto LABEL_50;
                }
                if ( (MiGetWsleContents(v42, v94) & 0xF) == 8 )
                  v87 |= 0x400000uLL;
                if ( *(__int64 *)(v37 + 40) < 0 )
                {
                  if ( (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
                    LOBYTE(v55) = 7;
                  else
                    v55 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                  PfnProtection = MiGetPfnProtection(0x3FFFFFFFFFFFFFFFLL, v44, 48 * v26 - 0x220000000000LL);
                  v16 = v87 & 0xFFFFFFFFFFFF8001uLL | (2 * (v55 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
                  v87 = v16;
                  if ( (v6 & 8) != 0 )
                  {
                    v16 |= 0x40000000uLL;
                    v12 = BugCheckParameter2;
                    goto LABEL_50;
                  }
                  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) != 0 )
                  {
                    v12 = BugCheckParameter2;
                    goto LABEL_50;
                  }
                  ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter2, v99, 8u, &v104);
                  j = 0x8000000000000000uLL;
                  v58 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
                  v12 = BugCheckParameter2;
                  if ( ProtoPteAddress == v58 )
                  {
                    v16 = v87 | 0x40000000;
                    goto LABEL_50;
                  }
                  goto LABEL_109;
                }
                v16 = v87 & 0xFFFFFFFFFFFF8001uLL | (16LL
                                                   * (MmProtectToValue[(*(_DWORD *)(v37 + 16) >> 5) & 0x1F] & 0x7FF));
                v12 = BugCheckParameter2;
                v14 = v80;
                v15 = valid;
                MappedSystemVa = v84;
                v7 = v85;
                v13 = v82;
                if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x4200000) == 0x4200000 )
                  v16 &= 0xFFFFFFF0FFFFFFFFuLL;
                goto LABEL_53;
              }
              if ( (v33 & 0x400) != 0 )
                break;
              if ( (v33 & 0x800) == 0 )
              {
                if ( (v6 & 4) != 0 && (unsigned int)MiIsLazyStampedPte(v33) )
                {
                  v16 = 0LL;
                  v12 = BugCheckParameter2;
                  goto LABEL_50;
                }
                if ( (unsigned int)MiGetPagingFileOffset(v30) )
                {
                  v16 = v16 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
                  goto LABEL_49;
                }
                if ( !v30 )
                {
LABEL_126:
                  v12 = BugCheckParameter2;
                  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) == 0 || (v6 & 8) != 0 )
                    goto LABEL_127;
LABEL_50:
                  MappedSystemVa = v84;
                  goto LABEL_51;
                }
LABEL_49:
                v12 = BugCheckParameter2;
                goto LABEL_50;
              }
              while ( 1 )
              {
                while ( 1 )
                {
                  v47 = MI_READ_PTE_LOCK_FREE(v23);
                  v48 = v47;
                  if ( (v47 & 0x800) == 0 )
                    goto LABEL_269;
                  if ( (unsigned int)MiInvalidPteConforms(v47) )
                  {
                    if ( qword_140E2DCC0 )
                    {
                      if ( (v48 & 0x10) != 0 )
                        v49 &= ~0x10uLL;
                      else
                        v49 = v48 & ~qword_140E2DCC0;
                    }
                    v50 = (v49 >> 12) & 0xFFFFFFFFFFLL;
                    v51 = 48 * v50 - 0x220000000000LL;
                    if ( v50 <= qword_140E2DD20 && (*(_QWORD *)(48 * v50 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
                      break;
                  }
                }
                v93 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
                {
                  do
                  {
                    v59 = v93 + 1;
                    v93 = v59;
                    if ( (v59 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v59);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v51 + 24) < 0 );
                }
                if ( MI_READ_PTE_LOCK_FREE(v23) == v48 )
                  break;
                _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              j = (unsigned __int64)qword_140E300C8;
              if ( (*(_DWORD *)(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v51 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              {
                v51 = MiLockSpecialPurposeMemoryCachedPage(v51, 0);
                if ( !v51 )
                {
LABEL_269:
                  v51 = 0LL;
                  goto LABEL_122;
                }
              }
              if ( (*(_QWORD *)(v51 + 8) | 0x8000000000000000uLL) != v23
                && (*(_QWORD *)(v51 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, v23, v48, *(_QWORD *)(v51 + 8));
              }
LABEL_122:
              if ( v51 )
              {
                MI_READ_PTE_LOCK_FREE(v23);
                MiQueryPfn(0xAAAAAAAAAAAAAAABuLL * ((v51 + 0x220000000000LL) >> 4), &v86);
                _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v16 = v87;
                v12 = BugCheckParameter2;
                goto LABEL_50;
              }
              v24 = v89;
              v14 = v80;
            }
            v12 = BugCheckParameter2;
LABEL_127:
            v52 = 0LL;
            if ( (v6 & 8) != 0 )
              break;
            if ( (*(_DWORD *)(v12 + 48) & 0x200000) == 0 )
            {
              v52 = MiGetProtoPteAddress(v12, v32 >> 12, 8u, &v104);
              if ( !v30 || MiIsPrototypePteVadLookup(v30) )
                goto LABEL_130;
            }
            if ( qword_140E2DCC0 )
            {
              if ( (v30 & 0x10) != 0 )
                v30 &= ~0x10uLL;
              else
                v30 &= ~qword_140E2DCC0;
            }
            v53 = v30 >> 16;
LABEL_131:
            if ( !v53 )
              goto LABEL_50;
            v54 = v16 | 0x8000;
            v87 = v54;
            if ( v53 == v52 )
              v87 = v54 | 0x40000000;
            if ( ((v53 ^ v92) & 0xFFFFFFFFFFFFF000uLL) == 0 )
              goto LABEL_189;
            if ( v88 )
            {
              LOBYTE(j) = 17;
              MiUnlockProtoPoolPage(v88, j, v52, v10);
              v92 = 0LL;
            }
            v88 = MiLockProtoPoolPage(v53, 0LL);
            if ( v88 )
            {
              v92 = v53;
LABEL_189:
              v67 = MiLockLeafPage(v53, 0LL, v52, v10);
              j = *(_QWORD *)v53;
              if ( v67 )
              {
                MiQueryPfn(0xAAAAAAAAAAAAAAABuLL * ((v67 + 0x220000000000LL) >> 4), &v86);
                _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v16 = v87;
                v12 = BugCheckParameter2;
                goto LABEL_50;
              }
              if ( (j & 0xC00) != 0 || !(unsigned int)MiInvalidPteConforms(*(_QWORD *)v53) )
              {
                v12 = BugCheckParameter2;
              }
              else
              {
                v12 = BugCheckParameter2;
                if ( (unsigned int)MiGetPagingFileOffset(v68) )
                {
                  v16 = v87 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
                  goto LABEL_50;
                }
                if ( !j )
                {
                  v16 = 0LL;
                  goto LABEL_50;
                }
              }
LABEL_109:
              v16 = v87;
              goto LABEL_50;
            }
            if ( v80 != 17 )
            {
              if ( valid )
              {
                MiUnlockPageTableInternal(v82, valid);
                valid = 0LL;
              }
              MiUnlockWorkingSetShared(v82, v80);
              v80 = 17;
            }
            MmAccessFault(2uLL, v53, 0, 0LL);
            v24 = v89;
            v14 = v80;
          }
          v52 = qword_140E2DBB0;
          if ( v103 == 2147352576 )
            v52 = qword_140E2DBA8;
LABEL_130:
          v53 = v52;
          goto LABEL_131;
        }
        v60 = v82;
      }
      if ( v22 )
      {
        LOBYTE(j) = 17;
        MiUnlockProtoPoolPage(v22, j, v15, v10);
        v88 = 0LL;
        v92 = 0LL;
      }
      if ( v18 )
      {
        MiUnlockPageTableInternal(v60, v18);
        valid = 0LL;
      }
      MiUnlockWorkingSetShared(v60, v80);
      v14 = 17;
      v80 = 17;
      goto LABEL_30;
    }
    v34 = v91;
    if ( v91 == -1073741558 )
      goto LABEL_59;
LABEL_51:
    v15 = valid;
LABEL_52:
    v14 = v80;
    v7 = v85;
    v13 = v82;
LABEL_53:
    if ( (a2 & 0x40000000) != 0 )
    {
      if ( (v16 & 1) != 0 )
      {
        if ( (v16 & 0x40000000) != 0 )
          v16 = v16 & 0xFFFFFFFFF8C0FFF1uLL | 0xE;
      }
      else if ( (v16 & 0x40000000) != 0 )
      {
        v16 &= 0xFFFFFFFFF03FFFFFuLL;
      }
    }
    MappedSystemVa[1] = v16;
    MappedSystemVa += 2;
    v84 = MappedSystemVa;
    v95 = MappedSystemVa;
    v85 = --v7;
  }
  while ( v7 );
  v34 = 0;
  v18 = valid;
LABEL_59:
  if ( v88 )
  {
    LOBYTE(j) = 17;
    MiUnlockProtoPoolPage(v88, j, v15, v10);
  }
  if ( v80 != 17 )
  {
    if ( v18 )
      MiUnlockPageTableInternal(v82, v18);
    MiUnlockWorkingSetShared(v82, v80);
  }
  if ( BugCheckParameter2 )
    MiUnlockAndDereferenceVadShared(BugCheckParameter2);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v105, 0, v15, v10);
  v35 = MemoryDescriptorList;
  if ( MemoryDescriptorList )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(v35, 0);
  }
  else
  {
    memmove(v100, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v34;
}
