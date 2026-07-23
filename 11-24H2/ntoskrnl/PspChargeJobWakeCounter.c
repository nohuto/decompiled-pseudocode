/*
 * XREFs of PspChargeJobWakeCounter @ 0x1409AECC0
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PspRequestDeferredJobNotification @ 0x1404829E8 (PspRequestDeferredJobNotification.c)
 *     EtwTraceWakeEvent @ 0x1406F8978 (EtwTraceWakeEvent.c)
 *     EtwTraceWakeCounter @ 0x140897E48 (EtwTraceWakeCounter.c)
 */

void __fastcall PspChargeJobWakeCounter(_QWORD *Object, char *a2, int a3, __int64 a4, char a5, __int64 a6, __int64 a7)
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
  _BYTE v20[12]; // [rsp+44h] [rbp-64h]

  v7 = a5;
  CurrentThread = KeGetCurrentThread();
  v9 = Object;
  *(_DWORD *)&v20[8] = 0;
  v10 = (char *)Object;
  v11 = a5 & 4;
  *(_QWORD *)v20 = (unsigned int)(1 << a3);
  v12 = a3;
  if ( (a5 & 1) != 0 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    *(_QWORD *)&v20[4] = Object[164];
    ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)&v20[4] + 56LL), 1u);
    while ( *(_QWORD *)&v20[4] != v9[164] )
    {
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)&v20[4] + 56LL));
      *(_QWORD *)&v20[4] = v9[164];
      ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)&v20[4] + 56LL), 1u);
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
        if ( (xmmword_140FC6B50 & 0x200) != 0 )
        {
          EtwTraceWakeCounter((__int64)v9, 0, a3, 0LL, v13, a6, a7);
          EtwTraceWakeCounter((__int64)v9, 1, a3, 0LL, v13, a6, a7);
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
      if ( (*((_DWORD *)v10 + 388) & 0x800) != 0 && !v14 && (HIDWORD(v15) & *(_DWORD *)v20) == 0 )
      {
        v16 = 0;
        _InterlockedOr((volatile signed __int32 *)v10 + 298, *(unsigned int *)v20);
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
        if ( (*(_DWORD *)v20 & HIDWORD(v15)) != 0 && !v14
          || (*(_DWORD *)v20 & (unsigned int)v15) != 0 && (v18 & 2) != 0 && (v14 == 1 || v14 > 1 && (v18 & 1) != 0) )
        {
          ObfReferenceObjectWithTag(v10, 0x6F4E7350u);
          if ( (xmmword_140FC6B50 & 0x400) != 0 && (v18 & 4) != 0 && v14 == 1 )
            EtwTraceWakeEvent((__int64)v10, a3);
          v13 = v14;
          if ( !PspRequestDeferredJobNotification((signed __int64)v10, 0x2000u) )
            ObfDereferenceObjectWithTag(v10, 0x6F4E7350u);
        }
      }
      v9 = Object;
      v11 = a5 & 4;
      v7 = a5;
    }
    if ( (xmmword_140FC6B50 & 0x2000) != 0 )
      EtwTraceWakeCounter((__int64)v10, v11 != 0, a3, a4, v13, a6, a7);
    v10 = (char *)*((_QWORD *)v10 + 163);
    if ( v10 == a2 )
      break;
    v12 = a3;
  }
  while ( (*((_DWORD *)v10 + 388) & 0x1000) != 0 );
  if ( (a5 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)&v20[4] + 56LL));
    if ( CurrentThread )
    {
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
