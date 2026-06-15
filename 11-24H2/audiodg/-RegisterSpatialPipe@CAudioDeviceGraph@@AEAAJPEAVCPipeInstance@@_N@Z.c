/*
 * XREFs of ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14002EE78
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002E170 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x14002F53C (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14002EFE4 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14002F11C (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     ?GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z @ 0x14002F354 (-GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z.c)
 *     ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x14002FE24 (-DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe(CPipeInstance **this, struct CPipeInstance *a2, bool a3)
{
  int v5; // ebx
  CAudioDeviceGraph *v7; // rcx
  CAudioDeviceGraph *v8; // rcx
  struct IVirtualSurround *v9; // [rsp+20h] [rbp-10h] BYREF
  struct ISpatialAudioStreamProcessor *v10; // [rsp+28h] [rbp-8h] BYREF
  struct IAdaptiveSpatialAudioRenderer *v11; // [rsp+50h] [rbp+20h] BYREF
  struct ISpatialAudioProcessBlockRT *v12; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0;
  v11 = 0LL;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(this[20], &v11) >= 0 )
  {
    v10 = 0LL;
    if ( (int)CPipeInstance::GetSpatialAudioStreamProcessor(a2, &v10) < 0 )
      goto LABEL_3;
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct ISpatialAudioStreamProcessor *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v10 + 24LL))(
           v10,
           &v12);
    if ( v5 >= 0 )
      v5 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v8, v12, v11, a3);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v12);
    if ( v5 >= 0 )
    {
LABEL_3:
      v9 = 0LL;
      if ( (int)CPipeInstance::GetVirtualSurroundAPO(a2, &v9) >= 0 )
      {
        v12 = 0LL;
        v5 = (*(__int64 (__fastcall **)(struct IVirtualSurround *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v9 + 24LL))(
               v9,
               &v12);
        if ( v5 >= 0 )
          v5 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v7, v12, v11, a3);
        if ( v12 )
          (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v9 )
        (*(void (__fastcall **)(struct IVirtualSurround *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v10 )
      (*(void (__fastcall **)(struct ISpatialAudioStreamProcessor *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v5 < 0 )
      AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::RegisterSpatialPipe", 0x539u, v5);
  }
  if ( v11 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v5;
}
