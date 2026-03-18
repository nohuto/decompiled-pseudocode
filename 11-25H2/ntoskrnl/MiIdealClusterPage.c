/*
 * XREFs of MiIdealClusterPage @ 0x1404D210C
 * Callers:
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiConvertLargeActivePageToChain @ 0x1402220D4 (MiConvertLargeActivePageToChain.c)
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiIsFaultPteIntact @ 0x140246470 (MiIsFaultPteIntact.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiSwapHardFaultPage @ 0x1402D11D4 (MiSwapHardFaultPage.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14033BC20 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14033DFA0 (MiRelockProtoPoolPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiRelockFaultState @ 0x14043A310 (MiRelockFaultState.c)
 *     MiCopyPfnEntryRaw @ 0x140441F40 (MiCopyPfnEntryRaw.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

volatile signed __int32 *__fastcall MiIdealClusterPage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        volatile signed __int32 *a5,
        __int64 *Buf2,
        _BYTE *a7)
{
  _BYTE *v7; // r11
  char v8; // r15
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // r13
  __int64 v13; // rcx
  unsigned int v15; // r14d
  unsigned __int64 v16; // rdx
  unsigned int v17; // r14d
  unsigned __int64 v18; // rbx
  bool v19; // zf
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r8
  ULONG *v27; // r10
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  unsigned int v30; // ecx
  unsigned __int64 v31; // r8
  ULONG_PTR v32; // rsi
  unsigned __int64 v33; // rax
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v35; // r12
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  unsigned int v38; // ebx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  __int64 v41; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v43; // eax
  __int64 v44; // r15
  __int64 LargePage; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  int ContiguousPages; // r14d
  __int64 v49; // rdx
  unsigned __int64 v50; // r15
  ULONG_PTR v51; // rcx
  __int64 v52; // r13
  unsigned int v53; // r14d
  bool v54; // bl
  __int64 v55; // rdx
  __int64 v56; // r8
  unsigned __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned __int64 v60; // r9
  unsigned __int64 *v61; // rbx
  unsigned __int8 v62[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  ULONG *v65; // [rsp+88h] [rbp-78h]
  ULONG_PTR v66; // [rsp+90h] [rbp-70h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v69; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 *v70; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v71; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v72; // [rsp+C0h] [rbp-40h]
  volatile signed __int32 *v73; // [rsp+C8h] [rbp-38h]
  __int64 *v74; // [rsp+D0h] [rbp-30h]
  unsigned __int64 *v75; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v76; // [rsp+E0h] [rbp-20h]
  __int128 v77; // [rsp+E8h] [rbp-18h] BYREF
  __int128 Buf1; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v79; // [rsp+108h] [rbp+8h]
  __int128 v80; // [rsp+118h] [rbp+18h]
  _OWORD v81[3]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v82[16]; // [rsp+160h] [rbp+60h] BYREF

  v7 = a7;
  v8 = 0;
  v9 = a5;
  v10 = (volatile signed __int32 *)Buf2;
  v67 = a2;
  v64 = a1;
  v13 = *(_QWORD *)(a1 + 56);
  v75 = (unsigned __int64 *)a3;
  v69 = a4;
  v15 = *(_DWORD *)(a1 + 80);
  v16 = *(_QWORD *)a1;
  v17 = v15 >> 8;
  *a7 = 0;
  v73 = a5;
  v74 = Buf2;
  v71 = a7;
  v18 = ((v16 & 0xFFFFFFFFFFFFF000uLL) - (v16 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v19 = (*(_DWORD *)(a2 + 48) & 0x200000) == 0;
  v62[0] = 0;
  v70 = 0LL;
  v66 = 0LL;
  memset(v81, 0, sizeof(v81));
  v68 = v13;
  v63 = v16 & 0xFFFFFFFFFFFF0000uLL;
  v72 = v18;
  Buf1 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v77 = 0LL;
  if ( !v19 )
  {
    v25 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v25 >= 0xFFFFF68000000000uLL && v25 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v24 = *(unsigned __int16 *)(v13 + 174);
      v23 = 8 * v18;
      goto LABEL_16;
    }
    return v9;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, v16 >> 12, 12, &v70);
  if ( !ProtoPteAddress || !v70 || ProtoPteAddress != a3 )
    return v9;
  v21 = v70[1];
  v22 = v21 + 8 * (*((unsigned int *)v70 + 11) - (unsigned __int64)(*((_DWORD *)v70 + 13) & 0x3FFFFFFF));
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v21 )
    v21 = a3 & 0xFFFFFFFFFFFFF000uLL;
  if ( v22 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
    v22 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v21 >= v22 )
    return v9;
  v23 = 8 * v18;
  if ( a3 - 8 * v18 < v21 || a3 - v23 + 128 > v22 )
    return v9;
  v7 = v71;
  v24 = *(_WORD *)(*v70 + 60) & 0x3FF;
LABEL_16:
  v26 = 16LL;
  v27 = (ULONG *)*((_QWORD *)qword_140E2FD48 + v24);
  v65 = v27;
  v28 = a3 - v23 - (_QWORD)v82;
  v29 = v82;
  do
  {
    *v29 = *(_QWORD *)((char *)v29 + v28);
    ++v29;
    --v26;
  }
  while ( v26 );
  v30 = 0;
  v31 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5 + 0x88000000000LL) >> 4);
  v32 = -1LL;
  v76 = v31;
  while ( 1 )
  {
    if ( v30 >= 0x10 )
    {
      v35 = 0LL;
      if ( v30 != 16 )
        goto LABEL_28;
      if ( (v31 & 0xF) == v18 )
      {
LABEL_31:
        *v7 = 1;
        return v9;
      }
      if ( (int)MiAcquireNonPagedResources(v27, 1uLL, 0LL, 0LL) < 0 )
        return v9;
      v8 = 1;
      MiInitializePageColorBase(v68, 3, (*(_DWORD *)(v67 + 48) >> 12) & 0x7F, (__int64)&v77);
      v38 = (DWORD2(v77) >> 9) & 0x3F;
      goto LABEL_33;
    }
    v33 = v82[v30];
    if ( (v33 & 1) != 0 )
      break;
    ++v30;
  }
  v32 = (v33 >> 12) & 0xFFFFFFFFFFLL;
  if ( (unsigned __int16)v33 >> 12 != (unsigned __int64)v30 )
    return v9;
LABEL_28:
  v32 += v18 - v30;
  if ( v32 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v32 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return v9;
  v35 = (volatile signed __int32 *)(48 * v32 - 0x220000000000LL);
  if ( v35 == a5 )
    goto LABEL_31;
  v38 = MiPageToNode(v32);
LABEL_33:
  *(_BYTE *)(57216LL * v38 + *((_QWORD *)v65 + 2) + 5187) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0, v36, v37) )
  {
    if ( v8 == 1 )
      MiReleaseNonPagedResources((__int64)v65, 1uLL);
    return v9;
  }
  MiCopyPfnEntryRaw((__int64)v81, (__int64 *)a5);
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0);
    MiCopyPfnEntryRaw((__int64)&Buf1, Buf2);
    MiUnlockProtoPoolPage((ULONG_PTR)Buf2, 0x11u, v39, v40);
  }
  v67 = MiReleaseFaultState(v64 + 56, 1u, v62);
  if ( v8 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v41) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v41);
    }
    v62[0] = CurrentIrql;
    v43 = MiProtectionToCacheAttribute((v69 >> 5) & 0x1F);
    v44 = (__int64)v65;
    LargePage = MiGetLargePage((__int64)v65, v63, 2u, v38, v43, 0x12u, *(_QWORD *)(v64 + 96), 0LL);
    v47 = LargePage;
    if ( LargePage )
    {
      MiConvertLargeActivePageToChain(LargePage);
      v50 = v72;
      v51 = 0xAAAAAAAAAAAAAAABuLL * ((v47 + 0x220000000000LL) >> 4);
      v52 = 16LL;
      v66 = v51;
      do
      {
        if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v51, 1uLL);
          v51 = v66;
        }
        if ( (v51 & 0xF) == v50 )
        {
          v32 = v51;
          v35 = (volatile signed __int32 *)v47;
        }
        else
        {
          MiReleaseFreshPageAtDpc(v47);
          v51 = v66;
        }
        ++v51;
        v47 += 48LL;
        v66 = v51;
        --v52;
      }
      while ( v52 );
      v10 = (volatile signed __int32 *)v74;
      v9 = v73;
      if ( KiIrqlFlags )
      {
        LOBYTE(v49) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
      }
      __writecr8(CurrentIrql);
      v44 = (__int64)v65;
      ContiguousPages = 0;
    }
    else
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v46) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v46);
      }
      __writecr8(CurrentIrql);
      MiReleaseNonPagedResources(v44, 1uLL);
      ContiguousPages = -1073741801;
    }
  }
  else
  {
    v35 = (volatile signed __int32 *)(48 * v32 - 0x220000000000LL);
    v53 = (((v17 & 1) == 0) + 8256) << 17;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v53 |= 8u;
    v44 = (__int64)v65;
    ContiguousPages = MiFindContiguousPagesEx(
                        (__int64)v65,
                        v32,
                        v32,
                        0LL,
                        0,
                        1LL,
                        (unsigned __int8)BYTE2(*((_DWORD *)a5 + 8)) >> 6,
                        v38,
                        255,
                        v53,
                        0,
                        0LL,
                        0LL,
                        &v66);
  }
  v54 = 0;
  MiRelockFaultState(v64 + 56, v67);
  if ( v10 )
  {
    *((_QWORD *)&v79 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)v10, 0LL);
    LODWORD(v63) = 0;
    while ( _interlockedbittestandset64(v10 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v63);
      while ( *((__int64 *)v10 + 3) < 0 );
    }
    v54 = memcmp(&Buf1, (const void *)v10, 0x30uLL) != 0;
    _InterlockedAnd64((volatile signed __int64 *)v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCountAtDpc((ULONG_PTR)v10, v58, v59, v60);
  }
  LODWORD(v68) = 0;
  while ( _interlockedbittestandset64(v9 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v68);
    while ( *((__int64 *)v9 + 3) < 0 );
  }
  if ( v54
    || memcmp(v81, (const void *)v9, 0x30uLL)
    || (*((_QWORD *)v9 + 3) & 0x4000000000000000LL) != 0
    || (v61 = v75, !(unsigned int)MiIsFaultPteIntact(v64, *(_QWORD *)v64, (__int64)v75, &v69)) )
  {
    if ( ContiguousPages >= 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v9 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPageAtDpc((__int64)v35);
      MiReleaseNonPagedResources(v44, 1uLL);
      LODWORD(v64) = 0;
      while ( _interlockedbittestandset64(v9 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v64);
        while ( *((__int64 *)v9 + 3) < 0 );
      }
    }
    MiRemoveLockedPageChargeAndDecRef((ULONG_PTR)v9, v55, v56, v57);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v9);
      return v9;
    }
    MiCopyPage(v32, v76, (v69 & 0x40) != 0 ? 20 : 12);
    MiSwapHardFaultPage(v61, (__int64)v9, (__int64)v35);
    WORD1(v63) = HIWORD(*((_DWORD *)v35 + 8));
    LOWORD(v63) = 0;
    *((_DWORD *)v35 + 8) = v63;
    MiReturnResident(v44, 1uLL);
    result = v35;
    *v71 = 1;
  }
  return result;
}
