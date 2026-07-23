/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x1404059C0
 * Callers:
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, void **a4)
{
  unsigned __int64 CurrentStackPointer; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v13; // ebp
  char v14; // al
  void *volatile *v15; // rcx
  _QWORD *v16; // rax
  void *v17; // rax
  unsigned __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  char *v19; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  CurrentStackPointer = KeGetCurrentStackPointer(0xFFFF800000000000uLL, a2);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v20, &v19, &v18);
  if ( v20 <= 9 )
  {
    v11 = 929LL;
    if ( _bittest((const int *)&v11, v20) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = v20;
  if ( v20 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
    {
      v11 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
      v10 = v11 - (unsigned int)KeDpcStackSize;
      if ( v10 <= a2 && a2 < v11 )
        goto LABEL_23;
    }
    v13 = v20;
  }
  if ( v13 != 10 && KeGetEffectiveIrql(v11, v10) >= 2u )
  {
    v11 = (unsigned __int64)KeGetPcr()->Prcb.ExceptionStack + 80;
    v10 = v11 - (unsigned int)KeExceptionStackSize;
    if ( a2 < v11 && v10 <= a2 )
    {
LABEL_23:
      *a3 = v11;
      *a1 = v10;
      return 1;
    }
    v13 = v20;
  }
  v14 = 0;
  v15 = a4 + 1;
  if ( !*a4 )
  {
    *a4 = CurrentThread->StackBase;
    v13 = v20;
    *v15 = CurrentThread->StackLimit;
    a4[2] = CurrentThread->KernelStack;
    a4[3] = CurrentThread->InitialStack;
    a4[4] = CurrentThread->KernelShadowStackBase;
    a4[5] = (void *)CurrentThread->KernelShadowStackLimit.AllFields;
    a4[6] = CurrentThread->KernelShadowStack;
    a4[7] = CurrentThread->KernelShadowStackInitial;
    v14 = 1;
  }
  if ( v13 == 1 || v13 == 6 || v13 == 10 )
  {
    if ( v14 )
      goto LABEL_25;
    v15 = a4 + 1;
  }
  v16 = a4[3];
  if ( !v16[2] )
    return 0;
  *(_OWORD *)a4 = *((_OWORD *)v16 + 1);
  *((_OWORD *)a4 + 1) = *((_OWORD *)v16 + 2);
  *((_OWORD *)a4 + 2) = *((_OWORD *)v16 + 3);
  *((_OWORD *)a4 + 3) = *((_OWORD *)v16 + 4);
LABEL_25:
  v17 = *a4;
  if ( (void *volatile)a2 < *v15 || a2 >= (unsigned __int64)v17 )
    return 0;
  *a1 = (unsigned __int64)*v15;
  *a3 = (unsigned __int64)v17;
  return 1;
}
