/*
 * XREFs of Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z @ 0x140077844 (-PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z.c)
 *     ?FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z @ 0x140084894 (-FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     AllocateHidData @ 0x14012F38C (AllocateHidData.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AEB4 (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z @ 0x140182284 (-GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z.c)
 *     _PostThreadMessageEx @ 0x1401A04CC (_PostThreadMessageEx.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401C5C24 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 * Callees:
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback @ 0x140272554 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback.c)
 */

__int64 Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixRawInputSendMessageForwarding__private_featureState & 0x10) != 0 )
    return Feature_FixRawInputSendMessageForwarding__private_featureState & 1;
  else
    return Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback(
             (unsigned int)Feature_FixRawInputSendMessageForwarding__private_featureState,
             3LL);
}
