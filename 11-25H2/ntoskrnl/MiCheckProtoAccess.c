/*
 * XREFs of MiCheckProtoAccess @ 0x140243150
 * Callers:
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
  __int64 v12; // rdx
  signed __int32 v13; // ett
  _KPROCESS *v14; // r9
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  volatile signed __int32 *v18; // rcx
  __int64 result; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  __int64 v21; // rsi
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v27; // [rsp+30h] [rbp+8h] BYREF

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
        v24 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v24 & 0x20) != 0 )
          v2 |= 0x20uLL;
        v25 = v2;
        v2 |= 0x42uLL;
        if ( (v24 & 0x42) == 0 )
          v2 = v25;
      }
    }
  }
  v5 = (v2 >> 5) & 0x1F;
  if ( (v2 & 0x400) == 0 )
    goto LABEL_34;
  v6 = v2;
  if ( qword_140E2D940 && (v2 & 0x10) == 0 )
    v6 = v2 & ~qword_140E2D940;
  if ( HIDWORD(v6) == 0xFFFFFFFF )
  {
    v7 = 0LL;
    v27 = 0;
    v8 = (__int64)(a1 << 25) >> 16;
    if ( v8 > 0x7FFFFFFEFFFFLL )
      goto LABEL_27;
    if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
    {
      v9 = v8 & 0x7FFFFFFFF000LL;
      if ( (v8 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        v7 = qword_140E2D828;
        goto LABEL_27;
      }
      if ( v9 == qword_140E2D838 && v9 )
      {
        v7 = qword_140E2D830;
        goto LABEL_27;
      }
    }
    v10 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v10);
      v11 = *v10 & 0x7FFFFFFF;
      while ( 1 )
      {
        v12 = (unsigned int)(v11 + 1);
        v13 = v11;
        v11 = _InterlockedCompareExchange(v10, v12, v11);
        if ( v13 == v11 )
          break;
        if ( v11 < 0 )
        {
          LOBYTE(v12) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v10, v12);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, 0xFFu);
    }
    v14 = KeGetCurrentThread()->ApcState.Process;
    Flink = v14[3].Header.WaitListHead.Flink;
    if ( Flink )
    {
      v16 = v8 >> 12;
      if ( v8 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
        && v16 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
      {
LABEL_25:
        v7 = MiCheckUserVirtualAddress(v8, Flink, v16, &v27);
        v18 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25]
            + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v18, 0xBFFFFFFF);
          _InterlockedDecrement(v18);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v18, retaddr, v17);
        }
        goto LABEL_27;
      }
      Flink = *(struct _LIST_ENTRY **)&v14[3].Header.Lock;
      if ( Flink )
      {
        do
        {
          if ( v16 > (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
          {
            Flink = Flink->Blink;
          }
          else
          {
            if ( v16 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32)) )
              break;
            Flink = Flink->Flink;
          }
        }
        while ( Flink );
        if ( Flink )
        {
          v14[3].Header.WaitListHead.Flink = Flink;
          goto LABEL_25;
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
        (char *)&ActiveProcessors[3].StaticBitmap[25] + 4,
        retaddr,
        ActiveProcessors);
    }
  }
  else
  {
LABEL_34:
    v21 = v2;
    if ( qword_140E2D940 && (v2 & 0x10) == 0 )
      v21 = v2 & ~qword_140E2D940;
    v7 = v21 >> 16;
    LODWORD(v5) = 256;
    if ( (v2 & 8) != 0 )
      LODWORD(v5) = 1;
  }
LABEL_27:
  result = v7;
  *a2 = v5;
  return result;
}
