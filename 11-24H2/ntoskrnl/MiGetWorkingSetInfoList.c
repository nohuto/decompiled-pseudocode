/*
 * XREFs of MiGetWorkingSetInfoList @ 0x1403032B0
 * Callers:
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetPfnProtection @ 0x140212E10 (MiGetPfnProtection.c)
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiPureAweVad @ 0x140302310 (MiPureAweVad.c)
 *     MiInvalidPteConforms @ 0x140302590 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiIsLazyStampedPte @ 0x1403114C0 (MiIsLazyStampedPte.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiIsPfnEnclave @ 0x1403A2840 (MiIsPfnEnclave.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiQueryPfn @ 0x140447088 (MiQueryPfn.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1404A2798 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetProtectionFromPte @ 0x1404D3334 (MiGetProtectionFromPte.c)
 *     MiGetValidAweProtection @ 0x1404D3AEC (MiGetValidAweProtection.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MiGetAweVadPageSize @ 0x140988078 (MiGetAweVadPageSize.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 j; // rdx
  __int64 v10; // r9
  unsigned __int64 *MappedSystemVa; // r13
  __int64 v12; // rsi
  ULONG_PTR v13; // r11
  unsigned __int8 v14; // r10
  __int64 v15; // r8
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r12
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  ULONG_PTR v23; // rsi
  ULONG_PTR v24; // r13
  __int64 v25; // rbx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // esi
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rax
  unsigned int v35; // ebx
  PMDL v36; // rdi
  __int64 v38; // rsi
  __int64 v39; // r13
  __int64 v40; // r15
  char v41; // r14
  char v42; // al
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // r14
  unsigned __int64 v46; // r10
  __int64 v47; // r14
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  ULONG_PTR v50; // rbx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // r8
  __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // rbx
  int PfnProtection; // eax
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v60; // rcx
  unsigned int v61; // esi
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // r15
  unsigned __int64 v65; // rsi
  unsigned int v66; // edx
  __int64 v67; // rax
  int v68; // r8d
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  ULONG_PTR v72; // rsi
  __int64 v73; // rcx
  unsigned int PfnPriority; // eax
  __int64 v75; // rsi
  int ValidAweProtection; // eax
  unsigned __int64 v77; // r14
  struct _MDL *Pool; // rax
  __int16 v79; // dx
  void *v80; // rax
  PMDL v81; // r14
  __int64 v82; // r14
  int i; // r8d
  __int64 v84; // rcx
  char v85; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 valid; // [rsp+38h] [rbp-1B0h]
  __int64 v87; // [rsp+40h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 *v89; // [rsp+50h] [rbp-198h]
  unsigned __int64 v90; // [rsp+58h] [rbp-190h]
  __int64 v91; // [rsp+60h] [rbp-188h] BYREF
  __int64 v92; // [rsp+68h] [rbp-180h]
  ULONG_PTR v93; // [rsp+70h] [rbp-178h]
  __int64 v94; // [rsp+78h] [rbp-170h]
  int v95; // [rsp+80h] [rbp-168h]
  unsigned int v96; // [rsp+84h] [rbp-164h] BYREF
  __int64 v97; // [rsp+88h] [rbp-160h]
  unsigned int v98; // [rsp+90h] [rbp-158h]
  unsigned __int64 v99; // [rsp+98h] [rbp-150h]
  unsigned __int64 *v100; // [rsp+A0h] [rbp-148h]
  PMDL MemoryDescriptorList; // [rsp+A8h] [rbp-140h]
  ULONG_PTR BugCheckParameter1; // [rsp+B0h] [rbp-138h]
  ULONG_PTR v103; // [rsp+B8h] [rbp-130h] BYREF
  unsigned __int64 v104; // [rsp+C0h] [rbp-128h]
  void *v105; // [rsp+C8h] [rbp-120h]
  ULONG_PTR v106; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v107; // [rsp+D8h] [rbp-110h]
  unsigned __int64 v108; // [rsp+E0h] [rbp-108h]
  unsigned __int64 *v109; // [rsp+E8h] [rbp-100h] BYREF
  _OWORD v110[3]; // [rsp+F0h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+120h] [rbp-C8h] BYREF

  v105 = (void *)a3;
  BugCheckParameter1 = a1;
  v106 = a1;
  v107 = a3;
  v91 = 0LL;
  v103 = 0LL;
  memset(v110, 0, sizeof(v110));
  v6 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v7 = a4 >> 4;
  v90 = a4 >> 4;
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
      v79 = a3;
      Pool->Size = 8 * (((a4 + (a3 & 0xFFF) + 4095) >> 12) + 6);
      Pool->MdlFlags = 0;
      v80 = (void *)(a3 & 0xFFFFFFFFFFFFF000uLL);
      v81 = MemoryDescriptorList;
      MemoryDescriptorList->StartVa = v80;
      v81->ByteOffset = v79 & 0xFFF;
      v81->ByteCount = a4;
      MmProbeAndLockPages(v81, CurrentThread->PreviousMode, IoWriteAccess);
      if ( (v81->MdlFlags & 5) != 0 )
        MappedSystemVa = (unsigned __int64 *)v81->MappedSystemVa;
      else
        MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v81, 0, MmCached, 0LL, 0, 0x40000010u);
      v100 = MappedSystemVa;
      v89 = MappedSystemVa;
      if ( MappedSystemVa )
        goto LABEL_7;
      MmUnlockPages(v81);
      ExFreePoolWithTag(v81, 0);
    }
    return 3221225626LL;
  }
  memmove(Src, (const void *)a3, 16 * v7);
  MemoryDescriptorList = 0LL;
  MappedSystemVa = (unsigned __int64 *)Src;
  v89 = (unsigned __int64 *)Src;
  v100 = (unsigned __int64 *)Src;
LABEL_7:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess(BugCheckParameter1);
    v6 = 1;
  }
  v12 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = BugCheckParameter1 + 1024;
  v87 = BugCheckParameter1 + 1024;
  v14 = 17;
  v85 = 17;
  v15 = 0LL;
  valid = 0LL;
  v97 = 0LL;
  v96 = 0;
  v93 = 0LL;
  do
  {
    v16 = 0LL;
    v92 = 0LL;
    v6 &= ~8u;
    v17 = *MappedSystemVa;
    v99 = v17;
    if ( v17 > 0x7FFFFFFEFFFFLL )
      goto LABEL_53;
    v18 = v17 >> 12;
    v104 = v17 >> 12;
    if ( v12 )
    {
      if ( v18 >= (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) )
      {
        j = *(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32);
        if ( v18 <= j )
        {
          v19 = valid;
          goto LABEL_18;
        }
      }
      if ( v93 )
      {
        LOBYTE(j) = 17;
        MiUnlockProtoPoolPage(v93, j, v15);
        v93 = 0LL;
        v97 = 0LL;
        v14 = v85;
        v15 = valid;
        v13 = v87;
      }
      if ( v14 == 17 )
      {
        v19 = valid;
        MiUnlockAndDereferenceVadShared(v12, j, v15, v18);
      }
      else
      {
        if ( v15 )
        {
          MiUnlockPageTableInternal(v13, v15);
          v19 = 0LL;
          valid = 0LL;
          v14 = v85;
        }
        else
        {
          v19 = valid;
        }
        MiUnlockWorkingSetShared(v87, v14);
        v85 = 17;
        MiUnlockAndDereferenceVadShared(v12, v69, v70, v71);
      }
    }
    else
    {
      v19 = valid;
    }
    v12 = MiObtainReferencedVadEx(v17, 2LL, (int *)&v96);
    BugCheckParameter2 = v12;
    if ( v12 )
    {
      v14 = v85;
LABEL_18:
      v108 = v17 & 0xFFFFFFFFFFFFF000uLL;
      if ( ((v17 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || (v17 & 0x7FFFFFFFF000LL) == qword_140E2DA78
                                                        && qword_140E2DA78)
        && (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 )
      {
        v6 |= 8u;
      }
      v20 = v6 & 0xFFFFFFDF;
      v6 = v6 & 0xFFFFFFDF | 0x20;
      if ( (*(_DWORD *)(v12 + 48) & 0x70) != 0x10 )
        v6 = v20;
LABEL_22:
      v6 &= 0xFFFFFFF9;
      LODWORD(v94) = v6;
      if ( (v6 & 0x20) == 0 )
      {
        if ( (v21 = *(_DWORD *)(v12 + 48), j = v21 & 0x200000, (v21 & 0x200000) != 0)
          && ((v22 = (v21 >> 19) & 3, (v21 & 0x800000) != 0) || v22 >= 2)
          && v22 >= 2
          || !(_DWORD)j && (*(_DWORD *)(v12 + 64) & 1) != 0
          || MiPureAweVad(v12) && (v6 |= 4u, LODWORD(v94) = v6, (unsigned __int64)MiGetAweVadPageSize(v12) >= 0x200) )
        {
          v6 |= 2u;
          LODWORD(v94) = v6;
        }
      }
      v95 = v6 & 2;
      v23 = v93;
      if ( (v6 & 2) != 0 )
      {
        if ( v93 )
        {
          LOBYTE(j) = 17;
          MiUnlockProtoPoolPage(v93, j, v15);
          v23 = 0LL;
          v93 = 0LL;
          v97 = 0LL;
          v14 = v85;
        }
        if ( v14 != 17 )
        {
          if ( v19 )
          {
            MiUnlockPageTableInternal(v87, v19);
            v19 = 0LL;
            valid = 0LL;
            v14 = v85;
          }
          MiUnlockWorkingSetShared(v87, v14);
          v14 = 17;
          v85 = 17;
        }
      }
      v24 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v14 == 17 )
        goto LABEL_30;
      if ( ((((v17 >> 9) & 0xF8) + 8) & 0x78) != 0 || (v62 = v87, !(unsigned int)MiWorkingSetIsContended(v87, 0LL)) )
      {
        if ( !KeShouldYieldProcessor() )
        {
          v14 = v85;
LABEL_30:
          v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v94 = v25;
          while ( 1 )
          {
            while ( 1 )
            {
              v26 = valid;
              while ( 1 )
              {
                if ( v14 == 17 )
                  v85 = MiLockWorkingSetShared(v87);
                v27 = -1LL;
                v28 = -1LL;
                v16 = 0LL;
                v92 = 0LL;
                if ( v26 == v25 )
                {
                  v29 = v24;
                  v103 = v24;
                }
                else
                {
                  if ( v93 )
                  {
                    LOBYTE(j) = 17;
                    MiUnlockProtoPoolPage(v93, j, v15);
                    v93 = 0LL;
                    v97 = 0LL;
                  }
                  if ( v26 )
                    MiUnlockPageTableInternal(v87, v26);
                  valid = MiLockLowestValidPageTableEx(v87, v24, &v103, 0);
                  v29 = v103;
                }
                v30 = MI_READ_PTE_LOCK_FREE(v29);
                v31 = v30;
                if ( !v30 )
                {
                  if ( (v6 & 0x20) == 0 )
                  {
                    v32 = v95;
                    if ( v95 )
                    {
                      v15 = valid;
                      goto LABEL_40;
                    }
                    v33 = v99;
                    goto LABEL_126;
                  }
                  goto LABEL_49;
                }
                if ( (v30 & 0x81) == 0x81 )
                {
                  v27 = (v30 >> 12) & 0xFFFFFFFFFFLL;
                  v28 = v27;
                  for ( i = -1; v29 >= 0xFFFFF68000000000uLL; ++i )
                  {
                    if ( v29 > 0xFFFFF6FFFFFFFFFFuLL )
                      break;
                    v29 = (__int64)(v29 << 25) >> 16;
                  }
                  v84 = 1LL;
                  for ( j = v104; i; --i )
                  {
                    v27 += v84 * (j & 0x1FF);
                    j >>= 9;
                    v84 <<= 9;
                  }
                  v16 = 8388609LL;
                  v92 = 8388609LL;
                  goto LABEL_264;
                }
                v15 = valid;
                if ( valid == v94 )
                  goto LABEL_39;
                if ( !(unsigned int)MiWorkingSetInfoCheckPageTable(v87, v29, (unsigned int)&v91, a2, v85) )
                  break;
                v26 = 0LL;
                valid = 0LL;
                v25 = v94;
                v14 = v85;
              }
              v16 = v92;
LABEL_264:
              v15 = valid;
LABEL_39:
              v32 = v95;
LABEL_40:
              if ( v28 != -1LL )
                goto LABEL_84;
              if ( v32 )
              {
                v14 = v85;
                v19 = valid;
                v12 = BugCheckParameter2;
                v17 = v99;
                goto LABEL_22;
              }
              v33 = v99;
              j = 0xFFFFF6FB40000000uLL;
              if ( v15 != ((v99 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
              {
                v12 = BugCheckParameter2;
                MappedSystemVa = v89;
                goto LABEL_52;
              }
              v34 = MI_READ_PTE_LOCK_FREE(v24);
              v31 = v34;
              if ( (v34 & 1) != 0 )
              {
                v47 = v16 | 1;
                v92 = v47;
                if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x70) == 0x40 )
                  v6 |= 0x10u;
                else
                  v6 &= ~0x10u;
                v27 = (v34 >> 12) & 0xFFFFFFFFFFLL;
                if ( (v6 & 0x30) != 0 )
                {
                  v63 = (unsigned int)MiPageToNode((v34 >> 12) & 0xFFFFFFFFFFLL);
                  v64 = 48 * v27 - 0x220000000000LL;
                  if ( v27 <= qword_140E2DBE0 )
                  {
                    if ( (*(_QWORD *)(48 * v27 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
                      && ((*(_DWORD *)(v64 + 32) & 0x40000000) != 0
                       || (unsigned int)MiIsPageOnBadList(48 * v27 - 0x220000000000LL, v63)) )
                    {
                      v47 = v92 | 0x80000000LL;
                    }
                    else
                    {
                      v47 = v92;
                    }
                  }
                  v65 = v47 & 0xFFFFFFFFFFC0FFFFuLL | ((unsigned __int64)(v63 & 0x3F) << 16);
                  if ( (v6 & 0x20) != 0 )
                  {
                    v66 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
                    if ( (v31 & 0x18) == 8 )
                    {
                      v66 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 7 | 0x18;
                    }
                    else if ( (v31 & 0x10) != 0 )
                    {
                      v66 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x17 | 8;
                    }
                    v65 |= 0x400001uLL;
                  }
                  else if ( (unsigned int)MiRotatedToFrameBuffer(v24) )
                  {
                    if ( (v31 & 0x800) != 0 )
                      v66 = 4;
                    else
                      v66 = 1;
                    v68 = *(_DWORD *)(BugCheckParameter2 + 48) & 0xC00;
                    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x380) != 0 && v68 == 3072 )
                    {
                      v66 |= 0x18u;
                    }
                    else if ( v68 == 1024 )
                    {
                      v66 |= 8u;
                    }
                  }
                  else
                  {
                    PfnPriority = MiGetPfnPriority(48 * v27 - 0x220000000000LL);
                    v92 = ((unsigned __int64)PfnPriority << 24) ^ (((unsigned __int64)PfnPriority << 24) ^ v65) & 0xFFFFFFFFF8FFFFFFuLL;
                    v66 = (*(_DWORD *)(v64 + 16) >> 5) & 0x1F;
                    if ( (*(_QWORD *)(v64 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v64 + 8) <= 0 )
                    {
                      v65 = v92;
                    }
                    else
                    {
                      v92 |= 0x8000uLL;
                      if ( (*(_QWORD *)(v64 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
                        LOBYTE(v75) = 7;
                      else
                        v75 = *(_QWORD *)(v64 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                      v65 = v92 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v75 & 7));
                      v66 = MmMakeProtectNotWriteCopy[v66];
                    }
                  }
                  v67 = v66;
                  j = 0x140000000uLL;
                  v16 = v65 & 0xFFFFFFFFFFFF800FuLL | (16LL * (MmProtectToValue[v67] & 0x7FF));
                  v12 = BugCheckParameter2;
                  goto LABEL_50;
                }
LABEL_84:
                v38 = 48 * v27 - 0x220000000000LL;
                v39 = v38;
                if ( (*(_QWORD *)(v38 + 40) & 0x10000000000LL) != 0 )
                {
                  if ( v28 == -1LL )
                    v28 = v27 & 0xFFFFFFFFFFFFFFF0uLL;
                  v39 = 48 * v28 - 0x220000000000LL;
                }
                if ( *(__int64 *)(v39 + 40) < 0 )
                  v40 = 0x8000LL;
                else
                  v40 = 0LL;
                v41 = MiGetPfnPriority(v39);
                v42 = MI_NODE_FROM_PFN(v39);
                v44 = v92 & 0xFFFFFFFFF8C07FFFuLL;
                v92 = v40 | v92 & 0xFFFFFFFFF8C07FFFuLL | ((v42 & 0x3F | ((unsigned __int64)(v41 & 7) << 8)) << 16);
                if ( (*(_DWORD *)(v38 + 32) & 0x40000000) != 0
                  || (unsigned int)MiIsPageOnBadList(48 * v27 - 0x220000000000LL, v43) )
                {
                  v45 = v92 | 0x80000000LL;
                  v92 |= 0x80000000uLL;
                }
                else
                {
                  v45 = v92;
                }
                if ( (v45 & 0x800000) != 0 )
                  goto LABEL_106;
                if ( (*(_QWORD *)(v38 + 40) & 0x10000000000LL) != 0
                  || ((*(_QWORD *)(v38 + 40) >> 60) & 7) == 1 && *(__int64 *)(v38 + 40) < 0 )
                {
                  v45 = v92;
LABEL_106:
                  v12 = BugCheckParameter2;
                  v48 = v45 & 0xFFFFFFFFFFFF800FuLL | (16LL
                                                     * (MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                         BugCheckParameter2,
                                                                                         v31)] & 0x7FF));
                  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x4200000) == 0x4200000 )
                    v48 &= 0xFFFFFFF0FFFFFFFFuLL;
                  j = v48 | 0x400000;
                  v92 = j;
                  if ( *(__int64 *)(v39 + 40) < 0 )
                  {
                    j = 0x3FFFFFFFFFFFFFFFLL;
                    if ( (*(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
                      LOBYTE(v82) = 7;
                    else
                      v82 = *(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                    v16 = v92 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v82 & 7 | 0x20000000));
                    goto LABEL_50;
                  }
                  goto LABEL_109;
                }
                if ( ((*(_QWORD *)(v38 + 40) >> 60) & 7) == 1 )
                {
                  if ( (unsigned int)MiIsPfnEnclave(48 * v27 - 0x220000000000LL) )
                  {
                    ValidAweProtection = (*(_DWORD *)(v38 + 16) >> 5) & 0x1F;
                    v12 = BugCheckParameter2;
                  }
                  else
                  {
                    v12 = BugCheckParameter2;
                    ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v31);
                  }
                  v77 = v92 & 0xFFFFFFFFFFFF800FuLL | (16LL * (MmProtectToValue[ValidAweProtection] & 0x7FF));
                  if ( (*(_DWORD *)(v12 + 48) & 0x4200000) == 0x4200000 )
                    v77 = v92 & 0xFFFFFFF0FFFF800FuLL | (16LL * (MmProtectToValue[ValidAweProtection] & 0x7FF)) & 0xFFFFFFF0FFFFFFFFuLL;
                  v16 = v77 | 0x400000;
                  goto LABEL_50;
                }
                if ( (MiGetWsleContents(v44, v99) & 0xF) == 8 )
                  v92 |= 0x400000uLL;
                if ( *(__int64 *)(v38 + 40) < 0 )
                {
                  if ( (*(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
                    LOBYTE(v57) = 7;
                  else
                    v57 = *(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                  PfnProtection = MiGetPfnProtection(0x3FFFFFFFFFFFFFFFLL, v46, 48 * v27 - 0x220000000000LL);
                  v16 = v92 & 0xFFFFFFFFFFFF8001uLL | (2 * (v57 & 7 | (8LL * (MmProtectToValue[PfnProtection] & 0x7FF))));
                  v92 = v16;
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
                  ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter2, v104, 8, &v109);
                  j = 0x8000000000000000uLL;
                  v60 = *(_QWORD *)(v38 + 8) | 0x8000000000000000uLL;
                  v12 = BugCheckParameter2;
                  if ( ProtoPteAddress == v60 )
                  {
                    v16 = v92 | 0x40000000;
                    goto LABEL_50;
                  }
                  goto LABEL_109;
                }
                v16 = v92 & 0xFFFFFFFFFFFF8001uLL | (16LL
                                                   * (MmProtectToValue[(*(_DWORD *)(v38 + 16) >> 5) & 0x1F] & 0x7FF));
                v12 = BugCheckParameter2;
                v14 = v85;
                v15 = valid;
                MappedSystemVa = v89;
                v7 = v90;
                v13 = v87;
                if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x4200000) == 0x4200000 )
                  v16 &= 0xFFFFFFF0FFFFFFFFuLL;
                goto LABEL_53;
              }
              if ( (v34 & 0x400) != 0 )
                break;
              if ( (v34 & 0x800) == 0 )
              {
                if ( (v6 & 4) != 0 && (unsigned int)MiIsLazyStampedPte(v34) )
                {
                  v16 = 0LL;
                  v12 = BugCheckParameter2;
                  goto LABEL_50;
                }
                if ( (unsigned int)MiGetPagingFileOffset(v31) )
                {
                  v16 = v16 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
                  goto LABEL_49;
                }
                if ( !v31 )
                {
LABEL_126:
                  v12 = BugCheckParameter2;
                  if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x200000) == 0 || (v6 & 8) != 0 )
                    goto LABEL_127;
LABEL_50:
                  MappedSystemVa = v89;
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
                  v49 = MI_READ_PTE_LOCK_FREE(v24);
                  v50 = v49;
                  if ( (v49 & 0x800) == 0 )
                    goto LABEL_269;
                  if ( MiInvalidPteConforms(v49) )
                  {
                    if ( qword_140E2DB80 )
                    {
                      if ( (v50 & 0x10) != 0 )
                        v51 &= ~0x10uLL;
                      else
                        v51 = v50 & ~qword_140E2DB80;
                    }
                    v52 = (v51 >> 12) & 0xFFFFFFFFFFLL;
                    v53 = 48 * v52 - 0x220000000000LL;
                    if ( v52 <= qword_140E2DBE0 && (*(_QWORD *)(48 * v52 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
                      break;
                  }
                }
                v98 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v53 + 24), 0x3FuLL) )
                {
                  do
                  {
                    v61 = v98 + 1;
                    v98 = v61;
                    if ( (v61 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v61);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(__int64 *)(v53 + 24) < 0 );
                }
                if ( MI_READ_PTE_LOCK_FREE(v24) == v50 )
                  break;
                _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              j = (unsigned __int64)qword_140E2FF88;
              if ( (*(_DWORD *)(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v53 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
              {
                v53 = MiLockSpecialPurposeMemoryCachedPage(v53, 0);
                if ( !v53 )
                {
LABEL_269:
                  v53 = 0LL;
                  goto LABEL_122;
                }
              }
              if ( (*(_QWORD *)(v53 + 8) | 0x8000000000000000uLL) != v24
                && (*(_QWORD *)(v53 + 40) & 0x10000000000LL) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x411uLL, v24, v50, *(_QWORD *)(v53 + 8));
              }
LABEL_122:
              if ( v53 )
              {
                MI_READ_PTE_LOCK_FREE(v24);
                MiQueryPfn(0xAAAAAAAAAAAAAAABuLL * ((v53 + 0x220000000000LL) >> 4), &v91);
                _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v16 = v92;
                v12 = BugCheckParameter2;
                goto LABEL_50;
              }
              v25 = v94;
              v14 = v85;
            }
            v12 = BugCheckParameter2;
LABEL_127:
            v54 = 0LL;
            if ( (v6 & 8) != 0 )
              break;
            if ( (*(_DWORD *)(v12 + 48) & 0x200000) == 0 )
            {
              v54 = MiGetProtoPteAddress(v12, v33 >> 12, 8, &v109);
              if ( !v31 || MiIsPrototypePteVadLookup(v31) )
                goto LABEL_130;
            }
            if ( qword_140E2DB80 )
            {
              if ( (v31 & 0x10) != 0 )
                v31 &= ~0x10uLL;
              else
                v31 &= ~qword_140E2DB80;
            }
            v55 = v31 >> 16;
LABEL_131:
            if ( !v55 )
              goto LABEL_50;
            v56 = v16 | 0x8000;
            v92 = v56;
            if ( v55 == v54 )
              v92 = v56 | 0x40000000;
            if ( ((v55 ^ v97) & 0xFFFFFFFFFFFFF000uLL) == 0 )
              goto LABEL_189;
            if ( v93 )
            {
              LOBYTE(j) = 17;
              MiUnlockProtoPoolPage(v93, j, v54);
              v97 = 0LL;
            }
            v93 = MiLockProtoPoolPage(v55, 0LL);
            if ( v93 )
            {
              v97 = v55;
LABEL_189:
              v72 = MiLockLeafPage((unsigned __int64 *)v55, 0);
              j = *(_QWORD *)v55;
              if ( v72 )
              {
                MiQueryPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v72 + 0x220000000000LL) >> 4), &v91);
                _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v16 = v92;
                v12 = BugCheckParameter2;
                goto LABEL_50;
              }
              if ( (j & 0xC00) != 0 || !MiInvalidPteConforms(*(_QWORD *)v55) )
              {
                v12 = BugCheckParameter2;
              }
              else
              {
                v12 = BugCheckParameter2;
                if ( (unsigned int)MiGetPagingFileOffset(v73) )
                {
                  v16 = v92 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
                  goto LABEL_50;
                }
                if ( !j )
                {
                  v16 = 0LL;
                  goto LABEL_50;
                }
              }
LABEL_109:
              v16 = v92;
              goto LABEL_50;
            }
            if ( v85 != 17 )
            {
              if ( valid )
              {
                MiUnlockPageTableInternal(v87, valid);
                valid = 0LL;
              }
              MiUnlockWorkingSetShared(v87, v85);
              v85 = 17;
            }
            MmAccessFault(2uLL, v55, 0, 0LL);
            v25 = v94;
            v14 = v85;
          }
          v54 = qword_140E2DA70;
          if ( v108 == 2147352576 )
            v54 = qword_140E2DA68;
LABEL_130:
          v55 = v54;
          goto LABEL_131;
        }
        v62 = v87;
      }
      if ( v23 )
      {
        LOBYTE(j) = 17;
        MiUnlockProtoPoolPage(v23, j, v15);
        v93 = 0LL;
        v97 = 0LL;
      }
      if ( v19 )
      {
        MiUnlockPageTableInternal(v62, v19);
        valid = 0LL;
      }
      MiUnlockWorkingSetShared(v62, v85);
      v14 = 17;
      v85 = 17;
      goto LABEL_30;
    }
    v35 = v96;
    if ( v96 == -1073741558 )
      goto LABEL_59;
LABEL_51:
    v15 = valid;
LABEL_52:
    v14 = v85;
    v7 = v90;
    v13 = v87;
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
    v89 = MappedSystemVa;
    v100 = MappedSystemVa;
    v90 = --v7;
  }
  while ( v7 );
  v35 = 0;
  v19 = valid;
LABEL_59:
  if ( v93 )
  {
    LOBYTE(j) = 17;
    MiUnlockProtoPoolPage(v93, j, v15);
  }
  if ( v85 != 17 )
  {
    if ( v19 )
      MiUnlockPageTableInternal(v87, v19);
    MiUnlockWorkingSetShared(v87, v85);
  }
  if ( BugCheckParameter2 )
    MiUnlockAndDereferenceVadShared(BugCheckParameter2, j, v15, v10);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess(v110, 0LL);
  v36 = MemoryDescriptorList;
  if ( MemoryDescriptorList )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(v36, 0);
  }
  else
  {
    memmove(v105, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v35;
}
