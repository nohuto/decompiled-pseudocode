/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801E17CC
 * Callers:
 *     _lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_ @ 0x180228FC0 (_lambda_193e8a4e6d1693db3d1863bd3aa4b00f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1801E196C (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1801E1A5C (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18021B6A8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18021B6CC (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x180273DC4 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // esi
  OLECHAR *v4; // rbp
  void (__fastcall ***v5)(_QWORD); // rcx
  CEffectCompilationService *v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  void (__fastcall ***v11)(_QWORD); // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(v2, &EVTDESC_COMPILE_EFFECT_Start, (__int64)this);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v11);
  v3 = CompileEffectDescription(*((_QWORD *)this + 7), &v11);
  if ( v3 >= 0 )
  {
    v8 = MIDL_user_allocate(0x28uLL);
    v9 = v8;
    if ( v8 )
    {
      v5 = v11;
      *v8 = 0LL;
      v8[1] = 0LL;
      *((_DWORD *)v8 + 4) = 0;
      v8[3] = this;
      v8[4] = v5;
      if ( v5 )
        (**v5)(v5);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v9;
    if ( v10 )
      std::default_delete<CCompiledEffectCache>::operator()();
    if ( !*((_QWORD *)this + 10) )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xB9u, 0LL);
    }
  }
  else
  {
    v4 = (OLECHAR *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v12);
      SysFreeString(v4);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
    }
    *((_QWORD *)this + 11) = 0LL;
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 11);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer((__int64)v5, &EVTDESC_COMPILE_EFFECT_Stop, (__int64)this);
  v6 = (CEffectCompilationService *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 19) = v3;
  *((_DWORD *)this + 18) = (v3 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v6, this, 0);
  v7 = (__int64)v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
}
