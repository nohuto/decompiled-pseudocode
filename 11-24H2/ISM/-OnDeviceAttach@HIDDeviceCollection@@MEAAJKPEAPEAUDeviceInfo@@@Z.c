/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F0C0
 * Callers:
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005EFE0 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D3840 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D7AB0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA610 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DB5D0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DBFC0 (-OnDeviceAttach@CallControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DC7C0 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DCC90 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DD6D0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DE7F0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF640 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DFAF0 (-OnDeviceAttach@HapticDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEAULegacyDeviceInfo@@@Z @ 0x18004DA14 (-reset@-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAXPEA.c)
 *     ?ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z @ 0x18005F3E4 (-ConvertHIDTLCIdToInputType@HIDDeviceCollection@@AEAAJGGPEAW4InputType@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800903BC (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800DFF90 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  _DWORD *v5; // rdi
  __int64 i; // rcx
  __int64 v7; // rsi
  __int64 v8; // r13
  int v9; // eax
  void *v10; // r12
  NTSTATUS Caps; // eax
  HIDDeviceCollection *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r8
  __int64 v20; // rdx
  _DWORD *v21; // rbx
  __int64 v22; // rdx
  const struct std::nothrow_t *v23; // rdx
  size_t Size; // [rsp+20h] [rbp-79h] BYREF
  _DWORD *v25; // [rsp+28h] [rbp-71h] BYREF
  void *v26; // [rsp+30h] [rbp-69h] BYREF
  int v27; // [rsp+38h] [rbp-61h]
  int v28; // [rsp+3Ch] [rbp-5Dh] BYREF
  _OWORD v29[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v30; // [rsp+60h] [rbp-39h]
  _HIDP_CAPS Capabilities; // [rsp+70h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v27 = a2;
  v28 = 0;
  LODWORD(Size) = 0;
  v25 = 0LL;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  if ( !a3 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL,
      Size);
  v5 = *a3;
  if ( !*a3 )
  {
    v21 = operator new(0x60CuLL);
    v26 = v21;
    memset_0(v21, 0, 0x60CuLL);
    v21[2] = 1548;
    std::unique_ptr<LegacyDeviceInfo>::reset((void **)&v25, v21);
    v5 = v25;
    if ( !v25 )
    {
      v14 = -2147024882;
      v20 = 243LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
        (const char *)v14,
        Size);
LABEL_17:
      std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(&v25);
      return v14;
    }
    a2 = v27;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x100 )
    {
      v14 = -2147023728;
      v20 = 248LL;
      goto LABEL_16;
    }
    v7 = *((_QWORD *)this + i + 78);
    if ( v7 )
    {
      if ( !*(_QWORD *)(v7 + 16) || *(_DWORD *)(v7 + 40) == a2 )
        break;
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, _QWORD))(*(_QWORD *)this + 104LL))(
          this,
          *((_QWORD *)this + i + 78)) )
  {
    v14 = -2147418113;
    v20 = 252LL;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(v7 + 16);
  v9 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v8, 0LL, &Size);
  if ( v9 < 0 )
  {
    v14 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x10B,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)v9,
            Size);
    goto LABEL_17;
  }
  v10 = operator new[]((unsigned int)Size);
  v26 = v10;
  memset_0(v10, 0, (unsigned int)Size);
  Caps = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v8, v10, &Size);
  if ( Caps < 0 )
  {
    v22 = 280LL;
LABEL_28:
    v14 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)v22,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
            (const char *)(unsigned int)Caps,
            Size);
LABEL_30:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v26, v23);
    goto LABEL_17;
  }
  memset_0(&Capabilities, 0, sizeof(Capabilities));
  Caps = HidP_GetCaps((PHIDP_PREPARSED_DATA)v10, &Capabilities);
  if ( Caps < 0 )
  {
    v22 = 286LL;
    goto LABEL_28;
  }
  v13 = HIDDeviceCollection::ConvertHIDTLCIdToInputType(
          v12,
          Capabilities.Usage,
          Capabilities.UsagePage,
          (enum InputType *)&v28);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v13,
      Size);
    goto LABEL_30;
  }
  v15 = Size;
  *(_QWORD *)(v7 + 48) = v10;
  *(_DWORD *)(v7 + 56) = v15;
  v26 = 0LL;
  *v5 = v27;
  v5[1] = v28;
  if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v8, v29) >= 0 )
  {
    *((_WORD *)v5 + 16) = WORD4(v29[0]);
    v17 = WORD4(v29[0]);
    *((_WORD *)v5 + 17) = WORD5(v29[0]);
    v18 = WORD5(v29[0]);
    *((_WORD *)v5 + 18) = WORD6(v29[0]);
    RawInputProvidersTelemetry::LogRawInputDeviceAttached(v5[1], v17, v18, WORD6(v29[0]));
  }
  *a3 = (struct DeviceInfo *)v5;
  v25 = 0LL;
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v26, v16);
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(&v25);
  return 0LL;
}
