/*
 * XREFs of MiInitializeDynamicPfns @ 0x14066EA90
 * Callers:
 *     MiMapNewPfns @ 0x1407E9C7C (MiMapNewPfns.c)
 *     MiUnmapPfns @ 0x1407EA6E0 (MiUnmapPfns.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiInitializeDpcGang @ 0x14026F77C (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x140270670 (MiStartDpcGang.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiReferenceControlAreaPfn @ 0x140347F04 (MiReferenceControlAreaPfn.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MiCopyPfnEntryRaw @ 0x1404386A0 (MiCopyPfnEntryRaw.c)
 *     MiPageCombiningActive @ 0x14044E5A8 (MiPageCombiningActive.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x14044F1DC (MiInitializeAllResidentPageBasePfns.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x14066D6E0 (MiCreatePfnTemplate.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14068CA34 (MiUpdatePartitionChildPageCounts.c)
 *     MiUpdatePhysicalPages @ 0x14068CB8C (MiUpdatePhysicalPages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiInitializeDynamicPfns(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // rsi
  char v9; // bl
  unsigned __int16 *v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  int v20; // eax
  ULONG *v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned __int8 v25; // r15
  int v26; // r14d
  __int64 v27; // r12
  int v28; // eax
  __int64 v29; // rcx
  __int64 *v30; // rdx
  int v31; // edx
  unsigned __int8 v32[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v33[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+58h] [rbp-A8h]
  ULONG *v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+68h] [rbp-98h] BYREF
  __int128 v38; // [rsp+78h] [rbp-88h]
  __int128 v39; // [rsp+88h] [rbp-78h]
  __int128 v40; // [rsp+98h] [rbp-68h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-58h]
  __int128 v42; // [rsp+B8h] [rbp-48h]
  int v43[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v44; // [rsp+D8h] [rbp-28h]
  __int128 v45; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a[22]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v47; // [rsp+1B4h] [rbp+B4h]
  int v48; // [rsp+1B8h] [rbp+B8h]

  *(_QWORD *)v33 = a3;
  v40 = 0LL;
  v5 = a4;
  v6 = a2;
  v41 = 0LL;
  v7 = BugCheckParameter2;
  v42 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v8 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v9 = 5;
  if ( (a4 & 0x8000A) == 8 )
  {
    MiUpdatePhysicalPages(&MiSystemPartition, a2, 1LL);
    v9 = 6;
  }
  if ( (v5 & 1) != 0 )
  {
    v10 = *(unsigned __int16 **)v33;
    *(_OWORD *)v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    if ( (v5 & 0x3000) != 0 )
      MiInitializeAllResidentPageBasePfns(*(unsigned __int16 **)v33, v7, v6, (v5 >> 12) & 1, 1, 1, 0);
    if ( (v5 & 2) != 0 )
    {
      v11 = *(__int64 **)a5;
      BugCheckParameter1 = *(_QWORD *)(a5 + 8);
      v12 = *v11;
      v35 = v12;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
        v12 = v35;
      }
      MiReferenceControlAreaPfn(v12, *(_QWORD *)a5, v6);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v5 |= *(_DWORD *)(a5 + 16);
      v10 = *(unsigned __int16 **)v33;
    }
    else
    {
      if ( *(ULONG **)v33 != &MiSystemPartition )
        MiUpdatePartitionChildPageCounts(*(_QWORD *)v33, &MiSystemPartition, v7, v6);
      BugCheckParameter1 = 0LL;
    }
    v35 = 0LL;
    v32[0] = 17;
    if ( a5 )
      MiCreatePfnTemplate((__int64)v43, v5, *v10);
    for ( ; v6; v6 -= v14 )
    {
      v14 = MiRestrictRangeToNode(v7, v6);
      if ( a5 )
      {
        v15 = (unsigned __int64)(4096 - (unsigned int)(BugCheckParameter1 & 0xFFF)) >> 3;
        if ( v14 <= v15 )
          v15 = v14;
        v14 = v15;
        v35 = MiLockProtoPoolPageForce(BugCheckParameter1, v32);
        MiInitializeNewPfns(
          (__m128i *)(48 * v7 - 0x220000000000LL),
          v14,
          (const __m128i *)v43,
          *(__int64 *)v33,
          v5,
          *(_QWORD *)a5,
          (ULONG_PTR *)BugCheckParameter1);
      }
      else
      {
        memset_0(BugCheckParameter2a, 0, 0x168uLL);
        v19 = MiPageToNode(v7);
        MiInitializeDpcGang((__int64 *)BugCheckParameter2a, v19, 1u);
        BugCheckParameter2a[21] = *(_QWORD *)v33;
        v20 = v48 | 4;
        v47 = v5;
        BugCheckParameter2a[0] = v7;
        BugCheckParameter2a[1] = v14;
        v48 |= 4u;
        if ( (v5 & 0x40000) == 0 )
          v48 = v20 | 2;
        MiStartDpcGang((ULONG_PTR)BugCheckParameter2a);
      }
      if ( BugCheckParameter1 )
      {
        LOBYTE(v16) = v32[0];
        MiUnlockProtoPoolPage(v35, v16, v17, v18);
        BugCheckParameter1 += 8 * v14;
      }
      v7 += v14;
    }
    return;
  }
  LODWORD(BugCheckParameter1) = v5 & 2;
  if ( (v5 & 2) == 0 )
    MiUpdateLargePageBitMap((unsigned __int64)&MiSystemPartition, v7, v6, 0);
  v21 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  *((_QWORD *)&v41 + 1) = 0x8000000000000000uLL;
  *((_QWORD *)&v38 + 1) = 0x8000000000000000uLL;
  v22 = *(unsigned __int16 *)v21;
  v33[0] = v39;
  v23 = v22 << 43;
  v36 = v21;
  BYTE2(v33[0]) = v9 | BYTE2(v39) & 0xF8;
  LODWORD(v39) = v33[0];
  *((_QWORD *)&v39 + 1) = v23 ^ (*((_QWORD *)&v39 + 1) ^ v23) & 0xFFE007FFFFFFFFFFuLL;
  if ( v21 != &MiSystemPartition )
    MiUpdatePartitionChildPageCounts(&MiSystemPartition, v21, v7, v6);
  v24 = 48 * v6 + v8;
  v35 = 0LL;
  v25 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v35 )
  {
    LOBYTE(v23) = 2;
    KiRaiseIrqlProcessIrqlFlags(v25, v23);
  }
  v32[0] = v25;
  if ( v6 )
  {
    v26 = v5 & 0x20;
    v27 = v24 + 24;
    while ( 1 )
    {
      v24 -= 48LL;
      v33[0] = 0;
      v27 -= 48LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((unsigned int *)v33);
        while ( *(__int64 *)v27 < 0 );
      }
      if ( (*(_DWORD *)(v27 + 8) & 0x40000000) != 0 )
        MiSetPfnRemovalRequested(v24, 0LL, 1LL);
      LOBYTE(v28) = MiPageCombiningActive((__int64)v36);
      v29 = v24;
      if ( v28 )
        break;
      if ( v26 )
        goto LABEL_48;
      v30 = (__int64 *)&v37;
LABEL_49:
      MiCopyPfnEntryRaw(v29, v30);
LABEL_50:
      _InterlockedAnd64((volatile signed __int64 *)v27, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (++v35 & 0x3F) != 0 || !KeShouldYieldProcessor() )
      {
        v25 = v32[0];
      }
      else
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32[0]);
        __writecr8(v32[0]);
        v25 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v31) = 2;
          KiRaiseIrqlProcessIrqlFlags(v25, v31);
        }
        v32[0] = v25;
      }
      if ( v35 >= v6 )
        goto LABEL_59;
    }
    MiCopyPfnEntryRaw(v24, (__int64 *)&v37);
    MiAbortCombineScan(v24);
    if ( !v26 )
      goto LABEL_50;
    v29 = v24;
LABEL_48:
    v30 = (__int64 *)&v40;
    goto LABEL_49;
  }
LABEL_59:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
  __writecr8(v25);
}
