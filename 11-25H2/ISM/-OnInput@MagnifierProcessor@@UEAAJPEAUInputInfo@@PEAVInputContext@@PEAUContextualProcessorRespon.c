/*
 * XREFs of ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A63F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x1801A5604 (--$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV-$ComPtr@VMagnifierControllerPr.c)
 *     ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@@Z @ 0x1801A57C0 (--$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV-$ComPtr@VMagnifierControllerPro.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1801A5F1C (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?RecognizeTwoFingerTap@Magnifier@InputTraceLogging@@SAXXZ @ 0x1801A663C (-RecognizeTwoFingerTap@Magnifier@InputTraceLogging@@SAXXZ.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x1801A6BDC (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1801A6BF4 (-CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ.c)
 *     ?CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ @ 0x1801A6E0C (-CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801A6F10 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801A6F6C (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 *     ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x1801A6FC4 (-UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MagnifierProcessor::OnInput(
        MagnifierProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v7; // rdi
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  const char *v14; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = *(_QWORD *)a4;
  v7 = v17;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v17);
  *((_DWORD *)a4 + 2) = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a4 + 10);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v7 + 32, &v16, *((_QWORD *)a2 + 2));
  MagnifierRecognizer::UpdateContactState((MagnifierRecognizer *)(v7 + 32), a2);
  MagnifierRecognizer::CheckForTwoFingerTap((MagnifierRecognizer *)(v7 + 32));
  MagnifierRecognizer::CheckForTwoFingerPan((MagnifierRecognizer *)(v7 + 32));
  if ( *(_BYTE *)(v7 + 33) )
  {
    InputTraceLogging::Magnifier::RecognizeTwoFingerTap();
    v8 = 3;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x90,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifierprocessor.cpp",
      (const char *)*(unsigned __int8 *)(v7 + 34),
      (__int64)"Can't recognize both 2fTap and 2fPan",
      v14);
    if ( *(_BYTE *)(v7 + 18) && *(_BYTE *)(v7 + 16) )
    {
      MagnifierRecognizer::Reset((MagnifierRecognizer *)(v7 + 32), (MagnifierProcessor *)((char *)this + 80));
      v16 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      v9 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierToggleTarget,IInputTarget,Microsoft::WRL::ComPtr<MagnifierControllerProxy> &,Microsoft::WRL::ComPtr<InputSite> &>(
             &v16,
             (__int64 *)(v7 + 120),
             (__int64 *)(v7 + 128));
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9B,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifierprocessor.cpp",
          (const char *)(unsigned int)v9,
          v13);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)a4 + 10, &v16);
      v8 = 2;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    }
    *((_DWORD *)a4 + 2) = v8;
  }
  else if ( *(_BYTE *)(v7 + 34) )
  {
    if ( !*(_QWORD *)(v7 + 112) )
    {
      InputTraceLogging::Magnifier::RecognizeTwoFingerTap();
      LODWORD(v16) = *(_BYTE *)(v7 + 18) != 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v7 + 112));
      v10 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<MagnifierControllerProxy> &,Microsoft::WRL::ComPtr<InputSite> &,enum MagnifierGestureTarget::GestureType &>(
              (_QWORD *)(v7 + 112),
              (__int64 *)(v7 + 120),
              (__int64 *)(v7 + 128),
              (unsigned int *)&v16);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB1,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifierprocessor.cpp",
          (const char *)(unsigned int)v10,
          v12);
    }
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)a4 + 10, (_QWORD *)(v7 + 112));
    *((_DWORD *)a4 + 2) = 2;
  }
  else if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v7 + 32)) )
  {
    *((_DWORD *)a4 + 2) = 1;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  return 0LL;
}
