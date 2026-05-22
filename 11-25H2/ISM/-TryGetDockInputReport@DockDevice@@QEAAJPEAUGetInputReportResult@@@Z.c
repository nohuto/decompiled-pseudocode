/*
 * XREFs of ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800DE4C8
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA4E0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180076A2C (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall DockDevice::TryGetDockInputReport(DockDevice *this, struct GetInputReportResult *a2)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rbx
  NTSTATUS SpecificButtonCaps; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  _BYTE *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  const struct std::nothrow_t *v12; // rdx
  USHORT ButtonCapsLength[2]; // [rsp+50h] [rbp-88h] BYREF
  int v15; // [rsp+54h] [rbp-84h] BYREF
  void *v16; // [rsp+58h] [rbp-80h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+60h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  memset_0(&ButtonCaps, 0, sizeof(ButtonCaps));
  ButtonCapsLength[0] = 1;
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                         HidP_Input,
                         1u,
                         0,
                         0xD4u,
                         &ButtonCaps,
                         ButtonCapsLength,
                         PreparsedData);
  v6 = SpecificButtonCaps;
  if ( SpecificButtonCaps >= 0 )
  {
    v7 = *((unsigned __int16 *)this + 32);
    v8 = operator new[](*((unsigned __int16 *)this + 32));
    memset_0(v8, 0, v7);
    *v8 = ButtonCaps.ReportID;
    v9 = *((_QWORD *)this + 2);
    v10 = *((_QWORD *)this + 1);
    v15 = 0;
    v16 = v8;
    v11 = NtRIMDeviceIoControl(v10, v9, 721314LL, 0LL, 0, v8, v7, &v15, 0);
    v6 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)a2 = *((_DWORD *)this + 10);
      *((_DWORD *)a2 + 4) = v7;
      std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(
        (void **)a2 + 1,
        (const struct std::nothrow_t *)&v16);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
        (const char *)(unsigned int)v11);
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v16, v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)SpecificButtonCaps);
  }
  return v6;
}
