/*
 * XREFs of ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x14012B09C
 * Callers:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x14012AC48 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x14012AEF0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 */

bool __fastcall CTouchProcessor::IsTouchDevice(CTouchProcessor *this, __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al
  __int64 v4; // rcx
  int v5; // edx

  v2 = HMValidateHandleNoSecure(a2, 19);
  result = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 456);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 24);
      return (unsigned int)(v5 - 1) <= 2 || v5 == 4;
    }
  }
  return result;
}
