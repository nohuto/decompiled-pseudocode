/*
 * XREFs of ?NotifyInputReportCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800E7860
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UInputReportEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E6C34 (--1-$unique_ptr@UInputReportEventArgs@ConsumerControlNexusDevice@@U-$default_delete@UInputReport.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyInputReportCallback(_QWORD *a1)
{
  __int64 v1; // rdx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  if ( !a1 )
  {
    v1 = 426LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    std::unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>::~unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>(&v6);
    return 2147942487LL;
  }
  if ( !*a1 )
  {
    v1 = 427LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, a1[1]);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1AD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v3,
      v4);
  std::unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>::~unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>(&v6);
  return 0LL;
}
