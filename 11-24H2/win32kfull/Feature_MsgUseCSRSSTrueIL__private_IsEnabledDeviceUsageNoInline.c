/*
 * XREFs of Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B17A4
 * Callers:
 *     _PostMessageCheckIL @ 0x140085AB8 (_PostMessageCheckIL.c)
 *     _PostTransformableMessageIL @ 0x140118950 (_PostTransformableMessageIL.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x140140F70 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140165890 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x14017E558 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     NtUserPostThreadMessage @ 0x140244040 (NtUserPostThreadMessage.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback @ 0x1402B17DC (Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback.c)
 */

__int64 Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MsgUseCSRSSTrueIL__private_featureState & 0x10) != 0 )
    return Feature_MsgUseCSRSSTrueIL__private_featureState & 1;
  else
    return Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback(
             (unsigned int)Feature_MsgUseCSRSSTrueIL__private_featureState,
             3LL);
}
