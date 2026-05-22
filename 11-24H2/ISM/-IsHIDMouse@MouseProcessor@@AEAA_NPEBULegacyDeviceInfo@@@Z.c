/*
 * XREFs of ?IsHIDMouse@MouseProcessor@@AEAA_NPEBULegacyDeviceInfo@@@Z @ 0x180197F44
 * Callers:
 *     ?Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x180197D68 (-Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067C00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007F9D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetDeviceInstanceId@pnphelper@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800CB26C (-GetDeviceInstanceId@pnphelper@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?GetDeviceNode@pnphelper@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAK@Z @ 0x1800CB288 (-GetDeviceNode@pnphelper@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AE.c)
 *     ?GetDeviceGUIDProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01PEAU_GUID@@@Z @ 0x1800CB868 (-GetDeviceGUIDProperty@Details@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01PEAU_GUID@@@Z.c)
 */

bool __fastcall MouseProcessor::IsHIDMouse(MouseProcessor *this, const struct LegacyDeviceInfo *a2)
{
  __int64 v2; // r8
  int DeviceInstanceId; // ebx
  unsigned int (*v4)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *); // rcx
  const struct _DEVPROPKEY *v5; // r8
  __int64 v6; // rax
  bool v7; // bl
  DEVNODE pdnDevInst; // [rsp+20h] [rbp-60h] BYREF
  DEVNODE v10; // [rsp+28h] [rbp-58h] BYREF
  struct _GUID v11; // [rsp+30h] [rbp-50h] BYREF
  WCHAR pDeviceID[8]; // [rsp+50h] [rbp-30h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h]

  *(_OWORD *)pDeviceID = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  pDeviceID[0] = 0;
  std::wstring::wstring((__int64)&v11, (_WORD *)a2 + 38);
  DeviceInstanceId = pnphelper::GetDeviceInstanceId(&v11, (__int64)pDeviceID, v2);
  std::wstring::_Tidy_deallocate((__int64)&v11);
  if ( DeviceInstanceId < 0
    || (pdnDevInst = 0, (int)pnphelper::GetDeviceNode(pDeviceID, &pdnDevInst) < 0)
    || (v11 = 0LL, v10 = pdnDevInst, (int)Details::GetDeviceGUIDProperty(v4, (Adapters *)&v10, v5, (BYTE *)&v11) < 0) )
  {
    v7 = 0;
  }
  else
  {
    v6 = *(_QWORD *)&v11.Data1 - *(_QWORD *)&GUID_BUS_TYPE_HID.Data1;
    if ( *(_QWORD *)&v11.Data1 == *(_QWORD *)&GUID_BUS_TYPE_HID.Data1 )
      v6 = *(_QWORD *)v11.Data4 - *(_QWORD *)GUID_BUS_TYPE_HID.Data4;
    v7 = v6 == 0;
  }
  std::wstring::_Tidy_deallocate((__int64)pDeviceID);
  return v7;
}
