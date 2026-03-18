/*
 * XREFs of MiCheckVirtualAddress @ 0x1402FF5B0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiIsFaultPteIntact @ 0x140302E80 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140302F80 (MiFindActualFaultingPte.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckUserVirtualAddress @ 0x1402FF820 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, struct _LIST_ENTRY **a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _KPROCESS *Process; // r8
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 4;
      return 0LL;
    }
LABEL_26:
    *a2 = 24;
    return 0LL;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
  {
    v6 = a1 & 0x7FFFFFFFF000LL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140E2DA68;
      *a2 = 1;
      return result;
    }
    if ( v6 == qword_140E2DA78 && v6 )
    {
      result = qword_140E2DA70;
      *a2 = 1;
      return result;
    }
  }
  v7 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v7);
    v8 = *v7 & 0x7FFFFFFF;
    while ( 1 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange(v7, v8 + 1, v8);
      if ( v9 == v8 )
        break;
      if ( v8 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v7, 0xFFu);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v7, 0xFFu);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = Process[3].Header.WaitListHead.Flink;
  if ( Flink )
  {
    v12 = a1 >> 12;
    if ( a1 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
      && v12 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
    {
      goto LABEL_20;
    }
    Flink = *(struct _LIST_ENTRY **)&Process[3].Header.Lock;
    if ( Flink )
    {
      do
      {
        if ( v12 > (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
        {
          Flink = Flink->Blink;
        }
        else
        {
          if ( v12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32)) )
            break;
          Flink = Flink->Flink;
        }
      }
      while ( Flink );
      if ( Flink )
      {
        Process[3].Header.WaitListHead.Flink = Flink;
LABEL_20:
        result = MiCheckUserVirtualAddress(a1, Flink, Process, a2);
        *a3 = Flink;
        return result;
      }
    }
  }
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1, 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1);
    goto LABEL_26;
  }
  ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
    (volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1,
    retaddr);
  result = 0LL;
  *a2 = 24;
  return result;
}
