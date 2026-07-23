/*
 * XREFs of MmEnoughMemoryForWrite @ 0x140411550
 * Callers:
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmEnoughMemoryForWrite(_QWORD *a1)
{
  __int64 v1; // rsi
  bool v2; // bl
  ULONG *v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned int v7; // eax
  __int64 v8; // r12
  __int64 v9; // rbp
  _QWORD *v10; // r14
  unsigned int i; // r10d
  char v13; // dl
  __int64 v14; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 v16; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v16 = 17;
  v2 = 0;
  if ( a1 )
  {
    v13 = 3;
    if ( KeGetCurrentIrql() != 2 )
      v13 = 1;
    v14 = MiLockSectionControlArea(a1, v13, &v16);
    v1 = v14;
    if ( !v14 )
      return 1LL;
    v4 = (ULONG *)*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v14 + 60) & 0x3FF));
  }
  else
  {
    v4 = &MiSystemPartition;
  }
  v5 = 450LL;
  v6 = *((_QWORD *)v4 + 2336);
  if ( (_BYTE)dword_140FC521C )
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
        for ( i = 0; i < dword_140E2DD0C; ++i )
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
      v2 = (unsigned int)MiSufficientAvailablePages((__int64)v4, 0x50uLL) != 0;
  }
  if ( !a1 )
    return v2;
  if ( v16 != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v1 + 72) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v1 + 72), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
    __writecr8(v16);
    return v2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    *(_DWORD *)(v1 + 72) = 0;
    return v2;
  }
  else
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v1 + 72), retaddr);
    return v2;
  }
}
