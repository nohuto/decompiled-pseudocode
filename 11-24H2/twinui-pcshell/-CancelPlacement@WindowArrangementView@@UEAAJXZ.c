/*
 * XREFs of ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18052A6C0
 * Callers:
 *     ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x18052DF90 (-TryInvokeBack@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____lambda_83894a20d7676cc7370719a196cbc3a9__&_ @ 0x1805293AC (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc.c)
 *     _lambda_83894a20d7676cc7370719a196cbc3a9_::operator() @ 0x18052A014 (_lambda_83894a20d7676cc7370719a196cbc3a9_--operator().c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18052AA04 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052BF50 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052BF74 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::CancelPlacement(WindowArrangementView *this, __int64 a2, __int64 a3)
{
  WindowArrangementView *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // esi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  WindowArrangementView *v19; // [rsp+68h] [rbp+38h] BYREF
  WindowArrangementView *v20; // [rsp+70h] [rbp+40h] BYREF
  char *v21; // [rsp+78h] [rbp+48h] BYREF

  if ( !*((_BYTE *)this + 268) && !*((_BYTE *)this + 266) )
  {
    v4 = (WindowArrangementView *)((char *)this - 48);
    v21 = (char *)this - 48;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v21, a2, a3);
    v20 = v4;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v20, v5, v6);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    v19 = v4;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef(&v19, v7, v8);
    v18 = 0LL;
    Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____lambda_83894a20d7676cc7370719a196cbc3a9____(
      &v16,
      &v19);
    v9 = v16;
    if ( v16 )
      v10 = (**v16)(v16, &GUID_53204493_9170_4f30_be0e_211392a4618e, &v18);
    else
      v10 = -2147024882;
    if ( v9 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v19);
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 554LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)v11);
LABEL_16:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v21);
      return (unsigned int)v10;
    }
    v13 = WindowArrangementView::EnablePlaceModeDropFeedback(v4, 3LL, 0LL, v18);
    if ( v13 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), 0LL, 0LL);
      *((_BYTE *)this + 268) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22B,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v13);
      v14 = lambda_83894a20d7676cc7370719a196cbc3a9_::operator()(&v20);
      v10 = v14;
      if ( v14 < 0 )
      {
        v11 = (unsigned int)v14;
        v12 = 562LL;
        goto LABEL_13;
      }
    }
    v10 = 0;
    goto LABEL_16;
  }
  return 0LL;
}
