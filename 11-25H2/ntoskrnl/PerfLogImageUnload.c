/*
 * XREFs of PerfLogImageUnload @ 0x140A0BE8C
 * Callers:
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140256FE0 (KeAreAllApcsDisabled.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     EtwpTraceImageUnload @ 0x140447EF8 (EtwpTraceImageUnload.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlReleaseFileNameInformation @ 0x1409F5600 (FsRtlReleaseFileNameInformation.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140A0C120 (EtwpCoverageSamplerUnloadImage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        void *a2,
        void *a3,
        void *a4,
        __int64 a5,
        int CheckSum,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 ImageBase; // rdi
  int TimeDateStamp; // esi
  PIMAGE_NT_HEADERS v15; // rax
  __int64 Pool2; // r14
  int v17; // eax
  unsigned __int16 *v18; // rcx
  int v19; // [rsp+50h] [rbp-68h]
  __int64 v20; // [rsp+58h] [rbp-60h]
  __int128 v21; // [rsp+68h] [rbp-50h] BYREF

  ImageBase = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  TimeDateStamp = 0;
  v19 = 0;
  if ( EtwpHostSiloState != -4572 && (*(_DWORD *)(EtwpHostSiloState + 4572) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage(a3, a4, a5);
  if ( a3 )
  {
    v15 = RtlImageNtHeader(a4);
    if ( v15 )
    {
      CheckSum = v15->OptionalHeader.CheckSum;
      TimeDateStamp = v15->FileHeader.TimeDateStamp;
      v19 = TimeDateStamp;
      ImageBase = v15->OptionalHeader.ImageBase;
      v20 = ImageBase;
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
        *(_DWORD *)(Pool2 + 120) = CheckSum;
        *(_DWORD *)(Pool2 + 124) = TimeDateStamp;
        *(_DWORD *)(Pool2 + 128) = a7;
        *(_DWORD *)(Pool2 + 132) = a8;
        *(_QWORD *)(Pool2 + 136) = ImageBase;
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
        ImageBase = v20;
        TimeDateStamp = v19;
      }
    }
    if ( FltMgrCallbacks )
    {
      v17 = guard_dispatch_icall_no_overrides(a2);
      v18 = (unsigned __int16 *)&v21;
      if ( v17 < 0 )
        v18 = a1;
      a1 = v18;
    }
  }
  EtwpTraceImageUnload(a1, (__int64)a3, (__int64)a4, a5, CheckSum, TimeDateStamp, a7, a8, ImageBase, a9);
}
