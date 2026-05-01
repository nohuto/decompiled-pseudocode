/*
 * XREFs of ??$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA?AV?$shared_ptr@VUIAutomationHelpers@KeyboardHosting@@@0@XZ @ 0x180485094
 * Callers:
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x180484FF4 (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 *     std::call_once__lambda_51403b28e8b81be276cead8d023ce32d___ @ 0x1804885FC (std--call_once__lambda_51403b28e8b81be276cead8d023ce32d___.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<KeyboardHosting::UIAutomationHelpers,>(_QWORD *a1)
{
  char *v2; // rdi
  HRESULT Instance; // eax
  int ppv; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (char *)operator new(0x18uLL);
  *(_OWORD *)v2 = 0LL;
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>::`vftable';
  *((_QWORD *)v2 + 2) = 0LL;
  Instance = CoCreateInstance(
               &GUID_e22ad333_b25f_460c_83d0_0581107395c9,
               0LL,
               1u,
               &GUID_30cbe57d_d9d0_452a_ab13_7ac5ac4825ee,
               (LPVOID *)v2 + 2);
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  *a1 = v2 + 16;
  a1[1] = v2;
  return a1;
}
