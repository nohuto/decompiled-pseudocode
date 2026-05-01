/*
 * XREFs of ?GetBoundingRectForTextRange@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationTextRange@@PEAUtagRECT@@@Z @ 0x18048C610
 * Callers:
 *     ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x180209D84 (-GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElemen.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextRange(
        KeyboardHosting::UIAutomationHelpers *this,
        struct IUIAutomationTextRange *a2,
        struct tagRECT *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  void *v10; // rcx
  LPVOID pv[3]; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v14; // [rsp+78h] [rbp+28h] BYREF
  SAFEARRAY *psa; // [rsp+88h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    v6 = 272LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !a3 )
  {
    v5 = -2147467261;
    v6 = 273LL;
    goto LABEL_3;
  }
  psa = 0LL;
  pv[0] = 0LL;
  pv[1] = pv;
  pv[2] = &psa;
  v12 = 1;
  v5 = ((__int64 (__fastcall *)(struct IUIAutomationTextRange *, SAFEARRAY **))a2->lpVtbl->GetBoundingRectangles)(
         a2,
         &psa);
  if ( v5 < 0 )
  {
    v8 = 292LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)v5);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( psa )
      SafeArrayDestroy(psa);
    return (unsigned int)v5;
  }
  if ( !psa )
  {
    v9 = 293LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)0x80070490LL);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( psa )
      SafeArrayDestroy(psa);
    return 2147943568LL;
  }
  v14 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, SAFEARRAY *, LPVOID *, int *))(**(_QWORD **)this + 368LL))(
         *(_QWORD *)this,
         psa,
         pv,
         &v14);
  if ( v5 < 0 )
  {
    v8 = 296LL;
    goto LABEL_9;
  }
  v10 = pv[0];
  if ( !pv[0] )
  {
    v9 = 297LL;
    goto LABEL_21;
  }
  if ( !v14 )
  {
    v9 = 298LL;
    goto LABEL_21;
  }
  *a3 = *(struct tagRECT *)pv[0];
  CoTaskMemFree(v10);
  if ( psa )
    SafeArrayDestroy(psa);
  return 0LL;
}
