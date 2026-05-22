/*
 * XREFs of ?CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z @ 0x18003560C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086EF0 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800357D8 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HidLampRangeUpdateReportBuilder::CreateAndInitialize(
        struct HidLampArrayDevice *a1,
        struct HidLampRangeUpdateReportBuilder **a2)
{
  char *v4; // rax
  char *v5; // rbx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (char *)RefCountedObject::operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &HidLampRangeUpdateReportBuilder::`vftable';
    v4[16] = 0;
    *(_OWORD *)(v4 + 20) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(v5 + 40, a1);
    *(_OWORD *)(v5 + 20) = 0LL;
    v5[16] = 0;
    *a2 = (struct HidLampRangeUpdateReportBuilder *)v5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportbuilder.cpp",
      (const char *)0x8007000ELL,
      v7);
    return 2147942414LL;
  }
}
