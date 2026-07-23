/*
 * XREFs of MiIdealClusterPage @ 0x1404CB218
 * Callers:
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiIsFaultPteIntact @ 0x14030CD60 (MiIsFaultPteIntact.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x140345A40 (MiRelockProtoPoolPage.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140347E90 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiSwapHardFaultPage @ 0x14038DB8C (MiSwapHardFaultPage.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiRelockFaultState @ 0x140427570 (MiRelockFaultState.c)
 *     MiCopyPfnEntryRaw @ 0x1404386A0 (MiCopyPfnEntryRaw.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
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
  unsigned int v36; // ebx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned __int8 CurrentIrql; // r14
  int v44; // eax
  __int64 v45; // r15
  __int64 LargePage; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  int ContiguousPages; // r14d
  __int64 v52; // rdx
  unsigned __int64 v53; // r15
  ULONG_PTR v54; // rcx
  __int64 v55; // r13
  unsigned int v56; // r14d
  bool v57; // bl
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rbx
  unsigned __int8 v65[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp-88h] BYREF
  __int64 v67; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp-78h]
  ULONG_PTR v69; // [rsp+90h] [rbp-70h] BYREF
  __int64 v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v72; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE *v74; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v75; // [rsp+C0h] [rbp-40h]
  volatile signed __int32 *v76; // [rsp+C8h] [rbp-38h]
  __int64 *v77; // [rsp+D0h] [rbp-30h]
  __int64 *v78; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v79; // [rsp+E0h] [rbp-20h]
  __int128 v80; // [rsp+E8h] [rbp-18h] BYREF
  __int128 Buf1; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v82; // [rsp+108h] [rbp+8h]
  __int128 v83; // [rsp+118h] [rbp+18h]
  _OWORD v84[3]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v85[16]; // [rsp+160h] [rbp+60h] BYREF

  v7 = a7;
  v8 = 0;
  v9 = a5;
  v10 = (volatile signed __int32 *)Buf2;
  v70 = a2;
  v67 = a1;
  v13 = *(_QWORD *)(a1 + 56);
  v78 = (__int64 *)a3;
  v72 = a4;
  v15 = *(_DWORD *)(a1 + 80);
  v16 = *(_QWORD *)a1;
  v17 = v15 >> 8;
  *a7 = 0;
  v76 = a5;
  v77 = Buf2;
  v74 = a7;
  v18 = ((v16 & 0xFFFFFFFFFFFFF000uLL) - (v16 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v19 = (*(_DWORD *)(a2 + 48) & 0x200000) == 0;
  v65[0] = 0;
  v73 = 0LL;
  v69 = 0LL;
  memset(v84, 0, sizeof(v84));
  v71 = v13;
  v66 = v16 & 0xFFFFFFFFFFFF0000uLL;
  v75 = v18;
  Buf1 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v80 = 0LL;
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
  ProtoPteAddress = MiGetProtoPteAddress(a2, v16 >> 12, 0xCu, &v73);
  if ( !ProtoPteAddress || !v73 || ProtoPteAddress != a3 )
    return v9;
  v21 = *(_QWORD *)(v73 + 8);
  v22 = v21 + 8 * (*(unsigned int *)(v73 + 44) - (unsigned __int64)(*(_DWORD *)(v73 + 52) & 0x3FFFFFFF));
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v21 )
    v21 = a3 & 0xFFFFFFFFFFFFF000uLL;
  if ( v22 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
    v22 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v21 >= v22 )
    return v9;
  v23 = 8 * v18;
  if ( a3 - 8 * v18 < v21 || a3 - v23 + 128 > v22 )
    return v9;
  v7 = v74;
  v24 = *(_WORD *)(*(_QWORD *)v73 + 60LL) & 0x3FF;
LABEL_16:
  v26 = 16LL;
  v27 = (ULONG *)*((_QWORD *)qword_140E300C8 + v24);
  v68 = (unsigned __int64)v27;
  v28 = a3 - v23 - (_QWORD)v85;
  v29 = v85;
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
  v79 = v31;
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
      MiInitializePageColorBase(v71, 3, (*(_DWORD *)(v70 + 48) >> 12) & 0x7F, (__int64)&v80);
      v36 = (DWORD2(v80) >> 9) & 0x3F;
      goto LABEL_33;
    }
    v33 = v85[v30];
    if ( (v33 & 1) != 0 )
      break;
    ++v30;
  }
  v32 = (v33 >> 12) & 0xFFFFFFFFFFLL;
  if ( (unsigned __int16)v33 >> 12 != (unsigned __int64)v30 )
    return v9;
LABEL_28:
  v32 += v18 - v30;
  if ( v32 > qword_140E2DD20 || ((*(_QWORD *)(48 * v32 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return v9;
  v35 = (volatile signed __int32 *)(48 * v32 - 0x220000000000LL);
  if ( v35 == a5 )
    goto LABEL_31;
  v36 = MiPageToNode(v32);
LABEL_33:
  *(_BYTE *)(57216LL * v36 + *(_QWORD *)(v68 + 16) + 5187) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
  {
    if ( v8 == 1 )
      MiReleaseNonPagedResources(v68, 1uLL);
    return v9;
  }
  MiCopyPfnEntryRaw((__int64)v84, (__int64 *)a5);
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0);
    MiCopyPfnEntryRaw((__int64)&Buf1, Buf2);
    LOBYTE(v37) = 17;
    MiUnlockProtoPoolPage((__int64)Buf2, v37, v38, v39);
  }
  v40 = MiReleaseFaultState((__int64 *)(v67 + 56), 1u, v65);
  v42 = 1LL;
  v70 = v40;
  if ( v8 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v42) = 2;
      LOBYTE(v41) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v41, v42);
    }
    v65[0] = CurrentIrql;
    v44 = MiProtectionToCacheAttribute((v72 >> 5) & 0x1F);
    v45 = v68;
    LargePage = MiGetLargePage(v68, v66, 2u, v36, v44, 0x12u, *(_QWORD *)(v67 + 96), 0LL);
    v48 = LargePage;
    if ( LargePage )
    {
      MiConvertLargeActivePageToChain(LargePage);
      v53 = v75;
      v54 = 0xAAAAAAAAAAAAAAABuLL * ((v48 + 0x220000000000LL) >> 4);
      v55 = 16LL;
      v69 = v54;
      do
      {
        if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v54, 1uLL);
          v54 = v69;
        }
        if ( (v54 & 0xF) == v53 )
        {
          v32 = v54;
          v35 = (volatile signed __int32 *)v48;
        }
        else
        {
          MiReleaseFreshPageAtDpc(v48, v52, v49, v50);
          v54 = v69;
        }
        ++v54;
        v48 += 48LL;
        v69 = v54;
        --v55;
      }
      while ( v55 );
      v10 = (volatile signed __int32 *)v77;
      v9 = v76;
      if ( KiIrqlFlags )
      {
        LOBYTE(v52) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v52);
      }
      __writecr8(CurrentIrql);
      v45 = v68;
      ContiguousPages = 0;
    }
    else
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v47) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v47);
      }
      __writecr8(CurrentIrql);
      MiReleaseNonPagedResources(v45, 1uLL);
      ContiguousPages = -1073741801;
    }
  }
  else
  {
    v35 = (volatile signed __int32 *)(48 * v32 - 0x220000000000LL);
    v56 = (((v17 & 1) == 0) + 8256) << 17;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v56 |= 8u;
    v45 = v68;
    ContiguousPages = MiFindContiguousPagesEx(
                        v68,
                        (_BYTE *)v32,
                        v32,
                        0LL,
                        0,
                        1LL,
                        (unsigned __int8)BYTE2(*((_DWORD *)a5 + 8)) >> 6,
                        v36,
                        255,
                        v56,
                        0,
                        0LL,
                        0LL,
                        &v69);
  }
  v57 = 0;
  MiRelockFaultState(v67 + 56, v70, v49, v50);
  if ( v10 )
  {
    *((_QWORD *)&v82 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)v10, 0LL, v59, v60);
    LODWORD(v66) = 0;
    while ( _interlockedbittestandset64(v10 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((unsigned int *)&v66);
      while ( *((__int64 *)v10 + 3) < 0 );
    }
    v57 = memcmp(&Buf1, (const void *)v10, 0x30uLL) != 0;
    _InterlockedAnd64((volatile signed __int64 *)v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCountAtDpc((__int64)v10, v61, v62, v63);
  }
  LODWORD(v71) = 0;
  while ( _interlockedbittestandset64(v9 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx((unsigned int *)&v71);
    while ( *((__int64 *)v9 + 3) < 0 );
  }
  if ( v57
    || memcmp(v84, (const void *)v9, 0x30uLL)
    || (*((_QWORD *)v9 + 3) & 0x4000000000000000LL) != 0
    || (v64 = v78, !(unsigned int)MiIsFaultPteIntact(v67, *(_QWORD *)v67, (__int64)v78, &v72)) )
  {
    if ( ContiguousPages >= 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v9 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPageAtDpc((__int64)v35, v58, v59, v60);
      MiReleaseNonPagedResources(v45, 1uLL);
      LODWORD(v67) = 0;
      while ( _interlockedbittestandset64(v9 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((unsigned int *)&v67);
        while ( *((__int64 *)v9 + 3) < 0 );
      }
    }
    MiRemoveLockedPageChargeAndDecRef((__int64)v9, v58, v59, v60);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v9, v58, v59);
      return v9;
    }
    MiCopyPage(v32, v79, (v72 & 0x40) != 0 ? 20 : 12);
    MiSwapHardFaultPage(v64, (__int64)v9, (__int64)v35);
    WORD1(v66) = HIWORD(*((_DWORD *)v35 + 8));
    LOWORD(v66) = 0;
    *((_DWORD *)v35 + 8) = v66;
    MiReturnResident(v45, 1uLL);
    result = v35;
    *v74 = 1;
  }
  return result;
}
