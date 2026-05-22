/*
 * XREFs of ?OnHomeGestureDetected@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z @ 0x18016408C
 * Callers:
 *     ?OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z @ 0x180168430 (-OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II_KII@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x1801605E4 (--$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@.c)
 *     ??$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIHAEA_KAEAIAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@12@AEAI0$$QEAHAEA_K00@Z @ 0x180160864 (--$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIHAEA_KAEAIAEAI@Details@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180165760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEvent.c)
 */

__int64 __fastcall MPCManagerClient::OnHomeGestureDetected(
        RTL_SRWLOCK *this,
        struct BamoMPCManagerClientStub *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  const char *v8; // r9
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF
  int v15; // [rsp+6Ch] [rbp+14h]
  unsigned int v16; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v15 = HIDWORD(a2);
  v14 = 0;
  Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::HomeGestureEventArgs,unsigned int &,unsigned int &,int,unsigned __int64 &,unsigned int &,unsigned int &>(
    v12,
    &v16,
    &v17,
    &v14,
    &a5,
    &a6,
    &a7);
  if ( !v12[0] )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      219LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v8);
  v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>(
         this + 207,
         (__int64)this,
         v12[0]);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v9,
      v11);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(v12[0]);
  return 0LL;
}
