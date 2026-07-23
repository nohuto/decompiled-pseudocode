/*
 * XREFs of MiReferenceControlArea @ 0x140271068
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaRequiresCharge @ 0x140394370 (MiControlAreaRequiresCharge.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     FsRtlReleaseFile @ 0x14098D3F0 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _FILE_OBJECT *v3; // r13
  bool v5; // zf
  _QWORD *p_ImageSectionObject; // r15
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int64 Blink_high; // rdx
  ULONG *v16; // r8
  ULONG **v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // esi
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  int v29; // eax
  __int128 v30; // [rsp+20h] [rbp-30h] BYREF
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF
  char *v32; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]

  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v30 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  p_ImageSectionObject = &v3->SectionObjectPointer->ImageSectionObject;
  if ( v5 )
    p_ImageSectionObject = &v3->SectionObjectPointer->DataSectionObject;
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
    v13 = *p_ImageSectionObject;
    v14 = v9;
    if ( !*p_ImageSectionObject )
    {
      *p_ImageSectionObject = a2;
      v21 = KeAbPreAcquire(p_ImageSectionObject, 0LL, 0LL);
      if ( v21 )
        *(_BYTE *)(v21 + 10) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CD40);
      if ( (_BYTE)v14 != 17 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v22) = v14;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
        }
        __writecr8(v14);
      }
      *a3 = a2;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v13 + 72, v10, v11, v12) )
      break;
    LOBYTE(Blink_high) = v14;
    MiReleaseSpinLockExclusive(&dword_140E2CD40, Blink_high);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    dword_140E2CD40 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CD40, retaddr);
  v16 = (ULONG *)*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v13 + 60) & 0x3FF));
  v17 = *(ULONG ***)(a1 + 176);
  if ( v17 )
  {
    if ( *v17 == v16 && (((unsigned __int8)(*(_DWORD *)a1 >> 22) ^ *(_BYTE *)(v13 + 62)) & 1) == 0 )
      goto LABEL_11;
    *(_DWORD *)a1 |= 0x800000u;
LABEL_52:
    LOBYTE(Blink_high) = v14;
    v24 = -1073740682;
    MiReleaseSpinLockExclusive(v13 + 72, Blink_high);
LABEL_53:
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    return v24;
  }
  if ( (*(_BYTE *)(v13 + 62) & 1) != 0 )
  {
    Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
    if ( v16 == *((ULONG **)qword_140E300C8 + Blink_high) )
      goto LABEL_11;
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
LABEL_10:
      if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
        goto LABEL_11;
      v29 = *(_DWORD *)a1 | 0x1000000;
    }
    else
    {
      v29 = *(_DWORD *)a1 | 0x800000;
    }
    *(_DWORD *)a1 = v29;
    goto LABEL_52;
  }
  if ( v16 != &MiSystemPartition )
    goto LABEL_10;
LABEL_11:
  if ( !(*(_DWORD *)(v13 + 56) & 1 | ((*(_DWORD *)(v13 + 56) & 2) != 0)) )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0
      && (*(_DWORD *)(a1 + 20) & 0x100000) != 0
      && !(unsigned int)MiControlAreaRequiresCharge(v13, 2LL) )
    {
      LOBYTE(v23) = v14;
      MiReleaseSpinLockExclusive(v13 + 72, v23);
      v24 = -1073740277;
      goto LABEL_53;
    }
    v18 = *(__int64 **)(v13 + 80);
    if ( v18 )
    {
      do
      {
        v25 = (__int64 *)*v18;
        if ( (v18[1] & 4) != 0 )
          *((_DWORD *)v18 + 3) = 1;
        v18 = v25;
      }
      while ( v25 );
    }
    ++*(_QWORD *)(v13 + 24);
    MiRemoveUnusedSegment(v13);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_DWORD *)(v13 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v13 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 72));
    if ( (_BYTE)v14 != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = v14;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
      }
      __writecr8(v14);
    }
    MiReleaseControlAreaWaiters(0LL);
    *a3 = v13;
    return 0LL;
  }
  v26 = KeAbPreAcquire(p_ImageSectionObject, 0LL, 0LL);
  v28 = v26;
  if ( v26 )
    KeAbPreWait(v26);
  DWORD1(v31) = 0;
  v32 = (char *)&v31 + 8;
  LOWORD(v31) = 263;
  *((_QWORD *)&v31 + 1) = (char *)&v31 + 8;
  LOBYTE(v27) = v14;
  BYTE2(v31) = 6;
  DWORD2(v30) = 1;
  *(_QWORD *)&v30 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 80) = &v30;
  MiReleaseSpinLockExclusive(v13 + 72, v27);
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
  }
  KeWaitForGate(&v31, 18LL);
  if ( v28 )
  {
    KeAbPreAcquire(p_ImageSectionObject, v28, 0LL);
    KeAbPostReleaseEx((ULONG_PTR)p_ImageSectionObject);
  }
  *a3 = 0LL;
  return 3221226029LL;
}
