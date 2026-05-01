/*
 * XREFs of ?PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F9960
 * Callers:
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803F92A0 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VPWSLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutItem@@@Z @ 0x1803F96F0 (--$MakeAndInitialize@VPWSLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutItem_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutItem,PWSLayoutItem,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 61LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutitem.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (**v8)(v8, &GUID_c343e0c0_9666_444b_898f_cc498c7e521a, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 62LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return v4;
}
