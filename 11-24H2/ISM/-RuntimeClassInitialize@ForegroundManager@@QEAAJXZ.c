/*
 * XREFs of ?RuntimeClassInitialize@ForegroundManager@@QEAAJXZ @ 0x18000B898
 * Callers:
 *     ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x1800AC114 (--$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManag.c)
 * Callees:
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x18000B47C (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_tagActivationObjectNotification@@@Z@std@@@Z @ 0x18000BA44 (-Initialize@-$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18000BC14 (-AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008DEC0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Initialize@ForegroundManagerServer@InputTraceLogging@@SAXXZ @ 0x18009BDE8 (-Initialize@ForegroundManagerServer@InputTraceLogging@@SAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     std::function_void___cdecl(_MIT_INPUT_FOCUS_MESSAGE_const__)_::function_void___cdecl(_MIT_INPUT_FOCUS_MESSAGE_const__)___lambda_e299dc0f19f00e2c7ccae28147d2a42e__0_ @ 0x1800AC0EC (std--function_void___cdecl(_MIT_INPUT_FOCUS_MESSAGE_const__)_--function_void___cdecl(_MIT_INPUT_.c)
 *     _lambda_a541461e8d66da6faf437e54554206d1_::_lambda_a541461e8d66da6faf437e54554206d1_ @ 0x1800AC498 (_lambda_a541461e8d66da6faf437e54554206d1_--_lambda_a541461e8d66da6faf437e54554206d1_.c)
 *     ??0?$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x1800AC4A8 (--0-$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ForegroundManager::RuntimeClassInitialize(ForegroundManager *this)
{
  int v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rax
  Microsoft::Bamo::BaseBamoConnection *v9; // rbx
  void (__fastcall ***v10)(_QWORD); // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  void (__fastcall *v13)(__int64, __int64); // rdi
  __int64 v14; // rax
  _QWORD v16[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  Microsoft::Bamo::BaseBamoConnection *v18; // [rsp+70h] [rbp+8h] BYREF
  void *v19; // [rsp+78h] [rbp+10h]

  InputTraceLogging::ForegroundManagerServer::Initialize();
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((char *)this + 240);
  v2 = CoreUICreate((char *)this + 240);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)(unsigned int)v2,
      v16[0]);
  v16[0] = off_1801DC000;
  v16[1] = this;
  v16[7] = v16;
  ((void (__fastcall *)(char *, char *, __int64, _QWORD *))KernelInputConnection<_tagActivationObjectNotification>::Initialize)(
    (char *)this + 248,
    (char *)this + 240,
    v3,
    v16);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v4);
  if ( !*(_BYTE *)ISMTestMode::s_instance && IsEdition(0x224AuLL) )
  {
    v5 = lambda_a541461e8d66da6faf437e54554206d1_::_lambda_a541461e8d66da6faf437e54554206d1_(&v18, this);
    v6 = std::function_void___cdecl__MIT_INPUT_FOCUS_MESSAGE_const____::function_void___cdecl__MIT_INPUT_FOCUS_MESSAGE_const______lambda_e299dc0f19f00e2c7ccae28147d2a42e__0_(
           v16,
           v5);
    KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::Initialize((_QWORD *)this + 49, (_QWORD *)this + 30, v7, v6);
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v9 = BamoServerConnection;
  v18 = BamoServerConnection;
  if ( BamoServerConnection )
    Microsoft::Bamo::BaseBamoConnection::AddRef(BamoServerConnection);
  v10 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v9 + 31) + 8LL)
                                                                          + 24LL))(*((_QWORD *)v9 + 31) + 8LL);
  v11 = *((_QWORD *)this + 67);
  *((_QWORD *)this + 67) = v10;
  if ( v10 )
    (**v10)(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = *((_QWORD *)this + 67);
  v13 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 8) + 40LL);
  v19 = operator new(0x50uLL);
  v14 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::ListPrincipal<BamoActivatableEntityPrincipal>(
          v19,
          v9);
  v13(v12 + 8, v14);
  Microsoft::Bamo::BaseBamoConnection::Release(v9);
  return 0LL;
}
