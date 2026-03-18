/*
 * XREFs of MiCheckProtoAccess @ 0x1402FF1D0
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckUserVirtualAddress @ 0x1402FF820 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckProtoAccess(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // rcx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _KPROCESS *v13; // r9
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v15; // r8
  volatile signed __int32 *v16; // rcx
  __int64 result; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  __int64 v23; // rsi
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  int v25; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (v2 & 1) != 0
    && ((v2 & 0x42) == 0 || (v2 & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      KernelWaitTime = Process[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v20 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v20 & 0x20) != 0 )
          v2 |= 0x20uLL;
        v21 = v2;
        v2 |= 0x42uLL;
        if ( (v20 & 0x42) == 0 )
          v2 = v21;
      }
    }
  }
  v5 = (v2 >> 5) & 0x1F;
  if ( (v2 & 0x400) == 0 )
    goto LABEL_45;
  v6 = v2;
  if ( qword_140E2DB80 && (v2 & 0x10) == 0 )
    v6 = v2 & ~qword_140E2DB80;
  if ( HIDWORD(v6) == 0xFFFFFFFF )
  {
    v7 = 0LL;
    v25 = 0;
    v8 = (__int64)(a1 << 25) >> 16;
    if ( v8 > 0x7FFFFFFEFFFFLL )
      goto LABEL_31;
    if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
    {
      v9 = v8 & 0x7FFFFFFFF000LL;
      if ( (v8 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        v7 = qword_140E2DA68;
        goto LABEL_31;
      }
      if ( v9 == qword_140E2DA78 && v9 )
      {
        v7 = qword_140E2DA70;
        goto LABEL_31;
      }
    }
    v10 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v10);
      v11 = *v10 & 0x7FFFFFFF;
      while ( 1 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(v10, v11 + 1, v11);
        if ( v12 == v11 )
          break;
        if ( v11 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v10, 0xFFu);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, 0xFFu);
    }
    v13 = KeGetCurrentThread()->ApcState.Process;
    Flink = v13[3].Header.WaitListHead.Flink;
    if ( Flink )
    {
      v15 = v8 >> 12;
      if ( v8 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
        && v15 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
      {
LABEL_29:
        v7 = MiCheckUserVirtualAddress(v8, Flink, v15, &v25);
        v16 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25]
            + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v16, 0xBFFFFFFF);
          _InterlockedDecrement(v16);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v16, retaddr);
        }
        goto LABEL_31;
      }
      Flink = *(struct _LIST_ENTRY **)&v13[3].Header.Lock;
      if ( Flink )
      {
        do
        {
          if ( v15 > (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
          {
            Flink = Flink->Blink;
          }
          else
          {
            if ( v15 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32)) )
              break;
            Flink = Flink->Flink;
          }
        }
        while ( Flink );
        if ( Flink )
        {
          v13[3].Header.WaitListHead.Flink = Flink;
          goto LABEL_29;
        }
      }
    }
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
        (volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1,
        retaddr);
    }
  }
  else
  {
LABEL_45:
    v23 = v2;
    if ( qword_140E2DB80 && (v2 & 0x10) == 0 )
      v23 = v2 & ~qword_140E2DB80;
    v7 = v23 >> 16;
    LODWORD(v5) = 256;
    if ( (v2 & 8) != 0 )
      LODWORD(v5) = 1;
  }
LABEL_31:
  result = v7;
  *a2 = v5;
  return result;
}
