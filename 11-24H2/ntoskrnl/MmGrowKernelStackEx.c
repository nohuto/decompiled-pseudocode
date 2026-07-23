/*
 * XREFs of MmGrowKernelStackEx @ 0x140474350
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140232E90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     MmGrowKernelStack @ 0x140676780 (MmGrowKernelStack.c)
 *     KxSwitchKernelStackCallout @ 0x1406AC960 (KxSwitchKernelStackCallout.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *InitialStack; // rax
  void *StackBase; // rdx
  unsigned __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 Blink_high; // rcx
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  _QWORD v17[4]; // [rsp+20h] [rbp-50h] BYREF
  int v18; // [rsp+40h] [rbp-30h]
  char v19; // [rsp+44h] [rbp-2Ch]
  __int16 v20; // [rsp+45h] [rbp-2Bh]
  char v21; // [rsp+47h] [rbp-29h]
  struct _KTHREAD *v22; // [rsp+48h] [rbp-28h]
  int v23; // [rsp+50h] [rbp-20h]
  int v24; // [rsp+54h] [rbp-1Ch]
  __int64 v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v17[2] = 0LL;
  v20 = 0;
  v21 = 0;
  InitialStack = CurrentThread->InitialStack;
  StackBase = CurrentThread->StackBase;
  v26 = 0LL;
  v7 = (unsigned __int64)StackBase - (InitialStack[1] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v7 < (unsigned int)KeKernelLargeStackSize )
    return 3221225659LL;
  v8 = 0;
  Blink_high = HIWORD(CurrentThread->Process[2].ProcessListEntry.Blink);
  v10 = *((_QWORD *)qword_140E300C8 + Blink_high);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    LOBYTE(Blink_high) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Blink_high, v7);
  }
  v12 = 0xFFFFF68000000000uLL;
  v13 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v14 < v13 )
  {
    if ( v14 < ((*((_QWORD *)CurrentThread->InitialStack + 1) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_140E35FE0;
      v8 = -1073741571;
    }
    else
    {
      v15 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
      v25 = 0LL;
      v23 = MiPageToNode((v15 >> 12) & 0xFFFFFFFFFFLL);
      v17[0] = v10;
      v17[1] = v14;
      v17[3] = ((__int64)(v13 - v14 - 8) >> 3) + 1;
      v18 = 2;
      v22 = CurrentThread;
      v19 = 2;
      v24 = 5;
      if ( (unsigned int)MiAllocateKernelStackPages((__int64)v17) )
        CurrentThread->StackLimit = (void *volatile)((__int64)(v14 << 25) >> 16);
      else
        v8 = -1073741670;
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  __writecr8(CurrentIrql);
  return v8;
}
