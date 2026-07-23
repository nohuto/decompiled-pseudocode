/*
 * XREFs of KiExpandKernelStackAndCalloutSwitchStack @ 0x140232E90
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140231DD0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     MmGrowKernelStackEx @ 0x140474350 (MmGrowKernelStackEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutSwitchStack(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        int a4,
        _BYTE *a5)
{
  int v5; // ebp
  unsigned __int64 v6; // rbx
  _BYTE *v9; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 CurrentStackPointer; // rax
  signed __int64 StackLimit; // r15
  __int64 v13; // r14
  _QWORD *InitialStack; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // al
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23[6]; // [rsp+38h] [rbp-30h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF

  v5 = a4;
  v22 = 0LL;
  v6 = a3;
  v23[0] = 0LL;
  v24 = 0;
  if ( a3 > (unsigned int)KeMaximumKernelStackExpansionSize )
    return 3221225713LL;
  if ( byte_140FCECA8 )
  {
    if ( a3 <= 0x11800 )
    {
      v6 = 2 * a3;
      if ( a4 < 0 && v6 > (unsigned int)KeKernelStackSize )
        v6 = (unsigned int)KeKernelStackSize;
    }
  }
  v9 = a5;
  if ( (a4 & 0x40000000) != 0 )
  {
    if ( !a5 || (a5[7] & 1) == 0 )
      return 3221225715LL;
    if ( v6 <= (unsigned int)KeKernelStackSize )
      goto LABEL_6;
    return 3221225713LL;
  }
  if ( a5 && (a5[7] & 1) != 0 )
    return 3221225715LL;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  CurrentStackPointer = KeGetCurrentStackPointer(a1, a2);
  StackLimit = (signed __int64)CurrentThread->StackLimit;
  v13 = CurrentStackPointer;
  InitialStack = CurrentThread->InitialStack;
  v15 = InitialStack[1] & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !(unsigned __int8)KeAreInterruptsEnabled(InitialStack, v16) )
  {
    CurrentIrql = 15;
    goto LABEL_23;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    if ( (v5 & 2) != 0 )
      return 3221225714LL;
    v21 = KeGetCurrentStackPointer(v18, v17);
    if ( !(unsigned __int8)KeQueryCurrentStackInformationEx(v21, &v24, &v22, v23) )
      __fastfail(4u);
    if ( v24 == 1 || v24 == 10 )
    {
      StackLimit = v22;
      v15 = v22;
    }
    else if ( v24 == 5 )
    {
      v5 |= 1u;
    }
    goto LABEL_11;
  }
  if ( CurrentIrql > 2u )
LABEL_23:
    KeBugCheckEx(0xAu, 2uLL, CurrentIrql, 0LL, 0LL);
  if ( v6 == (unsigned int)KeKernelStackSize || v6 == 24576 && (unsigned int)KeKernelStackSize >= 0x6000 )
    v5 |= 5u;
LABEL_11:
  if ( v13 - v15 < v6
    || (v5 & 1) != 0
    || v13 - StackLimit < v6 && ((v5 & 0xC0000000) != 0 || (int)MmGrowKernelStackEx(v13, v6) < 0) )
  {
    return KiExpandKernelStackAndCalloutOnStackSegment(a1, a2, v6, v5, v9);
  }
  else
  {
    return 3221226635LL;
  }
}
