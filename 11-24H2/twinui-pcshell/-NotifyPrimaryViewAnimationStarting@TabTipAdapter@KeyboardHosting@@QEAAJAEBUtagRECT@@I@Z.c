/*
 * XREFs of ?NotifyPrimaryViewAnimationStarting@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@I@Z @ 0x1802B3EF0
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1800ABA14 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180474310 (-SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18003D7D0 (-GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV-$ComPtr@U-$IVect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyPrimaryViewAnimationStarting(
        KeyboardHosting::TabTipAdapter *this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  int OcclusionsVectorView; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v11 = 0LL;
  OcclusionsVectorView = KeyboardHosting::TabTipAdapter::GetOcclusionsVectorView(
                           (__int64)this,
                           *((unsigned int *)this + 124),
                           &a2->left,
                           &v11);
  v6 = OcclusionsVectorView;
  if ( OcclusionsVectorView >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 144LL))(
           *((_QWORD *)this + 6),
           v11,
           v3);
    v6 = v8;
    if ( v8 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x820,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)OcclusionsVectorView);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return v6;
}
