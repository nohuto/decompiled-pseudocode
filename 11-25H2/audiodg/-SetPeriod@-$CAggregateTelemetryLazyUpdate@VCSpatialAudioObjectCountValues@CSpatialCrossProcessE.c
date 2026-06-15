/*
 * XREFs of ?SetPeriod@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_K@Z @ 0x14008DB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??0?$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z @ 0x14003F890 (--0-$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::SetPeriod(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  CSAutoLock<1>::CSAutoLock<1>(&v5, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  LOBYTE(v4) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v4);
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = GetTickCount64();
  CSAutoLock<1>::~CSAutoLock<1>(&v5);
}
