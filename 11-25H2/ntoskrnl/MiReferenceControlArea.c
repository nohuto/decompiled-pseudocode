/*
 * XREFs of MiReferenceControlArea @ 0x140219CEC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x140218D9C (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     MiControlAreaRequiresCharge @ 0x1402A673C (MiControlAreaRequiresCharge.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiReferenceControlArea(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _FILE_OBJECT *v3; // r13
  bool v5; // zf
  __int64 *p_ImageSectionObject; // r15
  KIRQL v9; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 Blink_high; // rdx
  ULONG *v13; // r8
  ULONG **v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // esi
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // eax
  __int128 v27; // [rsp+20h] [rbp-30h] BYREF
  __int128 v28; // [rsp+30h] [rbp-20h] BYREF
  char *v29; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]

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
    v9 = ExAcquireSpinLockExclusive(&SpinLock);
    v10 = *p_ImageSectionObject;
    v11 = v9;
    if ( !*p_ImageSectionObject )
    {
      *p_ImageSectionObject = a2;
      v18 = KeAbPreAcquire(p_ImageSectionObject, 0LL, 0LL);
      if ( v18 )
        *(_BYTE *)(v18 + 10) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
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
    LOBYTE(Blink_high) = v11;
    MiReleaseSpinLockExclusive(&SpinLock, Blink_high);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    SpinLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
  v13 = (ULONG *)*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v10 + 60) & 0x3FF));
  v14 = *(ULONG ***)(a1 + 176);
  if ( v14 )
  {
    if ( *v14 == v13 && (((unsigned __int8)(*(_DWORD *)a1 >> 22) ^ *(_BYTE *)(v10 + 62)) & 1) == 0 )
      goto LABEL_11;
    *(_DWORD *)a1 |= 0x800000u;
LABEL_52:
    LOBYTE(Blink_high) = v11;
    v21 = -1073740682;
    MiReleaseSpinLockExclusive(v10 + 72, Blink_high);
LABEL_53:
    if ( (*(_DWORD *)a1 & 1) == 0 )
    {
      KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    return v21;
  }
  if ( (*(_BYTE *)(v10 + 62) & 1) != 0 )
  {
    Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
    if ( v13 == *((ULONG **)qword_140E2FD48 + Blink_high) )
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
  if ( v13 != &MiSystemPartition )
    goto LABEL_10;
LABEL_11:
  if ( !(*(_DWORD *)(v10 + 56) & 1 | ((*(_DWORD *)(v10 + 56) & 2) != 0)) )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0
      && (*(_DWORD *)(a1 + 20) & 0x100000) != 0
      && !(unsigned int)MiControlAreaRequiresCharge(v10, 2LL) )
    {
      LOBYTE(v20) = v11;
      MiReleaseSpinLockExclusive(v10 + 72, v20);
      v21 = -1073740277;
      goto LABEL_53;
    }
    v15 = *(__int64 **)(v10 + 80);
    if ( v15 )
    {
      do
      {
        v22 = (__int64 *)*v15;
        if ( (v15[1] & 4) != 0 )
          *((_DWORD *)v15 + 3) = 1;
        v15 = v22;
      }
      while ( v22 );
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
        LOBYTE(v16) = v11;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      }
      __writecr8(v11);
    }
    MiReleaseControlAreaWaiters(0LL);
    *a3 = v10;
    return 0LL;
  }
  v23 = KeAbPreAcquire(p_ImageSectionObject, 0LL, 0LL);
  v25 = v23;
  if ( v23 )
    KeAbPreWait(v23);
  DWORD1(v28) = 0;
  v29 = (char *)&v28 + 8;
  LOWORD(v28) = 263;
  *((_QWORD *)&v28 + 1) = (char *)&v28 + 8;
  LOBYTE(v24) = v11;
  BYTE2(v28) = 6;
  DWORD2(v27) = 1;
  *(_QWORD *)&v27 = *(_QWORD *)(v10 + 80);
  *(_QWORD *)(v10 + 80) = &v27;
  MiReleaseSpinLockExclusive(v10 + 72, v24);
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
    KeGetCurrentThread()[1].TrapFrame = *(_KTRAP_FRAME **)(a1 + 184);
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
  }
  KeWaitForGate(&v28, 18LL);
  if ( v25 )
  {
    KeAbPreAcquire(p_ImageSectionObject, v25, 0LL);
    KeAbPostReleaseEx((ULONG_PTR)p_ImageSectionObject);
  }
  *a3 = 0LL;
  return 3221226029LL;
}
