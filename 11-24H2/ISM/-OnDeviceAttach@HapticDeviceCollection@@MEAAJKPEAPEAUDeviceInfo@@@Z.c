/*
 * XREFs of ?OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DFAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F0C0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180067F64 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A75BC (-GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ.c)
 *     ?OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z @ 0x1800C9700 (-OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticDeviceCollection::OnDeviceAttach(
        HapticDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  int v7; // r8d
  struct RIMDevice *v8; // r14
  int v9; // eax
  size_t v11; // rax
  struct RIMDevice *v12; // rax
  unsigned __int16 *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  const struct std::nothrow_t *v17; // rdx
  HapticProcessor *HapticProcessor; // rax
  int v19; // eax
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct RIMDevice *v24; // [rsp+90h] [rbp+30h] BYREF

  if ( a3 )
  {
    *a3 = 0LL;
    Device = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
    if ( Device < 0 )
    {
      v6 = 83LL;
      goto LABEL_3;
    }
    v24 = 0LL;
    Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v24, 0LL);
    if ( Device < 0 )
    {
      v6 = (unsigned int)(v7 + 89);
      goto LABEL_3;
    }
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    LODWORD(v20) = 4;
    v8 = v24;
    v9 = RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v24 + 2), &v20);
    if ( v9 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x5E,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
               (const char *)(unsigned int)v9);
    v11 = 2LL * DWORD2(v20);
    if ( !is_mul_ok(DWORD2(v20), 2uLL) )
      v11 = -1LL;
    v12 = (struct RIMDevice *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = (unsigned __int16 *)v12;
    v24 = v12;
    if ( v12 )
    {
      *(_QWORD *)&v21 = v12;
      v16 = RIMGetDeviceProperties(*((_QWORD *)this + 10), *((_QWORD *)v8 + 2), &v20);
      if ( v16 < 0 )
      {
        Device = wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)0x63,
                   (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
                   (const char *)(unsigned int)v16);
LABEL_20:
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v24, v17);
        return (unsigned int)Device;
      }
      HapticProcessor = ISMStatics::GetHapticProcessor();
      v19 = HapticProcessor::OnHapticInterfaceArrival(HapticProcessor, a2, v13);
      Device = v19;
      if ( v19 >= 0 )
      {
        Device = 0;
        goto LABEL_20;
      }
      v14 = (unsigned int)v19;
      v15 = 104LL;
    }
    else
    {
      Device = -2147024882;
      v14 = 2147942414LL;
      v15 = 97LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
      (const char *)v14);
    goto LABEL_20;
  }
  Device = -2147467261;
  v6 = 78LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
    (const char *)(unsigned int)Device);
  return (unsigned int)Device;
}
