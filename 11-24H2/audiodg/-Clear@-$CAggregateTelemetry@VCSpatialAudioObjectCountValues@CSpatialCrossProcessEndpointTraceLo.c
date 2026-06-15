/*
 * XREFs of ?Clear@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXXZ @ 0x14008CC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??0?$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z @ 0x14003F590 (--0-$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::Clear(
        __int64 a1)
{
  __int64 v2; // rcx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  CSAutoLock<1>::CSAutoLock<1>(&v3, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_BYTE *)(a1 + 16) = 0;
  CSAutoLock<1>::~CSAutoLock<1>(&v3);
}
