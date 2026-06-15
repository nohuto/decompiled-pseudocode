/*
 * XREFs of ?QueryService@CAPOServiceProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x140036CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140036E64 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterfac.c)
 */

__int64 __fastcall CAPOServiceProvider::QueryService(
        CAPOServiceProvider *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a4 )
  {
    v7 = -2147467261;
    v6 = 19LL;
    goto LABEL_10;
  }
  *a4 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_AudioProcessingObjectLoggingService.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_AudioProcessingObjectLoggingService.Revision )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_AudioProcessingObjectLoggingService.SubAuthority;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_AudioProcessingObjectRTQueue.Revision;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_AudioProcessingObjectRTQueue.Revision )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_AudioProcessingObjectRTQueue.SubAuthority;
    if ( v5 )
    {
      v6 = 35LL;
LABEL_9:
      v7 = -2147418113;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v10 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data1 )
      v10 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data4;
    if ( v10 )
    {
      v6 = 30LL;
      goto LABEL_9;
    }
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>>(
           this,
           a3,
           a4);
    if ( v7 < 0 )
    {
      v6 = 31LL;
      goto LABEL_10;
    }
  }
  else
  {
    v9 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_698f0107_1745_4708_95a5_d84478a62a65.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_698f0107_1745_4708_95a5_d84478a62a65.Data1 )
      v9 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_698f0107_1745_4708_95a5_d84478a62a65.Data4;
    if ( v9 )
    {
      v6 = 25LL;
      goto LABEL_9;
    }
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>>(
           this,
           a3,
           a4);
    if ( v7 < 0 )
    {
      v6 = 26LL;
      goto LABEL_10;
    }
  }
  return 0LL;
}
