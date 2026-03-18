/*
 * XREFs of ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x14023FF60
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     PostPointerEventMessage @ 0x14012D8F0 (PostPointerEventMessage.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x14023D790 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall ShouldReceiveTouchpadMessages(const struct tagTHREADINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  char v7; // bl
  __int64 v9; // rax

  v7 = 0;
  if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
    return (unsigned int)IsTouchpadCapable(a1, a2) != 0;
  if ( (*((_QWORD *)a1 + 170) & 0x2000002000LL) != 0 || *((_WORD *)a1 + 633) )
    return 1;
  if ( a2 )
  {
    LOBYTE(v6) = 1;
    v9 = HMValidateHandleNoSecure(a2, v6);
    if ( v9 )
      return (*(_DWORD *)(v9 + 380) & 0x800) != 0;
  }
  return v7;
}
