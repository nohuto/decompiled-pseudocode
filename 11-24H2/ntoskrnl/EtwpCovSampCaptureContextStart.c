/*
 * XREFs of EtwpCovSampCaptureContextStart @ 0x1407B23EC
 * Callers:
 *     EtwpCoverageSamplerStart @ 0x1407B3198 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ExSaAllocate @ 0x14026E1D4 (ExSaAllocate.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 *     EtwpCovSampLookasideGrow @ 0x1404ED000 (EtwpCovSampLookasideGrow.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwSetInformationThread @ 0x1406A7550 (ZwSetInformationThread.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1407B2A74 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1407B2B08 (EtwpCovSampLookasideInitialize.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1407B2C8C (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1407B2D28 (EtwpCovSampStrideSamplerInitialize.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB0FE4 (EtwpCovSampCaptureFreeLookasides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCovSampCaptureContextStart(_DWORD *a1)
{
  PVOID *v1; // rdi
  PVOID *Pool2; // rax
  int v4; // ebx
  volatile __int32 **v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rax
  int v12; // ebx
  ULONG MaximumProcessorCount; // eax
  ULONG v14; // r15d
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  _QWORD *v19; // rbx
  bool v20; // zf
  int v21; // eax
  volatile __int32 *v22; // r15
  HANDLE Handle; // [rsp+58h] [rbp-9h] BYREF
  __int64 v25; // [rsp+60h] [rbp-1h]
  ULONG v26; // [rsp+68h] [rbp+7h]
  PVOID Object; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+78h] [rbp+17h]
  _DWORD ThreadInformation[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (PVOID *)qword_140EFEFA8;
  Handle = 0LL;
  if ( !qword_140EFEFA8 )
  {
    Pool2 = (PVOID *)ExAllocatePool2(0x40uLL, 0x540uLL, 0x56777445u);
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
    qword_140EFEFA8 = (__int64)v1;
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
    v9 = v1[165];
    if ( !v9 || !v1[166] )
    {
      v4 = -1073741670;
      v10 = (__int64 *)(v1 + 1);
      goto LABEL_12;
    }
    v1[164] = v9;
    v1[167] = (PVOID)(unsigned int)ExGenRandom(0, v6, v7, v8);
  }
  v10 = (__int64 *)(v1 + 1);
  if ( v1[1] == (PVOID)-1LL )
  {
    v11 = ExSaAllocate(344LL, 0);
    if ( v11 == -1 )
    {
      v4 = -1073741670;
      goto LABEL_12;
    }
    *v10 = v11;
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
    if ( *v10 != -1 )
      EtwpCovSampCaptureFreeLookasides(v1);
    goto LABEL_31;
  }
LABEL_19:
  v12 = *a1 & 0x200;
  KeSetBasePriorityThread((PKTHREAD)*v1, (v12 != 0) - 1);
  *((_DWORD *)v1 + 326) = v12 != 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v14 = MaximumProcessorCount;
  v26 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v25 = 0LL;
    v28 = MaximumProcessorCount;
    v15 = 0LL;
    do
    {
      v16 = ((unsigned __int64)*v10 >> 4) & 0x1FF;
      v17 = ((unsigned int)*v10 >> 13) & 0x3FFFF;
      _BitScanReverse(&v18, v17);
      LODWORD(v25) = v18 - 2;
      v19 = (_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + ExSaPageArrays) + 8LL * (v18 - 2))
                                  + 8LL * (v17 ^ (1 << v18))
                                  + 8)
                      + 8 * v16
                      + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      memset_0(v19 + 1, 0, 0x148uLL);
      *v19 = 0LL;
      EtwpCovSampLookasideInitialize(v1, v19 + 2, v1 + 80);
      EtwpCovSampLookasideInitialize(v1, v19 + 10, v1 + 90);
      EtwpCovSampStrideSamplerInitialize(v19 + 18, (unsigned int)a1[10], (unsigned int)a1[11]);
      EtwpCovSampStrideSamplerInitialize(v19 + 23, (unsigned int)a1[12], (unsigned int)a1[13]);
      EtwpCovSampStrideSamplerInitialize(v19 + 28, (unsigned int)a1[14], (unsigned int)a1[15]);
      EtwpCovSampStrideSamplerInitialize(v19 + 33, (unsigned int)a1[16], (unsigned int)a1[17]);
      v20 = v28-- == 1;
      v15 += 8LL;
    }
    while ( !v20 );
    v14 = v26;
    v5 = (volatile __int32 **)(v1 + 118);
  }
  EtwpCovSampLookasideControlInitialize(
    v1,
    v1 + 100,
    EtwpCovSampCaptureAllocateSampleBuffer,
    (3 * a1[7] * v14) >> 2,
    a1[7] * v14);
  EtwpCovSampLookasideInitialize(v1, v1 + 110, v1 + 100);
  v21 = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 266) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v1 + 267) = v21;
  *((_DWORD *)v1 + 322) = 0;
  *((_DWORD *)v1 + 324) = a1[18];
  *((_DWORD *)v1 + 325) = a1[6];
  _InterlockedExchange((volatile __int32 *)v1 + 320, 1);
  v22 = *v5;
  *((_DWORD *)v1 + 321) = 0;
  while ( v22 != (volatile __int32 *)v5 )
  {
    _InterlockedExchange(v22 + 6, 1);
    *((_DWORD *)v22 + 7) = 0;
    while ( *((_DWORD *)v22 + 9) < *(_DWORD *)(*((_QWORD *)v22 + 2) + 56LL)
         && *((_DWORD *)v22 + 9) < *((_DWORD *)v22 + 10) )
    {
      v4 = EtwpCovSampLookasideGrow((__int64)v1, (__int64)(v22 - 4));
      if ( v4 < 0 )
        goto LABEL_12;
    }
    v22 = *(volatile __int32 **)v22;
  }
  v4 = 0;
LABEL_31:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v4;
}
