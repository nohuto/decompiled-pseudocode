/*
 * XREFs of MiCheckVirtualAddress @ 0x140243540
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiIsFaultPteIntact @ 0x140246470 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140246570 (MiFindActualFaultingPte.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, struct _LIST_ENTRY **a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  signed __int32 v8; // eax
  __int64 v9; // rdx
  signed __int32 v10; // ett
  _KPROCESS *Process; // r8
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 4;
      return 0LL;
    }
LABEL_24:
    *a2 = 24;
    return 0LL;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
  {
    v6 = a1 & 0x7FFFFFFFF000LL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140E2D828;
      *a2 = 1;
      return result;
    }
    if ( v6 == qword_140E2D838 && v6 )
    {
      result = qword_140E2D830;
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
      v9 = (unsigned int)(v8 + 1);
      v10 = v8;
      v8 = _InterlockedCompareExchange(v7, v9, v8);
      if ( v10 == v8 )
        break;
      if ( v8 < 0 )
      {
        LOBYTE(v9) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v7, v9);
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
    v13 = a1 >> 12;
    if ( a1 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
      && v13 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
    {
      goto LABEL_19;
    }
    Flink = *(struct _LIST_ENTRY **)&Process[3].Header.Lock;
    if ( Flink )
    {
      do
      {
        if ( v13 > (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
        {
          Flink = Flink->Blink;
        }
        else
        {
          if ( v13 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32)) )
            break;
          Flink = Flink->Flink;
        }
      }
      while ( Flink );
      if ( Flink )
      {
        Process[3].Header.WaitListHead.Flink = Flink;
LABEL_19:
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
    goto LABEL_24;
  }
  ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
    (char *)&ActiveProcessors[3].StaticBitmap[25] + 4,
    retaddr,
    ActiveProcessors);
  result = 0LL;
  *a2 = 24;
  return result;
}
