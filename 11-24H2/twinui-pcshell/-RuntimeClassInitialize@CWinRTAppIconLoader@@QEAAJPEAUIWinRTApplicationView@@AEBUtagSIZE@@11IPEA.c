/*
 * XREFs of ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18022EFF0
 * Callers:
 *     ??$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@AEBU3@AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVCWinRTAppIconLoader@@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@22AEAIAEAPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x180237468 (--$MakeAndInitialize@VCWinRTAppIconLoader@@V1@AEAPEAUIWinRTApplicationView@@AEBUtagSIZE@@AEBU3@A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1800785EC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::_lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x1802B3A84 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--_lambda_33b4202f4967ef1cd2a31cded00016d1_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33b4202f4967ef1cd2a31cded00016d1__&_ @ 0x1802B6318 (Windows--Internal--ComTaskPool--QueueTask__lambda_33b4202f4967ef1cd2a31cded00016d1__-_.c)
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x1804ACFDC (_lambda_33b4202f4967ef1cd2a31cded00016d1_--__lambda_33b4202f4967ef1cd2a31cded00016d1_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTAppIconLoader::RuntimeClassInitialize(
        CWinRTAppIconLoader *this,
        struct IWinRTApplicationView *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4,
        const struct tagSIZE *a5,
        char a6,
        struct IApplicationViewIconLoaderNotifications *a7)
{
  int v7; // esi
  int v8; // r14d
  int AgileReference; // eax
  unsigned int v11; // edi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  struct IWinRTApplicationView *v17; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v18[56]; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  CWinRTAppIconLoader *v20; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+28h] BYREF

  v20 = this;
  v7 = (int)a4;
  v8 = (int)a3;
  v17 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IWinRTApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v20 = 0LL;
  AgileReference = RoGetAgileReference(1LL, &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea, a7, &v20);
  v11 = AgileReference;
  if ( AgileReference >= 0 )
  {
    v21 = 0LL;
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((__int64)&v21);
    v14 = v13;
    if ( v13 >= 0 )
    {
      lambda_33b4202f4967ef1cd2a31cded00016d1_::_lambda_33b4202f4967ef1cd2a31cded00016d1_(
        (unsigned int)v18,
        (unsigned int)&v17,
        v8,
        v7,
        (__int64)a5,
        (__int64)&a6,
        (__int64)&v21,
        (__int64)&v20);
      v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_33b4202f4967ef1cd2a31cded00016d1____(v15, v18);
      v14 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
          (const char *)(unsigned int)v16);
      lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_(v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
        (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)AgileReference);
    if ( v20 )
      (*(void (__fastcall **)(CWinRTAppIconLoader *))(*(_QWORD *)v20 + 16LL))(v20);
    if ( a2 )
      (*(void (__fastcall **)(struct IWinRTApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    return v11;
  }
}
