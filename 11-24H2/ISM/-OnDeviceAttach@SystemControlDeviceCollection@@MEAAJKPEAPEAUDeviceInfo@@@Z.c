/*
 * XREFs of ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005EFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F0C0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??$_Insert_or_assign@AEBKV?$array@G$0BE@@std@@@?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x18005F514 (--$_Insert_or_assign@AEBKV-$array@G$0BE@@std@@@-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnDeviceAttach(
        SystemControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[16]; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v11[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = a2;
  v4 = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( v4 >= 0 )
  {
    v12 = 0LL;
    memset(v11, 0, sizeof(v11));
    std::unordered_map<unsigned long,std::array<unsigned short,20>>::_Insert_or_assign<unsigned long const &,std::array<unsigned short,20>>(
      (char *)this + 2760,
      v10,
      &v9,
      v11);
    v6 = 0LL;
    v4 = -2147023728;
    while ( (unsigned int)v6 < 0x100 )
    {
      v7 = *((_QWORD *)this + v6 + 78);
      if ( v7 && (!*(_QWORD *)(v7 + 16) || *(_DWORD *)(v7 + 40) == v9) )
        return 0LL;
      v6 = (unsigned int)(v6 + 1);
    }
    v5 = 85LL;
  }
  else
  {
    v5 = 76LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
    (const char *)(unsigned int)v4,
    v9);
  return (unsigned int)v4;
}
