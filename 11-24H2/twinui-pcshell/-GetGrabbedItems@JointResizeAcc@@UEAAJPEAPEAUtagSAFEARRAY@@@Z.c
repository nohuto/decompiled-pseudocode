/*
 * XREFs of ?GetGrabbedItems@JointResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x18053CB90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSafeArray@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAPEAUtagSAFEARRAY@@@Z @ 0x180535708 (-GetSafeArray@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAPEAUtagSAFEARRAY@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall JointResizeAcc::GetGrabbedItems(JointResizeAcc *this, struct tagSAFEARRAY **a2)
{
  char *v3; // rdi
  __int64 (__fastcall *v4)(char *, GUID *, AccessibilityHelpers **); // rbx
  int SafeArray; // eax
  struct tagSAFEARRAY **v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  AccessibilityHelpers *v11; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v3 = (char *)this - 8;
  v4 = (__int64 (__fastcall *)(char *, GUID *, AccessibilityHelpers **))**((_QWORD **)this - 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  SafeArray = v4(v3, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &v11);
  v7 = SafeArray;
  if ( SafeArray < 0 )
  {
    v8 = 210LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
      (const char *)(unsigned int)SafeArray);
    goto LABEL_6;
  }
  SafeArray = AccessibilityHelpers::GetSafeArray(v11, (struct IRawElementProviderSimple *)a2, v6);
  v7 = SafeArray;
  if ( SafeArray < 0 )
  {
    v8 = 211LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return v7;
}
