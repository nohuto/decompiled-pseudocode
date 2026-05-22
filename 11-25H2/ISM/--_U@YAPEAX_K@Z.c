/*
 * XREFs of ??_U@YAPEAX_K@Z @ 0x18009E57C
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18000B874 (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18000BDF4 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18001E650 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x180021000 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x18002F3FC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z.c)
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002F668 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x180030308 (-CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA-AUInputInteropMessageStorage@1@PEBUPoi.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@@Z @ 0x18003142C (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x180031AC8 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18004D68C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18004DBDC (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x18005BF80 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F2B0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180065F88 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z @ 0x18006DED0 (--0InputInteropMessageStorage@Win32kInterop@@QEAA@H@Z.c)
 *     ??$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3@@Z @ 0x180083B14 (--$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x1800970AC (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?CopyConfig@InputConfigContextProvider@@AEAA?AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z @ 0x180099E98 (-CopyConfig@InputConfigContextProvider@@AEAA-AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z.c)
 *     ?GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ @ 0x1800D7088 (-GetDevicePath@MobileButtonDeviceCollection@@AEAAPEAGXZ.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x1800D71F4 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D7420 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D83E0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _lambda_d47f631da3751d72c8a8e135519addbc_::operator() @ 0x1800DB068 (_lambda_d47f631da3751d72c8a8e135519addbc_--operator().c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800DD5D8 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x1800DDC34 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800DE14C (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800DE4C8 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x180107718 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ??$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z @ 0x180112644 (--$CopyArray@UtagPOINT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagPOINT@@IPEAPEAU3@@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x180113B8C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ??$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z @ 0x180141E60 (--$CopyArray@UtagRECT@@@Util@BamoImpl@Microsoft@@YAJPEBUtagRECT@@IPEAPEAU3@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180181E50 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x180181FA8 (-FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z.c)
 *     ?QueryHardwareProperties@PenHapticInterface@@AEAAJXZ @ 0x18018A9D8 (-QueryHardwareProperties@PenHapticInterface@@AEAAJXZ.c)
 *     ?QueryIsHighLatencyDevice@PenHapticInterface@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18018ACF4 (-QueryIsHighLatencyDevice@PenHapticInterface@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1)
{
  return operator new(a1);
}
