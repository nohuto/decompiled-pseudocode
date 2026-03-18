/*
 * XREFs of KiExpandKernelStackAndCalloutSwitchStack @ 0x14027D900
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14027D7A0 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14027C840 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmGrowKernelStackEx @ 0x140477D50 (MmGrowKernelStackEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
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
  char *StackLimit; // r15
  __int64 v13; // r14
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v19; // rax
  char *v20; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v21[6]; // [rsp+38h] [rbp-30h] BYREF
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v5 = a4;
  v20 = 0LL;
  v6 = a3;
  v21[0] = 0LL;
  v22 = 0;
  if ( a3 > (unsigned int)KeMaximumKernelStackExpansionSize )
    return 3221225713LL;
  if ( byte_140FCDC28 )
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
  StackLimit = (char *)CurrentThread->StackLimit;
  v13 = CurrentStackPointer;
  v14 = (char *)(*((_QWORD *)CurrentThread->InitialStack + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !KeAreInterruptsEnabled() )
  {
    CurrentIrql = 15;
    goto LABEL_23;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    if ( (v5 & 2) != 0 )
      return 3221225714LL;
    v19 = KeGetCurrentStackPointer(v16, v15);
    if ( !KeQueryCurrentStackInformationEx(v19, &v22, &v20, v21) )
      __fastfail(4u);
    if ( v22 == 1 || v22 == 10 )
    {
      StackLimit = v20;
      v14 = v20;
    }
    else if ( v22 == 5 )
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
  if ( v13 - (__int64)v14 < v6
    || (v5 & 1) != 0
    || v13 - (__int64)StackLimit < v6 && ((v5 & 0xC0000000) != 0 || (int)MmGrowKernelStackEx(v13, v6) < 0) )
  {
    return KiExpandKernelStackAndCalloutOnStackSegment(a1, a2, v6, v5, v9);
  }
  else
  {
    return 3221226635LL;
  }
}
