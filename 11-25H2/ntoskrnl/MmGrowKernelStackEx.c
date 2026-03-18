/*
 * XREFs of MmGrowKernelStackEx @ 0x140477F70
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140347DF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     MmGrowKernelStack @ 0x140669B50 (MmGrowKernelStack.c)
 *     KxSwitchKernelStackCallout @ 0x1406A06F0 (KxSwitchKernelStackCallout.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmGrowKernelStackEx(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *InitialStack; // rax
  char *StackBase; // rdx
  unsigned int v7; // r14d
  __int64 Blink_high; // rcx
  __int64 v9; // r13
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  _QWORD v16[4]; // [rsp+20h] [rbp-50h] BYREF
  int v17; // [rsp+40h] [rbp-30h]
  char v18; // [rsp+44h] [rbp-2Ch]
  __int16 v19; // [rsp+45h] [rbp-2Bh]
  char v20; // [rsp+47h] [rbp-29h]
  struct _KTHREAD *v21; // [rsp+48h] [rbp-28h]
  int v22; // [rsp+50h] [rbp-20h]
  int v23; // [rsp+54h] [rbp-1Ch]
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v16[2] = 0LL;
  v19 = 0;
  v20 = 0;
  InitialStack = CurrentThread->InitialStack;
  StackBase = (char *)CurrentThread->StackBase;
  v25 = 0LL;
  if ( (unsigned __int64)&StackBase[-(InitialStack[1] & 0xFFFFFFFFFFFFFFFEuLL)] < (unsigned int)KeKernelLargeStackSize )
    return 3221225659LL;
  v7 = 0;
  Blink_high = HIWORD(CurrentThread->Process[2].ProcessListEntry.Blink);
  v9 = *((_QWORD *)qword_140E2FD48 + Blink_high);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Blink_high) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Blink_high);
  }
  v11 = 0xFFFFF68000000000uLL;
  v12 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (((unsigned __int64)(a1 - a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v13 < v12 )
  {
    if ( v13 < ((*((_QWORD *)CurrentThread->InitialStack + 1) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    {
      ++dword_140E35C60;
      v7 = -1073741571;
    }
    else
    {
      v14 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
      v24 = 0LL;
      v22 = MiPageToNode((v14 >> 12) & 0xFFFFFFFFFFLL);
      v16[0] = v9;
      v16[1] = v13;
      v16[3] = ((__int64)(v12 - v13 - 8) >> 3) + 1;
      v17 = 2;
      v21 = CurrentThread;
      v18 = 2;
      v23 = 5;
      if ( (unsigned int)MiAllocateKernelStackPages((__int64)v16) )
        CurrentThread->StackLimit = (void *volatile)((__int64)(v13 << 25) >> 16);
      else
        v7 = -1073741670;
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(CurrentIrql);
  return v7;
}
