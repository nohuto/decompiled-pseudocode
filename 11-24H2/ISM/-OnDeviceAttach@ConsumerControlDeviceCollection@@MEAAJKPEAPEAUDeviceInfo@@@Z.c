/*
 * XREFs of ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DB5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F0C0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180067F64 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 *     ??$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@?$unordered_map@KUUsageList@MobileButtonDeviceCollection@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@4@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x1800D9A98 (--$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@-$unordered_map@KUUsageLis.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceAttach(
        ConsumerControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v5; // rdx
  _OWORD *v7; // rax
  int v8; // r8d
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF
  struct RIMDevice *v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a2;
  HIDWORD(v9) = 0;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( Device < 0 )
  {
    v5 = 92LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v7 = operator new[](0x28uLL);
  *(_QWORD *)&v9 = v7;
  DWORD2(v9) = 20;
  *v7 = 0LL;
  v7[1] = 0LL;
  *((_QWORD *)v7 + 4) = 0LL;
  std::unordered_map<unsigned long,MobileButtonDeviceCollection::UsageList>::_Insert_or_assign<unsigned long const &,MobileButtonDeviceCollection::UsageList &>(
    (float *)this + 690,
    (__int64)v10,
    &v12,
    &v9);
  Device = RIMDeviceCollection::FindDevice(this, v12, 0LL, &v13, 0LL);
  if ( Device < 0 )
  {
    v5 = (unsigned int)(v8 + 108);
    goto LABEL_3;
  }
  return 0LL;
}
