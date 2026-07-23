/*
 * XREFs of MiCheckVirtualAddress @ 0x140309D30
 * Callers:
 *     MiIsFaultPteIntact @ 0x14030CD60 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14030CE60 (MiFindActualFaultingPte.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, struct _LIST_ENTRY **a3)
{
  _KPROCESS *Process; // r9
  __int64 v7; // rax
  _DWORD *v8; // rcx
  signed __int32 v9; // eax
  __int64 v10; // rdx
  signed __int32 v11; // ett
  _KPROCESS *v12; // r8
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v14; // rdx
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
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
  {
    v7 = a1 & 0x7FFFFFFFF000LL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140E2DBA8;
      *a2 = 1;
      return result;
    }
    if ( v7 == qword_140E2DBB8 && v7 )
    {
      result = qword_140E2DBB0;
      *a2 = 1;
      return result;
    }
  }
  v8 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v8);
    v9 = *v8 & 0x7FFFFFFF;
    while ( 1 )
    {
      v10 = (unsigned int)(v9 + 1);
      v11 = v9;
      v9 = _InterlockedCompareExchange(v8, v10, v9);
      if ( v11 == v9 )
        break;
      if ( v9 < 0 )
      {
        LOBYTE(v10) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v8, v10, (__int64)a3, (__int64)Process);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, 0xFFu);
  }
  v12 = KeGetCurrentThread()->ApcState.Process;
  Flink = v12[3].Header.WaitListHead.Flink;
  if ( Flink )
  {
    v14 = a1 >> 12;
    if ( a1 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
      && v14 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
    {
      goto LABEL_20;
    }
    Flink = *(struct _LIST_ENTRY **)&v12[3].Header.Lock;
    if ( Flink )
    {
      do
      {
        if ( v14 > (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
        {
          Flink = Flink->Blink;
        }
        else
        {
          if ( v14 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32)) )
            break;
          Flink = Flink->Flink;
        }
      }
      while ( Flink );
      if ( Flink )
      {
        v12[3].Header.WaitListHead.Flink = Flink;
LABEL_20:
        result = MiCheckUserVirtualAddress(a1, Flink, v12, a2);
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
