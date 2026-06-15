/*
 * XREFs of ?QueryInterface@CAPOServiceProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140036AD0
 * Callers:
 *     ?QueryInterface@CAPOServiceProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140063790 (-QueryInterface@CAPOServiceProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOServiceProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400637A0 (-QueryInterface@CAPOServiceProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIServiceProviderWrapper@@UIServiceProvider@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioProcessingObjectLoggingService@@UIAudioProcessingObjectRTQueueService@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140036B64 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterfac.c)
 */

__int64 __fastcall CAPOServiceProvider::QueryInterface(CAPOServiceProvider *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_698f0107_1745_4708_95a5_d84478a62a65.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_698f0107_1745_4708_95a5_d84478a62a65.Data1 )
      v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_698f0107_1745_4708_95a5_d84478a62a65.Data4;
    if ( !v3 )
      goto LABEL_10;
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_acd65e2f_955b_4b57_b9bf_ac297bb752c9.Data4;
    if ( v4 )
    {
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IServiceProviderWrapper,IServiceProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioProcessingObjectLoggingService,IAudioProcessingObjectRTQueueService>>(
             this,
             a2,
             a3);
      if ( v5 >= 0 )
        return 0LL;
      v7 = 139LL;
    }
    else
    {
LABEL_10:
      v5 = -2147467262;
      v7 = 137LL;
    }
  }
  else
  {
    v5 = -2147467261;
    v7 = 135LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
