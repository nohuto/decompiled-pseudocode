/*
 * XREFs of MiReferenceControlArea @ 0x140415208
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14022F72C (MiRemoveUnusedSegment.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     MiControlAreaRequiresCharge @ 0x1404166A4 (MiControlAreaRequiresCharge.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     FsRtlReleaseFile @ 0x140943180 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _FILE_OBJECT *v3; // r13
  bool v5; // zf
  __int64 *p_ImageSectionObject; // r15
  KIRQL v9; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  ULONG *v12; // r8
  ULONG **v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  ULONG_PTR v25; // rsi
  int v26; // eax
  __int128 v27; // [rsp+20h] [rbp-30h] BYREF
  __int128 v28; // [rsp+30h] [rbp-20h] BYREF
  char *v29; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  v27 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  p_ImageSectionObject = (__int64 *)&v3->SectionObjectPointer->ImageSectionObject;
  if ( v5 )
    p_ImageSectionObject = (__int64 *)v3->SectionObjectPointer;
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&dword_140E2CC00);
    v10 = *p_ImageSectionObject;
    v11 = v9;
    if ( !*p_ImageSectionObject )
    {
      *p_ImageSectionObject = a2;
      v18 = KeAbPreAcquire((__int64)p_ImageSectionObject, 0LL);
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CC00);
      if ( (_BYTE)v11 != 17 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v19) = v11;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
        }
        __writecr8(v11);
      }
      *a3 = a2;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
    MiReleaseSpinLockExclusive(&dword_140E2CC00, v11);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    dword_140E2CC00 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2CC00, retaddr);
  v12 = (ULONG *)*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v10 + 60) & 0x3FF));
  v13 = *(ULONG ***)(a1 + 176);
  if ( v13 )
  {
    if ( *v13 == v12 && (((unsigned __int8)(*(_DWORD *)a1 >> 22) ^ *(_BYTE *)(v10 + 62)) & 1) == 0 )
      goto LABEL_11;
    *(_DWORD *)a1 |= 0x800000u;
LABEL_52:
    v20 = -1073740682;
    MiReleaseSpinLockExclusive((_DWORD *)(v10 + 72), v11);
LABEL_53:
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    return v20;
  }
  if ( (*(_BYTE *)(v10 + 62) & 1) != 0 )
  {
    if ( v12 == *((ULONG **)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) )
      goto LABEL_11;
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
LABEL_10:
      if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
        goto LABEL_11;
      v26 = *(_DWORD *)a1 | 0x1000000;
    }
    else
    {
      v26 = *(_DWORD *)a1 | 0x800000;
    }
    *(_DWORD *)a1 = v26;
    goto LABEL_52;
  }
  if ( v12 != &MiSystemPartition )
    goto LABEL_10;
LABEL_11:
  if ( !(*(_DWORD *)(v10 + 56) & 1 | ((*(_DWORD *)(v10 + 56) & 2) != 0)) )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0
      && (*(_DWORD *)(a1 + 20) & 0x100000) != 0
      && !(unsigned int)MiControlAreaRequiresCharge(v10, 2LL) )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(v10 + 72), v11);
      v20 = -1073740277;
      goto LABEL_53;
    }
    v14 = *(__int64 **)(v10 + 80);
    if ( v14 )
    {
      do
      {
        v21 = (__int64 *)*v14;
        if ( (v14[1] & 4) != 0 )
          *((_DWORD *)v14 + 3) = 1;
        v14 = v21;
      }
      while ( v21 );
    }
    ++*(_QWORD *)(v10 + 24);
    MiRemoveUnusedSegment(v10);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_DWORD *)(v10 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v10 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    if ( (_BYTE)v11 != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = v11;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
      }
      __writecr8(v11);
    }
    MiReleaseControlAreaWaiters(0LL, v15, v16);
    *a3 = v10;
    return 0LL;
  }
  v22 = KeAbPreAcquire((__int64)p_ImageSectionObject, 0LL);
  v25 = (ULONG_PTR)v22;
  if ( v22 )
    KeAbPreWait((__int64)v22, v23, v24);
  DWORD1(v28) = 0;
  v29 = (char *)&v28 + 8;
  LOWORD(v28) = 263;
  *((_QWORD *)&v28 + 1) = (char *)&v28 + 8;
  BYTE2(v28) = 6;
  DWORD2(v27) = 1;
  *(_QWORD *)&v27 = *(_QWORD *)(v10 + 80);
  *(_QWORD *)(v10 + 80) = &v27;
  MiReleaseSpinLockExclusive((_DWORD *)(v10 + 72), v11);
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
  }
  KeWaitForGate(&v28, 18LL);
  if ( v25 )
  {
    KeAbPreAcquire((__int64)p_ImageSectionObject, v25);
    KeAbPostReleaseEx((ULONG_PTR)p_ImageSectionObject, v25);
  }
  *a3 = 0LL;
  return 3221226029LL;
}
