/*
 * XREFs of ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AEB4
 * Callers:
 *     ?PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z @ 0x140077844 (-PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017AE18 (-FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140272310 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 * Callees:
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

struct tagHIDDATA *__fastcall UnlinkHidData(
        struct tagTHREADINFO *a1,
        struct tagHIDDATA *a2,
        struct tagHIDDATA ***a3,
        __int64 a4)
{
  struct tagHIDDATA **i; // rcx
  struct tagHIDDATA *result; // rax

  if ( a3 )
    *a3 = 0LL;
  for ( i = (struct tagHIDDATA **)((char *)a1 + 1168); ; i = (struct tagHIDDATA **)((char *)result + 32) )
  {
    result = *i;
    if ( !*i )
      break;
    if ( result == a2 )
    {
      *i = (struct tagHIDDATA *)*((_QWORD *)a2 + 4);
      *((_QWORD *)a2 + 4) = 0LL;
      if ( a3 )
        *a3 = i;
      if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(i, a2, a3, a4) )
        *((_DWORD *)a2 + 12) |= 1u;
      return a2;
    }
  }
  return result;
}
