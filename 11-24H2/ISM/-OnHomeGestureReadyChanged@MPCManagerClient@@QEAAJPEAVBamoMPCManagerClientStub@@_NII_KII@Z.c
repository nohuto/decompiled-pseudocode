/*
 * XREFs of ?OnHomeGestureReadyChanged@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x180164338
 * Callers:
 *     ?OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KII@Z @ 0x180168580 (-OnHomeGestureReadyChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@_NII_KI.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$DoInvoke@V_lambda_7e0f520160950e24bd7fd597c2836819_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_7e0f520160950e24bd7fd597c2836819_@@@Z @ 0x18016049C (--$DoInvoke@V_lambda_7e0f520160950e24bd7fd597c2836819_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureReadyChangedEventArgs@@@12@AEA_NAEAI1AEA_K11@Z @ 0x180160918 (--$Make@VHomeGestureReadyChangedEventArgs@@AEA_NAEAIAEAIAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 MPCManagerClient::OnHomeGestureReadyChanged(
        RTL_SRWLOCK *this,
        RTL_SRWLOCK *a2,
        char a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        ...)
{
  const char *v8; // r9
  RTL_SRWLOCK *v9; // rbx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-40h]
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp-20h] BYREF
  __int128 v14; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  RTL_SRWLOCK *v16; // [rsp+88h] [rbp+28h] BYREF
  char v17; // [rsp+90h] [rbp+30h] BYREF
  int v18; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va, a7);
  v18 = a4;
  v17 = a3;
  v16 = a2;
  Microsoft::WRL::Details::Make<HomeGestureReadyChangedEventArgs,bool &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &,unsigned int &>(
    &v16,
    &v17,
    &v18,
    &a5,
    &a6,
    &a7,
    (int *)va);
  v9 = v16;
  if ( !v16 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      192LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v8);
  v13 = v16;
  v16 = this;
  *(_QWORD *)&v14 = &v16;
  *((_QWORD *)&v14 + 1) = &v13;
  v10 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_7e0f520160950e24bd7fd597c2836819_>(
          this + 204,
          &v14);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v10,
      v12);
  (*((void (__fastcall **)(RTL_SRWLOCK *))v9->Ptr + 2))(v9);
  return 0LL;
}
