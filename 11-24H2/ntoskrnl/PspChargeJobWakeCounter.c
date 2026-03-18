/*
 * XREFs of PspChargeJobWakeCounter @ 0x14088E1A0
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x14088FD70 (PspChargeProcessWakeCounter.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PspRequestDeferredJobNotification @ 0x140487978 (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x1406FAD38 (EtwTraceWakeEvent.c)
 *     EtwTraceWakeCounter @ 0x14088E54C (EtwTraceWakeCounter.c)
 */

void __fastcall PspChargeJobWakeCounter(
        _QWORD *Object,
        char *a2,
        int a3,
        signed __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r12
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v9; // rbx
  char *v10; // rsi
  int v11; // r15d
  int v12; // r14d
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  bool v16; // r12
  char v17; // al
  char v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  _BYTE v22[12]; // [rsp+44h] [rbp-64h]
  int v23; // [rsp+B0h] [rbp+8h]

  v23 = (int)Object;
  v7 = a5;
  CurrentThread = KeGetCurrentThread();
  v9 = Object;
  *(_DWORD *)&v22[8] = 0;
  v10 = (char *)Object;
  v11 = a5 & 4;
  *(_QWORD *)v22 = (unsigned int)(1 << a3);
  v12 = a3;
  if ( (a5 & 1) != 0 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    *(_QWORD *)&v22[4] = Object[164];
    ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)&v22[4] + 56LL), 1u);
    while ( *(_QWORD *)&v22[4] != v9[164] )
    {
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)&v22[4] + 56LL));
      *(_QWORD *)&v22[4] = v9[164];
      ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)&v22[4] + 56LL), 1u);
    }
  }
  do
  {
    if ( (a5 & 1) != 0 )
      ExAcquireResourceSharedLite((PERESOURCE)(v10 + 56), 1u);
    if ( v11 )
    {
      v13 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 147, a4);
      if ( *((_DWORD *)v10 + 266) )
      {
        if ( (v7 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        if ( (xmmword_140FC5B10 & 0x200) != 0 )
        {
          EtwTraceWakeCounter((_DWORD)v9, 0, a3, 0, v13, a6, a7);
          EtwTraceWakeCounter((_DWORD)v9, 1, a3, 0, v13, a6, a7);
        }
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v10 + 56));
    }
    else
    {
      v14 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)&v10[8 * v12 + 1120], a4);
      v15 = *((_QWORD *)v10 + 148);
      v16 = (*((_DWORD *)v10 + 388) & 0x800) != 0;
      if ( (*((_DWORD *)v10 + 388) & 0x800) != 0 && !v14 && (HIDWORD(v15) & *(_DWORD *)v22) == 0 )
      {
        v16 = 0;
        _InterlockedOr((volatile signed __int32 *)v10 + 298, *(unsigned int *)v22);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v10 + 56));
      v13 = v14;
      if ( v16 )
      {
        v17 = 6;
        if ( a4 <= 0 )
          v17 = 0;
        v18 = v17 | 1;
        if ( (a5 & 1) == 0 )
          v18 = v17;
        if ( (*(_DWORD *)v22 & HIDWORD(v15)) != 0 && !v14
          || (*(_DWORD *)v22 & (unsigned int)v15) != 0 && (v18 & 2) != 0 && (v14 == 1 || v14 > 1 && (v18 & 1) != 0) )
        {
          ObfReferenceObjectWithTag(v10, 0x6F4E7350u);
          if ( (xmmword_140FC5B10 & 0x400) != 0 && (v18 & 4) != 0 && v14 == 1 )
            EtwTraceWakeEvent((__int64)v10, a3);
          v13 = v14;
          if ( !PspRequestDeferredJobNotification((signed __int64)v10, 0x2000u) )
            ObfDereferenceObjectWithTag(v10, 0x6F4E7350u);
        }
      }
      LODWORD(v9) = v23;
      v11 = a5 & 4;
      v7 = a5;
    }
    if ( (xmmword_140FC5B10 & 0x2000) != 0 )
      EtwTraceWakeCounter((_DWORD)v10, v11 != 0, a3, a4, v13, a6, a7);
    v10 = (char *)*((_QWORD *)v10 + 163);
    if ( v10 == a2 )
      break;
    v12 = a3;
  }
  while ( (*((_DWORD *)v10 + 388) & 0x1000) != 0 );
  if ( (a5 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)&v22[4] + 56LL));
    if ( CurrentThread )
    {
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v20, v19);
      }
    }
  }
}
