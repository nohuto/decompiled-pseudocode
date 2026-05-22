/*
 * XREFs of ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x1800D71F4
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D7420 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800DCC1C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::IsMobile0DButtonDevice(
        MobileButtonDeviceCollection *this,
        struct HIDDevice *a2,
        bool *a3)
{
  int v3; // edi
  unsigned int v4; // r14d
  int HIDCapabilities; // eax
  unsigned int v6; // ebx
  struct _HIDP_CAPS *v8; // r15
  struct _HIDP_CAPS *v9; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rsi
  USAGE *v11; // r13
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // r12
  __int64 v13; // rdi
  unsigned int v14; // ebx
  NTSTATUS SpecificButtonCaps; // eax
  const struct std::nothrow_t *v16; // rdx
  char v17; // di
  USHORT ButtonCapsLength; // [rsp+40h] [rbp-40h] BYREF
  struct _HIDP_CAPS *v19; // [rsp+48h] [rbp-38h] BYREF
  int v20; // [rsp+50h] [rbp-30h]
  PHIDP_PREPARSED_DATA v21; // [rsp+58h] [rbp-28h]
  bool *v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v22 = a3;
  v23 = 0LL;
  v21 = (PHIDP_PREPARSED_DATA)*((_QWORD *)a2 + 6);
  LOBYTE(v3) = 0;
  v19 = 0LL;
  v20 = v3;
  v4 = 0;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, &v19);
  v6 = HIDCapabilities;
  if ( HIDCapabilities >= 0 )
  {
    v8 = v19;
    v9 = (struct _HIDP_CAPS *)operator new[](saturated_mul(v19->NumberInputButtonCaps, 0x48uLL));
    PreparsedData = v21;
    v11 = (USAGE *)&v23;
    ButtonCaps = (struct _HIDP_BUTTON_CAPS *)v9;
    v19 = v9;
    LODWORD(v23) = 3866665;
    WORD2(v23) = 60;
    v13 = 3LL;
    do
    {
      ButtonCapsLength = v8->NumberInputButtonCaps;
      v14 = v4;
      memset_0(ButtonCaps, 0, 72LL * ButtonCapsLength);
      SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                             HidP_Input,
                             7u,
                             0,
                             *v11++,
                             ButtonCaps,
                             &ButtonCapsLength,
                             PreparsedData);
      ++v4;
      if ( SpecificButtonCaps < 0 )
        v4 = v14;
      --v13;
    }
    while ( v13 );
    v17 = v20;
    if ( v8->NumberInputButtonCaps && v8->NumberInputButtonCaps <= 4u && v4 >= 2 )
      v17 = 1;
    if ( v22 )
      *v22 = v17;
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v19, v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return v6;
  }
}
