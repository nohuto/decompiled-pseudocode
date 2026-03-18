/*
 * XREFs of PerfLogImageUnload @ 0x1408E6808
 * Callers:
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAreAllApcsDisabled @ 0x1403C3440 (KeAreAllApcsDisabled.c)
 *     EtwpTraceImageUnload @ 0x1403C4AF8 (EtwpTraceImageUnload.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1408E6A9C (EtwpCoverageSamplerUnloadImage.c)
 *     FsRtlReleaseFileNameInformation @ 0x140A13E20 (FsRtlReleaseFileNameInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        void *a2,
        void *a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 v13; // rdi
  int v14; // esi
  unsigned __int64 v15; // rax
  __int64 Pool2; // r14
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int16 *v19; // rcx
  int v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v23[5]; // [rsp+68h] [rbp-50h] BYREF

  v13 = 0LL;
  v21 = 0LL;
  v23[0] = 0LL;
  v22 = 0LL;
  v14 = 0;
  v20 = 0;
  if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4844) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage(a3, a4, a5);
  if ( a3 )
  {
    v15 = RtlImageNtHeader(a4);
    if ( v15 )
    {
      a6 = *(_DWORD *)(v15 + 88);
      v14 = *(_DWORD *)(v15 + 8);
      v20 = v14;
      v13 = *(_QWORD *)(v15 + 48);
      v21 = v13;
    }
  }
  if ( a2 )
  {
    if ( a9 || KeAreAllApcsDisabled() )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        PsReferenceSiloContext(a3);
        PsReferenceSiloContext(a2);
        *(_QWORD *)(Pool2 + 88) = a2;
        *(_QWORD *)(Pool2 + 96) = a3;
        *(_QWORD *)(Pool2 + 104) = a4;
        *(_QWORD *)(Pool2 + 112) = a5;
        *(_DWORD *)(Pool2 + 120) = a6;
        *(_DWORD *)(Pool2 + 124) = v14;
        *(_DWORD *)(Pool2 + 128) = a7;
        *(_DWORD *)(Pool2 + 132) = a8;
        *(_QWORD *)(Pool2 + 136) = v13;
        KeInitializeApc(
          Pool2,
          (__int64)KeGetCurrentThread(),
          0,
          (__int64)xHalTimerWatchdogStop,
          (__int64)EtwpCancelTraceImageUnloadApc,
          (__int64)EtwpTraceImageUnloadApc,
          0,
          Pool2);
        if ( (unsigned __int8)KeInsertQueueApc(Pool2, 0LL, 0LL, 0) )
          return;
        ExFreePoolWithTag((PVOID)Pool2, 0);
        ObfDereferenceObject(a2);
        ObfDereferenceObject(a3);
        v13 = v21;
        v14 = v20;
      }
      v17 = 512LL;
    }
    else
    {
      v17 = 1024LL;
    }
    if ( FltMgrCallbacks )
    {
      v18 = guard_dispatch_icall_no_overrides(a2, v17, v23, &v22);
      v19 = (unsigned __int16 *)v23;
      if ( v18 < 0 )
        v19 = a1;
      a1 = v19;
    }
  }
  EtwpTraceImageUnload(a1, (__int64)a3, a4, a5, a6, v14, a7, a8, v13, a9);
  if ( v22 )
    FsRtlReleaseFileNameInformation();
}
