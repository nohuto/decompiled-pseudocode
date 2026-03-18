/*
 * XREFs of ?PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z @ 0x140077844
 * Callers:
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1400777A0 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AE18 (-FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AEB4 (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140271D08 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall PrepareToReturnHidData(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // rcx
  struct tagHIDDATA *v4; // rdi
  struct tagHIDDATA *v5; // rax

  v3 = a2;
  LOBYTE(a2) = 18;
  v4 = (struct tagHIDDATA *)HMValidateHandleNoSecure(v3, a2);
  if ( v4 )
  {
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
    {
      FlushPostedRawInput(a1);
      v5 = UnlinkHidData(a1, v4, 0LL);
    }
    else
    {
      v5 = FlushPostedRawInputAndUnlinkThisOne(a1, v4, 0LL);
    }
    *((_QWORD *)a1 + 143) = v5;
  }
}
