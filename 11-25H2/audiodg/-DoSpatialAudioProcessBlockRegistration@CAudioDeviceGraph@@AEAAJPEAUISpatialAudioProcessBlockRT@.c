/*
 * XREFs of ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x140030124
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14002F178 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(
        CAudioDeviceGraph *this,
        struct ISpatialAudioProcessBlockRT *a2,
        struct IAdaptiveSpatialAudioRenderer *a3,
        char a4)
{
  __int64 v4; // rax
  __int64 v8; // rax
  CAudioDeviceGraph *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  v4 = *(_QWORD *)a2;
  v10 = 0LL;
  (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *, CAudioDeviceGraph **))(v4 + 96))(a2, &v10);
  v8 = *(_QWORD *)a3;
  if ( a4 )
    return (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, struct ISpatialAudioProcessBlockRT *))(v8 + 24))(
             a3,
             a2);
  else
    return (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, struct ISpatialAudioProcessBlockRT *))(v8 + 32))(
             a3,
             a2);
}
