/*
 * XREFs of ?Log@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x14008D320
 * Callers:
 *     ?Log@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x14008D390 (-Log@-$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpoin.c)
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??0?$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z @ 0x14003F890 (--0-$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::Log(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  CSAutoLock<1>::CSAutoLock<1>(&v5, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  CSAutoLock<1>::~CSAutoLock<1>(&v5);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
}
