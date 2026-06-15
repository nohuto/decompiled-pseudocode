/*
 * XREFs of ?AddData@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXW4SpatialObjectCountTypes@@I@Z @ 0x140039E40
 * Callers:
 *     ?AddData@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXW4SpatialObjectCountTypes@@I_N1@Z @ 0x14003C970 (-AddData@-$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEnd.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::AddData(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rcx

  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 24);
  v7 = 0LL;
  if ( v6 )
  {
    v7 = v6;
    EnterCriticalSection(v6);
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, a2, a3);
    *(_BYTE *)(a1 + 16) = 1;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
}
