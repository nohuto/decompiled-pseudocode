/*
 * XREFs of MiInitializeDynamicPfns @ 0x14066D8BC
 * Callers:
 *     MiMapNewPfns @ 0x1407E96AC (MiMapNewPfns.c)
 *     MiUnmapPfns @ 0x1407EA110 (MiUnmapPfns.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiAbortCombineScan @ 0x140265104 (MiAbortCombineScan.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiReferenceControlAreaPfn @ 0x1402E68C4 (MiReferenceControlAreaPfn.c)
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     MiInitializeDpcGang @ 0x1403A80A0 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1403A875C (MiStartDpcGang.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiRestrictRangeToNode @ 0x140401E10 (MiRestrictRangeToNode.c)
 *     MiCopyPfnEntryRaw @ 0x140441C20 (MiCopyPfnEntryRaw.c)
 *     MiPageCombiningActive @ 0x140459878 (MiPageCombiningActive.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140459D90 (MiInitializeAllResidentPageBasePfns.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiInitializeNewPfns @ 0x14066BBD4 (MiInitializeNewPfns.c)
 *     MiCreatePfnTemplate @ 0x14066C510 (MiCreatePfnTemplate.c)
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14068B904 (MiUpdatePartitionChildPageCounts.c)
 *     MiUpdatePhysicalPages @ 0x14068BA5C (MiUpdatePhysicalPages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall MiInitializeDynamicPfns(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v5; // r14d
  ULONG_PTR v6; // rdi
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
  unsigned int v18; // eax
  int v19; // eax
  ULONG *v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned __int8 v24; // r15
  int v25; // r14d
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // rcx
  __int64 *v29; // rdx
  int v30; // edx
  unsigned __int8 v31[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v32[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v33; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v34; // [rsp+58h] [rbp-A8h]
  ULONG *v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+68h] [rbp-98h] BYREF
  __int128 v37; // [rsp+78h] [rbp-88h]
  __int128 v38; // [rsp+88h] [rbp-78h]
  __int128 v39; // [rsp+98h] [rbp-68h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-58h]
  __int128 v41; // [rsp+B8h] [rbp-48h]
  int v42[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-28h]
  __int128 v44; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a[22]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v46; // [rsp+1B4h] [rbp+B4h]
  int v47; // [rsp+1B8h] [rbp+B8h]

  *(_QWORD *)v32 = a3;
  v39 = 0LL;
  v5 = a4;
  v6 = a2;
  v40 = 0LL;
  v7 = BugCheckParameter2;
  v41 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v8 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v9 = 5;
  if ( (a4 & 0x8000A) == 8 )
  {
    MiUpdatePhysicalPages(&MiSystemPartition, a2, 1LL);
    v9 = 6;
  }
  if ( (v5 & 1) != 0 )
  {
    v10 = *(unsigned __int16 **)v32;
    *(_OWORD *)v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    if ( (v5 & 0x3000) != 0 )
      MiInitializeAllResidentPageBasePfns(*(unsigned __int16 **)v32, v7, v6, (v5 >> 12) & 1, 1, 1, 0);
    if ( (v5 & 2) != 0 )
    {
      v11 = *(__int64 **)a5;
      v33 = *(_QWORD *)(a5 + 8);
      v12 = *v11;
      v34 = v12;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
        v12 = v34;
      }
      MiReferenceControlAreaPfn(v12, *(_QWORD *)a5, v6);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v5 |= *(_DWORD *)(a5 + 16);
      v10 = *(unsigned __int16 **)v32;
    }
    else
    {
      if ( *(ULONG **)v32 != &MiSystemPartition )
        MiUpdatePartitionChildPageCounts(*(_QWORD *)v32, &MiSystemPartition, v7, v6);
      v33 = 0LL;
    }
    v34 = 0LL;
    v31[0] = 17;
    if ( a5 )
      MiCreatePfnTemplate((__int64)v42, v5, *v10);
    for ( ; v6; v6 -= v14 )
    {
      v14 = MiRestrictRangeToNode(v7, v6);
      if ( a5 )
      {
        v15 = (unsigned __int64)(4096 - (unsigned int)(v33 & 0xFFF)) >> 3;
        if ( v14 <= v15 )
          v15 = v14;
        v14 = v15;
        v34 = MiLockProtoPoolPageForce(v33, v31);
        MiInitializeNewPfns(
          (__m128i *)(48 * v7 - 0x220000000000LL),
          v14,
          (const __m128i *)v42,
          *(__int64 *)v32,
          v5,
          *(_QWORD *)a5,
          (ULONG_PTR *)v33);
      }
      else
      {
        memset_0(BugCheckParameter2a, 0, 0x168uLL);
        v18 = MiPageToNode(v7);
        MiInitializeDpcGang((__int64 *)BugCheckParameter2a, v18, 1u);
        BugCheckParameter2a[21] = *(_QWORD *)v32;
        v19 = v47 | 4;
        v46 = v5;
        BugCheckParameter2a[0] = v7;
        BugCheckParameter2a[1] = v14;
        v47 |= 4u;
        if ( (v5 & 0x40000) == 0 )
          v47 = v19 | 2;
        MiStartDpcGang((__int64 *)BugCheckParameter2a);
      }
      if ( v33 )
      {
        LOBYTE(v16) = v31[0];
        MiUnlockProtoPoolPage(v34, v16, v17);
        v33 += 8 * v14;
      }
      v7 += v14;
    }
    return;
  }
  LODWORD(v33) = v5 & 2;
  if ( (v5 & 2) == 0 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v6, 0);
  v20 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  *((_QWORD *)&v40 + 1) = 0x8000000000000000uLL;
  *((_QWORD *)&v37 + 1) = 0x8000000000000000uLL;
  v21 = *(unsigned __int16 *)v20;
  v32[0] = v38;
  v22 = v21 << 43;
  v35 = v20;
  BYTE2(v32[0]) = v9 | BYTE2(v38) & 0xF8;
  LODWORD(v38) = v32[0];
  *((_QWORD *)&v38 + 1) = v22 ^ (*((_QWORD *)&v38 + 1) ^ v22) & 0xFFE007FFFFFFFFFFuLL;
  if ( v20 != &MiSystemPartition )
    MiUpdatePartitionChildPageCounts(&MiSystemPartition, v20, v7, v6);
  v23 = 48 * v6 + v8;
  v34 = 0LL;
  v24 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v34 )
  {
    LOBYTE(v22) = 2;
    KiRaiseIrqlProcessIrqlFlags(v24, v22);
  }
  v31[0] = v24;
  if ( v6 )
  {
    v25 = v5 & 0x20;
    v26 = v23 + 24;
    while ( 1 )
    {
      v23 -= 48LL;
      v32[0] = 0;
      v26 -= 48LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((unsigned int *)v32);
        while ( *(__int64 *)v26 < 0 );
      }
      if ( (*(_DWORD *)(v26 + 8) & 0x40000000) != 0 )
        MiSetPfnRemovalRequested(v23, 0LL, 1LL);
      LOBYTE(v27) = MiPageCombiningActive((__int64)v35);
      v28 = v23;
      if ( v27 )
        break;
      if ( v25 )
        goto LABEL_48;
      v29 = (__int64 *)&v36;
LABEL_49:
      MiCopyPfnEntryRaw(v28, v29);
LABEL_50:
      _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (++v34 & 0x3F) != 0 || !KeShouldYieldProcessor() )
      {
        v24 = v31[0];
      }
      else
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31[0]);
        __writecr8(v31[0]);
        v24 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v30) = 2;
          KiRaiseIrqlProcessIrqlFlags(v24, v30);
        }
        v31[0] = v24;
      }
      if ( v34 >= v6 )
        goto LABEL_59;
    }
    MiCopyPfnEntryRaw(v23, (__int64 *)&v36);
    MiAbortCombineScan(v23);
    if ( !v25 )
      goto LABEL_50;
    v28 = v23;
LABEL_48:
    v29 = (__int64 *)&v39;
    goto LABEL_49;
  }
LABEL_59:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
  __writecr8(v24);
}
