/*
 * XREFs of ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E6FEC
 * Callers:
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800E7CAC (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800357D8 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008D5A4 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008D698 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x18008F314 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x18008F4AC (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800E59C4 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 *     ??1?$unique_ptr@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@U?$default_delete@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@std@@@std@@QEAA@XZ @ 0x1800E6C54 (--1-$unique_ptr@UAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@U-$default_delete@UAPP_MOUSE_.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E7B9C (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::Initialize(ConsumerControlNexusDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v2; // r15
  PnpDevice *v4; // rdi
  unsigned int v5; // esi
  int InterfacePath; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  void *v9; // rax
  PHIDP_PREPARSED_DATA *v10; // rdi
  const char *v11; // r9
  PHIDP_PREPARSED_DATA v12; // rax
  struct _HIDP_CAPS *v13; // rax
  struct _HIDP_CAPS *v14; // rbx
  NTSTATUS Caps; // eax
  unsigned __int64 NumberInputButtonCaps; // rcx
  size_t v17; // rax
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // rax
  const struct std::nothrow_t *v19; // rdx
  NTSTATUS SpecificButtonCaps; // eax
  const struct std::nothrow_t *v21; // rdx
  PnpDevice *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rbx
  char *v27; // rax
  ConsumerControlNexusDevice **v28; // rdx
  int v29; // eax
  void *v30[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int64 ButtonCapsLength; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+50h] BYREF
  struct _HIDP_BUTTON_CAPS *v34; // [rsp+A8h] [rbp+58h] BYREF

  v2 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((InputContext **)this + 2, (volatile signed __int32 *)a2);
  v4 = *v2;
  WindowsDeleteString(*((HSTRING *)this + 3));
  v5 = 0;
  *((_QWORD *)this + 3) = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)v4, (HSTRING *)this + 3);
  if ( InterfacePath < 0 )
  {
    v7 = 72LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
    return (unsigned int)InterfacePath;
  }
  InterfacePath = PnpDevice::OpenInterface(*v2, 0x80000000);
  if ( InterfacePath < 0 )
  {
    v7 = 74LL;
    goto LABEL_3;
  }
  v9 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)*v2 + 40);
  v10 = (PHIDP_PREPARSED_DATA *)((char *)this + 32);
  if ( !HidD_GetPreparsedData(v9, (PHIDP_PREPARSED_DATA *)this + 4) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x4E,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
             v11);
  v12 = *v10;
  if ( *((_WORD *)*v10 + 5) != 12 )
  {
    InterfacePath = -2147418113;
    v7 = 81LL;
    goto LABEL_3;
  }
  if ( *((_WORD *)v12 + 4) != 1 )
  {
    InterfacePath = -2147418113;
    v7 = 82LL;
    goto LABEL_3;
  }
  *((_QWORD *)this + 12) = *((unsigned __int16 *)v12 + 11);
  v13 = (struct _HIDP_CAPS *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v30[0] = v13;
  v14 = v13;
  if ( !v13 )
  {
    InterfacePath = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
LABEL_26:
    std::unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>::~unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>(v30);
    return (unsigned int)InterfacePath;
  }
  Caps = HidP_GetCaps(*v10, v13);
  if ( Caps < 0 )
  {
    InterfacePath = wil::details::in1diag3::Return_NtStatus(
                      retaddr,
                      (void *)0x58,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercont"
                               "rolnexusdevice.cpp",
                      (const char *)(unsigned int)Caps);
    goto LABEL_26;
  }
  NumberInputButtonCaps = v14->NumberInputButtonCaps;
  *((_WORD *)this + 20) = NumberInputButtonCaps;
  LOWORD(ButtonCapsLength) = NumberInputButtonCaps;
  v17 = 72 * NumberInputButtonCaps;
  if ( !is_mul_ok(NumberInputButtonCaps, 0x48uLL) )
    v17 = -1LL;
  ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
  v34 = ButtonCaps;
  if ( !ButtonCaps )
  {
    InterfacePath = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
LABEL_21:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v34, v19);
    goto LABEL_26;
  }
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                         HidP_Input,
                         0xCu,
                         0,
                         0xD0u,
                         ButtonCaps,
                         (PUSHORT)&ButtonCapsLength,
                         *v10);
  if ( SpecificButtonCaps < 0 )
  {
    InterfacePath = wil::details::in1diag3::Return_NtStatus(
                      retaddr,
                      (void *)0x69,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercont"
                               "rolnexusdevice.cpp",
                      (const char *)(unsigned int)SpecificButtonCaps);
    goto LABEL_21;
  }
  if ( !(_WORD)ButtonCapsLength )
  {
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v34, v21);
    InterfacePath = -2147418113;
    goto LABEL_26;
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v34, v21);
  std::unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>::~unique_ptr<InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET>(v30);
  v22 = *v2;
  ButtonCapsLength = 0LL;
  v33 = 0;
  result = PnpDevice::OutputIoctl(v22, v23, v24, &v33, &ButtonCapsLength);
  if ( (int)result >= 0 )
  {
    if ( ButtonCapsLength != 4 )
    {
      InterfacePath = -2147418113;
      v7 = 123LL;
      goto LABEL_3;
    }
    v25 = v33;
    if ( !v33 )
    {
      InterfacePath = -2147418113;
      v7 = 124LL;
      goto LABEL_3;
    }
    if ( v33 > 0x40 )
    {
      v25 = 64;
      v33 = 64;
    }
    v26 = *((_QWORD *)this + 12);
    while ( *((_DWORD *)this + 16) < v25 )
    {
      v27 = (char *)operator new[](v26 + 87, (const struct std::nothrow_t *)&std::nothrow);
      if ( !v27 )
      {
        InterfacePath = -2147024882;
        v7 = 141LL;
        goto LABEL_3;
      }
      *((_QWORD *)v27 + 2) = this;
      *(_OWORD *)(v27 + 24) = 0LL;
      *(_OWORD *)(v27 + 40) = 0LL;
      *((_DWORD *)v27 + 14) = 0;
      *((_QWORD *)v27 + 8) = 0LL;
      *((_QWORD *)v27 + 9) = *((_QWORD *)this + 12);
      v28 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 7);
      if ( *v28 != (ConsumerControlNexusDevice *)((char *)this + 48) )
        __fastfail(3u);
      *(_QWORD *)v27 = (char *)this + 48;
      *((_QWORD *)v27 + 1) = v28;
      *v28 = (ConsumerControlNexusDevice *)v27;
      ++*((_DWORD *)this + 16);
      *((_QWORD *)this + 7) = v27;
      v25 = v33;
    }
    v29 = ConsumerControlNexusDevice::QueueInputBuffers(this);
    if ( v29 < 0 )
      return (unsigned int)v29;
    return v5;
  }
  return result;
}
