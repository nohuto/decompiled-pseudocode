/*
 * XREFs of ?GetDeviceNodeParent@HapticProcessor@@AEAAJPEBGAEAK@Z @ 0x1800C94C0
 * Callers:
 *     ?OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z @ 0x1800C9700 (-OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z.c)
 *     ?OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9904 (-OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007F9D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetDeviceInstanceId@pnphelper@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800CB26C (-GetDeviceInstanceId@pnphelper@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?GetDeviceNode@pnphelper@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAK@Z @ 0x1800CB288 (-GetDeviceNode@pnphelper@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AE.c)
 *     ?GetDeviceNodeParent@pnphelper@@YAJKAEAK@Z @ 0x1800CB314 (-GetDeviceNodeParent@pnphelper@@YAJKAEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticProcessor::GetDeviceNodeParent(HapticProcessor *this, unsigned __int16 *a2, unsigned int *a3)
{
  int DeviceInstanceId; // ebx
  int DeviceNode; // eax
  unsigned int *v6; // r8
  DEVNODE pdnDevInst; // [rsp+20h] [rbp-50h] BYREF
  WCHAR pDeviceID[8]; // [rsp+28h] [rbp-48h] BYREF
  __m128i si128; // [rsp+38h] [rbp-38h]
  _BYTE v11[32]; // [rsp+48h] [rbp-28h] BYREF

  *(_OWORD *)pDeviceID = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  pDeviceID[0] = 0;
  std::wstring::wstring((__int64)v11, a2);
  DeviceInstanceId = pnphelper::GetDeviceInstanceId(v11, pDeviceID);
  std::wstring::_Tidy_deallocate((__int64)v11);
  if ( DeviceInstanceId >= 0 )
  {
    pdnDevInst = 0;
    DeviceNode = pnphelper::GetDeviceNode(pDeviceID, &pdnDevInst);
    if ( DeviceNode >= 0 )
    {
      pnphelper::GetDeviceNodeParent(pdnDevInst, a3, v6);
      DeviceInstanceId = 0;
    }
    else
    {
      DeviceInstanceId = DeviceNode;
    }
  }
  std::wstring::_Tidy_deallocate((__int64)pDeviceID);
  return (unsigned int)DeviceInstanceId;
}
