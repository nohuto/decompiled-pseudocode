/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x14040D770
 * Callers:
 *     PspGetSetContextInternal @ 0x1409A4CA0 (PspGetSetContextInternal.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KeQueryCurrentStackInformationEx @ 0x140259BD0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, void **a4)
{
  unsigned __int64 CurrentStackPointer; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // ebp
  char v12; // al
  void *volatile *v13; // rcx
  _QWORD *v14; // rax
  int v15; // ecx
  char *v16; // rcx
  char *v17; // rdx
  void *v18; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  char *v20; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  CurrentStackPointer = KeGetCurrentStackPointer(0xFFFF800000000000uLL, a2);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v21, &v20, &v19);
  if ( v21 <= 9 )
  {
    v15 = 929;
    if ( _bittest(&v15, v21) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = v21;
  if ( v21 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
    {
      v16 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v17 = &v16[-KeDpcStackSize];
      if ( (unsigned __int64)v17 <= a2 && a2 < (unsigned __int64)v16 )
        goto LABEL_23;
    }
    v11 = v21;
  }
  if ( v11 != 10 && KeGetEffectiveIrql() >= 2u )
  {
    v16 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v17 = &v16[-(unsigned int)KeExceptionStackSize];
    if ( a2 < (unsigned __int64)v16 && (unsigned __int64)v17 <= a2 )
    {
LABEL_23:
      *a3 = (unsigned __int64)v16;
      *a1 = (unsigned __int64)v17;
      return 1;
    }
    v11 = v21;
  }
  v12 = 0;
  v13 = a4 + 1;
  if ( !*a4 )
  {
    *a4 = CurrentThread->StackBase;
    v11 = v21;
    *v13 = CurrentThread->StackLimit;
    a4[2] = CurrentThread->KernelStack;
    a4[3] = CurrentThread->InitialStack;
    a4[4] = CurrentThread->KernelShadowStackBase;
    a4[5] = (void *)CurrentThread->KernelShadowStackLimit.AllFields;
    a4[6] = CurrentThread->KernelShadowStack;
    a4[7] = CurrentThread->KernelShadowStackInitial;
    v12 = 1;
  }
  if ( v11 == 1 || v11 == 6 || v11 == 10 )
  {
    if ( v12 )
      goto LABEL_25;
    v13 = a4 + 1;
  }
  v14 = a4[3];
  if ( !v14[2] )
    return 0;
  *(_OWORD *)a4 = *((_OWORD *)v14 + 1);
  *((_OWORD *)a4 + 1) = *((_OWORD *)v14 + 2);
  *((_OWORD *)a4 + 2) = *((_OWORD *)v14 + 3);
  *((_OWORD *)a4 + 3) = *((_OWORD *)v14 + 4);
LABEL_25:
  v18 = *a4;
  if ( (void *volatile)a2 < *v13 || a2 >= (unsigned __int64)v18 )
    return 0;
  *a1 = (unsigned __int64)*v13;
  *a3 = (unsigned __int64)v18;
  return 1;
}
