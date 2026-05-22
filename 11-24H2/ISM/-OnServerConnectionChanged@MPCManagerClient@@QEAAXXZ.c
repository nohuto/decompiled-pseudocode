/*
 * XREFs of ?OnServerConnectionChanged@MPCManagerClient@@QEAAXXZ @ 0x180164C4C
 * Callers:
 *     ?OnPeerDisconnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x180173010 (-OnPeerDisconnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z.c)
 *     ?SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180173030 (-SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ABBBC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$DoInvoke@V_lambda_7e0f520160950e24bd7fd597c2836819_@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVServerConnectionArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_7e0f520160950e24bd7fd597c2836819_@@@Z @ 0x18016049C (--$DoInvoke@V_lambda_7e0f520160950e24bd7fd597c2836819_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@@12@$$QEA_N@Z @ 0x180160A38 (--$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA-AV.c)
 */

void __fastcall MPCManagerClient::OnServerConnectionChanged(RTL_SRWLOCK *this)
{
  const char *v2; // r9
  __int64 v3; // rbx
  int v4; // eax
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v7) = *((_QWORD *)this[203].Ptr + 31) != 0LL;
  Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::ServerConnectionArgs,bool>(&v8, (bool *)&v7);
  v3 = v8;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      394LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v2);
  *(_QWORD *)v5 = &v7;
  v7 = this;
  *(_QWORD *)&v5[2] = &v8;
  v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::ServerConnectionArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_7e0f520160950e24bd7fd597c2836819_>(
         this + 213,
         (__int128 *)v5);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v4,
      v5[0]);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::Release(v3);
}
