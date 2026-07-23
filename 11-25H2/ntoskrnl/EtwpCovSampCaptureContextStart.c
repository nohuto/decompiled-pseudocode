/*
 * XREFs of EtwpCovSampCaptureContextStart @ 0x1407A2BCC
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x1407A3978 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x140460EA0 (InitializeSListHead.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 *     ExSaAllocate @ 0x14047B0DC (ExSaAllocate.c)
 *     EtwpCovSampLookasideGrow @ 0x1404EC090 (EtwpCovSampLookasideGrow.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x14069B2E0 (ZwSetInformationThread.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1407A3254 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1407A32E8 (EtwpCovSampLookasideInitialize.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1407A346C (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1407A3508 (EtwpCovSampStrideSamplerInitialize.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB1D00 (EtwpCovSampCaptureFreeLookasides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCovSampCaptureContextStart(_DWORD *a1)
{
  PVOID *v1; // rdi
  PVOID *Pool2; // rax
  int v4; // ebx
  volatile __int32 **v5; // r12
  PVOID v6; // rax
  __int64 *v7; // r14
  __int64 v8; // rax
  int v9; // ebx
  ULONG MaximumProcessorCount; // eax
  ULONG v11; // r15d
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // ecx
  _QWORD *v16; // rbx
  bool v17; // zf
  int v18; // eax
  volatile __int32 *v19; // r15
  HANDLE Handle; // [rsp+58h] [rbp-9h] BYREF
  __int64 v22; // [rsp+60h] [rbp-1h]
  ULONG v23; // [rsp+68h] [rbp+7h]
  PVOID Object; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+78h] [rbp+17h]
  _DWORD ThreadInformation[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (PVOID *)qword_140EFE908;
  Handle = 0LL;
  if ( !qword_140EFE908 )
  {
    Pool2 = (PVOID *)ExAllocatePool2(0x40uLL);
    v1 = Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741670;
      goto LABEL_31;
    }
    memset_0(Pool2, 0, 0x540uLL);
    v1[1] = (PVOID)-1LL;
    KeInitializeEvent((PRKEVENT)(v1 + 130), NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 122), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureRebalanceDpc, v1);
    InitializeSListHead((PSLIST_HEADER)v1 + 67);
    KeInitializeEvent((PRKEVENT)v1 + 46, NotificationEvent, 0);
    KeInitializeDpc((PRKDPC)(v1 + 141), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureQueueDpc, v1);
    KeInitializeDpc((PRKDPC)(v1 + 149), (PKDEFERRED_ROUTINE)EtwpCovSampCaptureCleanupDpc, v1);
    KeInitializeEvent((PRKEVENT)(v1 + 157), NotificationEvent, 0);
    *((_DWORD *)v1 + 323) = (*a1 >> 11) & 1;
    qword_140EFE908 = (__int64)v1;
  }
  v5 = (volatile __int32 **)(v1 + 118);
  v1[121] = v1 + 120;
  v1[119] = v1 + 118;
  v1[118] = v1 + 118;
  v1[120] = v1 + 120;
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 80,
    EtwpCovSampCaptureAllocateApc,
    (unsigned int)(3 * a1[9]) >> 2,
    a1[9]);
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 90,
    EtwpCovSampCaptureAllocateCaptureBuffer,
    (unsigned int)(3 * a1[8]) >> 2,
    a1[8]);
  if ( a1[19] )
  {
    EtwpCovSampStackHashTableAlloc(v1 + 165);
    EtwpCovSampStackHashTableAlloc(v1 + 166);
    v6 = v1[165];
    if ( !v6 || !v1[166] )
    {
      v4 = -1073741670;
      v7 = (__int64 *)(v1 + 1);
      goto LABEL_12;
    }
    v1[164] = v6;
    v1[167] = (PVOID)(unsigned int)ExGenRandom(0);
  }
  v7 = (__int64 *)(v1 + 1);
  if ( v1[1] == (PVOID)-1LL )
  {
    v8 = ExSaAllocate(344LL, 0);
    if ( v8 == -1 )
    {
      v4 = -1073741670;
      goto LABEL_12;
    }
    *v7 = v8;
  }
  if ( !*v1 )
  {
    v4 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, EtwpCovSampCaptureWorkerThread, v1, 0LL, 0LL);
    if ( v4 >= 0 )
    {
      Object = 0LL;
      ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      *v1 = Object;
      ThreadInformation[0] = 1;
      ThreadInformation[1] = 1;
      ThreadInformation[2] = 1;
      ZwSetInformationThread(Handle, ThreadPowerThrottlingState, ThreadInformation, 0xCu);
      goto LABEL_19;
    }
LABEL_12:
    if ( *v7 != -1 )
      EtwpCovSampCaptureFreeLookasides(v1);
    goto LABEL_31;
  }
LABEL_19:
  v9 = *a1 & 0x200;
  KeSetBasePriorityThread((PKTHREAD)*v1, (v9 != 0) - 1);
  *((_DWORD *)v1 + 326) = v9 != 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v11 = MaximumProcessorCount;
  v23 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v22 = 0LL;
    v25 = MaximumProcessorCount;
    v12 = 0LL;
    do
    {
      v13 = ((unsigned __int64)*v7 >> 4) & 0x1FF;
      v14 = ((unsigned int)*v7 >> 13) & 0x3FFFF;
      _BitScanReverse(&v15, v14);
      LODWORD(v22) = v15 - 2;
      v16 = (_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + ExSaPageArrays) + 8LL * (v15 - 2))
                                  + 8LL * (v14 ^ (1 << v15))
                                  + 8)
                      + 8 * v13
                      + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      memset_0(v16 + 1, 0, 0x148uLL);
      *v16 = 0LL;
      EtwpCovSampLookasideInitialize(v1, v16 + 2, v1 + 80);
      EtwpCovSampLookasideInitialize(v1, v16 + 10, v1 + 90);
      EtwpCovSampStrideSamplerInitialize(v16 + 18, (unsigned int)a1[10], (unsigned int)a1[11]);
      EtwpCovSampStrideSamplerInitialize(v16 + 23, (unsigned int)a1[12], (unsigned int)a1[13]);
      EtwpCovSampStrideSamplerInitialize(v16 + 28, (unsigned int)a1[14], (unsigned int)a1[15]);
      EtwpCovSampStrideSamplerInitialize(v16 + 33, (unsigned int)a1[16], (unsigned int)a1[17]);
      v17 = v25-- == 1;
      v12 += 8LL;
    }
    while ( !v17 );
    v11 = v23;
    v5 = (volatile __int32 **)(v1 + 118);
  }
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 100,
    EtwpCovSampCaptureAllocateSampleBuffer,
    (3 * a1[7] * v11) >> 2,
    a1[7] * v11);
  EtwpCovSampLookasideInitialize(v1, v1 + 110, v1 + 100);
  v18 = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 266) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 267) = v18;
  *((_DWORD *)v1 + 322) = 0;
  *((_DWORD *)v1 + 324) = a1[18];
  *((_DWORD *)v1 + 325) = a1[6];
  _InterlockedExchange((volatile __int32 *)v1 + 320, 1);
  v19 = *v5;
  *((_DWORD *)v1 + 321) = 0;
  while ( v19 != (volatile __int32 *)v5 )
  {
    _InterlockedExchange(v19 + 6, 1);
    *((_DWORD *)v19 + 7) = 0;
    while ( *((_DWORD *)v19 + 9) < *(_DWORD *)(*((_QWORD *)v19 + 2) + 56LL)
         && *((_DWORD *)v19 + 9) < *((_DWORD *)v19 + 10) )
    {
      v4 = EtwpCovSampLookasideGrow((__int64)v1, (__int64)(v19 - 4));
      if ( v4 < 0 )
        goto LABEL_12;
    }
    v19 = *(volatile __int32 **)v19;
  }
  v4 = 0;
LABEL_31:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v4;
}
