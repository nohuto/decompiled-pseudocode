/*
 * XREFs of MmEnoughMemoryForWrite @ 0x14034DFE0
 * Callers:
 *     CcCanIWriteStreamEx @ 0x1403A62E0 (CcCanIWriteStreamEx.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14034CE80 (MiLockSectionControlArea.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmEnoughMemoryForWrite(_QWORD *a1)
{
  __int64 v1; // rsi
  bool v2; // bl
  ULONG *v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // r13
  __int64 v9; // r14
  _QWORD *v10; // r15
  unsigned int i; // r10d
  _DWORD *v12; // rcx
  char v14; // dl
  __int64 v15; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v17 = 17;
  v2 = 0;
  if ( a1 )
  {
    v14 = 3;
    if ( KeGetCurrentIrql() != 2 )
      v14 = 1;
    v15 = MiLockSectionControlArea(a1, v14, &v17);
    v1 = v15;
    if ( !v15 )
      return 1LL;
    v4 = (ULONG *)*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v15 + 60) & 0x3FF));
  }
  else
  {
    v4 = &MiSystemPartition;
  }
  v5 = 450LL;
  v6 = *((_QWORD *)v4 + 2336);
  if ( (_BYTE)dword_140FC420C )
    v5 = 0x4000LL;
  if ( v6 >= v5 )
  {
LABEL_13:
    v2 = 1;
  }
  else
  {
    v7 = 0;
    v8 = *((_QWORD *)v4 + 2) + 14944LL;
    while ( v7 < (unsigned __int16)KeNumberNodes )
    {
      v9 = 0LL;
      v10 = (_QWORD *)v8;
      while ( v9 <= 1 )
      {
        for ( i = 0; i < dword_140E2D98C; ++i )
        {
          v6 += *(unsigned __int16 *)(*v10 + 16LL * i);
          if ( v6 >= v5 )
            goto LABEL_13;
        }
        ++v9;
        ++v10;
      }
      v8 += 57216LL;
      ++v7;
    }
    if ( *((_QWORD *)v4 + 2424) < (unsigned __int64)(*((_QWORD *)v4 + 2452) + 800LL) )
      v2 = (unsigned int)MiSufficientAvailablePages(v4, 80LL) != 0;
  }
  if ( !a1 )
    return v2;
  v12 = (_DWORD *)(v1 + 72);
  if ( v17 != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v12 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    __writecr8(v17);
    return v2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    *v12 = 0;
    return v2;
  }
  else
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
    return v2;
  }
}
