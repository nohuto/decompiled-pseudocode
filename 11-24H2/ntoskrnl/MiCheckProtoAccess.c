/*
 * XREFs of MiCheckProtoAccess @ 0x140309950
 * Callers:
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckProtoAccess(unsigned __int64 a1, _DWORD *a2, __int64 KernelWaitTime, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  signed __int32 v13; // eax
  __int64 v14; // rdx
  signed __int32 v15; // ett
  _KPROCESS *v16; // r9
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v18; // r8
  volatile signed __int32 *v19; // rcx
  __int64 result; // rax
  _KPROCESS *Process; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  __int64 v25; // rsi
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  int v27; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL
    && a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (v4 & 1) != 0
    && ((v4 & 0x42) == 0 || (v4 & 0x20) == 0)
    && (MiFlags & 0x600000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      KernelWaitTime = Process[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v22 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
        if ( (v22 & 0x20) != 0 )
          v4 |= 0x20uLL;
        v23 = v4;
        v4 |= 0x42uLL;
        if ( (v22 & 0x42) == 0 )
          v4 = v23;
      }
    }
  }
  v7 = (v4 >> 5) & 0x1F;
  if ( (v4 & 0x400) == 0 )
    goto LABEL_45;
  v8 = v4;
  if ( qword_140E2DCC0 && (v4 & 0x10) == 0 )
    v8 = v4 & ~qword_140E2DCC0;
  if ( HIDWORD(v8) == 0xFFFFFFFF )
  {
    v9 = 0LL;
    v27 = 0;
    v10 = (__int64)(a1 << 25) >> 16;
    if ( v10 > 0x7FFFFFFEFFFFLL )
      goto LABEL_31;
    if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
    {
      v11 = v10 & 0x7FFFFFFFF000LL;
      if ( (v10 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        v9 = qword_140E2DBA8;
        goto LABEL_31;
      }
      if ( v11 == qword_140E2DBB8 && v11 )
      {
        v9 = qword_140E2DBB0;
        goto LABEL_31;
      }
    }
    v12 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v12);
      v13 = *v12 & 0x7FFFFFFF;
      while ( 1 )
      {
        v14 = (unsigned int)(v13 + 1);
        v15 = v13;
        v13 = _InterlockedCompareExchange(v12, v14, v13);
        if ( v15 == v13 )
          break;
        if ( v13 < 0 )
        {
          LOBYTE(v14) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v12, v14, KernelWaitTime, a4);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, 0xFFu);
    }
    v16 = KeGetCurrentThread()->ApcState.Process;
    Flink = v16[3].Header.WaitListHead.Flink;
    if ( Flink )
    {
      v18 = v10 >> 12;
      if ( v10 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
        && v18 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
      {
LABEL_29:
        v9 = MiCheckUserVirtualAddress(v10, Flink, v18, &v27);
        v19 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25]
            + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v19, 0xBFFFFFFF);
          _InterlockedDecrement(v19);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v19, retaddr);
        }
        goto LABEL_31;
      }
      Flink = *(struct _LIST_ENTRY **)&v16[3].Header.Lock;
      if ( Flink )
      {
        do
        {
          if ( v18 > (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
          {
            Flink = Flink->Blink;
          }
          else
          {
            if ( v18 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32)) )
              break;
            Flink = Flink->Flink;
          }
        }
        while ( Flink );
        if ( Flink )
        {
          v16[3].Header.WaitListHead.Flink = Flink;
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
    v25 = v4;
    if ( qword_140E2DCC0 && (v4 & 0x10) == 0 )
      v25 = v4 & ~qword_140E2DCC0;
    v9 = v25 >> 16;
    LODWORD(v7) = 256;
    if ( (v4 & 8) != 0 )
      LODWORD(v7) = 1;
  }
LABEL_31:
  result = v9;
  *a2 = v7;
  return result;
}
