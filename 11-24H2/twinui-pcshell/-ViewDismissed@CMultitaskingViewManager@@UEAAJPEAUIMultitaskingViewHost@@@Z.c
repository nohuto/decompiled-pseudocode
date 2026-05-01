/*
 * XREFs of ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x1804A3CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18011F9D8 (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?s_GetMTVHostType@CMultitaskingViewManager@@CA?AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingViewHost@@@Z @ 0x18011FADC (-s_GetMTVHostType@CMultitaskingViewManager@@CA-AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingView.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18022C4C8 (-_FindMatchingMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIUnknown@@PE.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x1804A42BC (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::ViewDismissed(
        CMultitaskingViewManager *this,
        struct IMultitaskingViewHost *a2)
{
  CMultitaskingViewManager *v4; // rdi
  int MTVHostType; // ebx
  int MatchingMTVHost; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown *v14; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+30h] BYREF

  v4 = (CMultitaskingViewManager *)((char *)this - 16);
  v11 = ((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewManager *)16);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v11, 1);
  MTVHostType = CMultitaskingViewManager::s_GetMTVHostType((__int64 *)a2);
  v14 = 0LL;
  v15 = 0LL;
  if ( MTVHostType == 4 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    MatchingMTVHost = CMultitaskingViewManager::_FindMatchingMTVHost(
                        (__int64)v4,
                        4,
                        (struct IUnknown *)a2,
                        (__int64 *)&v14,
                        &v15);
    v7 = MatchingMTVHost;
    if ( MatchingMTVHost < 0 )
    {
      v8 = 572LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)MatchingMTVHost);
      goto LABEL_12;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    MatchingMTVHost = CMultitaskingViewManager::_FindMTVHost((__int64)v4, MTVHostType, 0, (__int64 *)&v14, &v15);
    v7 = MatchingMTVHost;
    if ( MatchingMTVHost < 0 )
    {
      v8 = 576LL;
      goto LABEL_6;
    }
  }
  if ( SHIsSameObject(v14, (struct IUnknown *)a2) )
    CMultitaskingViewManager::_DestroyMTVHost(v4, v15);
  v9 = *((_QWORD *)this + 29);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *((unsigned int *)this + 80));
  v7 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v11);
  return v7;
}
