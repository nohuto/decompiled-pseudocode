/*
 * XREFs of ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x1801C1510
 * Callers:
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C19E8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800143C4 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x1800B9F40 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x1800BA93C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z @ 0x1801C22B4 (-MPCMouseProcessor_InjectPress_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z @ 0x1801C2378 (-MPCMouseProcessor_InjectRelease_@ISMTracing@@QEAAXJJKKK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801C36B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCMouseProcessor::DownLevelInput(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3,
        __int64 a4,
        unsigned int a5,
        bool a6)
{
  int v6; // r12d
  MPCHolographicInputManager *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdx
  char v15; // al
  int v16; // r15d
  int v17; // ecx
  char v18; // al
  bool v19; // di
  MPCHolographicInputManager *Instance; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  const char *v23; // r9
  struct IMPCFocusTarget *FocusedTarget; // rbx
  int (__fastcall *v25)(struct IMPCFocusTarget *, GUID *, __int64 *); // rdi
  int v26; // eax
  __int64 v27; // rax
  bool v28; // bl
  MPCHolographicInputManager *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  const char *v32; // r9
  struct IMPCInputPostProcessor *PostProcessor; // r8
  void (__fastcall *v34)(struct IMPCInputPostProcessor *, unsigned __int64); // rax
  int v35; // eax
  int *v36; // [rsp+20h] [rbp-20h]
  __int64 v37; // [rsp+30h] [rbp-10h] BYREF
  struct IMPCFocusTarget *v38; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v40; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v41; // [rsp+90h] [rbp+50h] BYREF

  v6 = a4;
  *((_BYTE *)a3 + 48) = 0;
  if ( !*((_QWORD *)this + 455)
    || *((_BYTE *)this + 3664)
    || (v10 = MPCHolographicInputManager::GetInstance(),
        (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(v10, v11, v12, v13)) )
  {
    if ( !*((_BYTE *)this + 5353) || *((_DWORD *)a3 + 10) == *((_DWORD *)this + 1339) )
    {
      LOBYTE(v40) = 0;
      v36 = &v40;
      LOBYTE(a4) = 1;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 461) + 104LL))(
             *((_QWORD *)this + 461),
             0LL,
             1LL,
             a4) >= 0 )
      {
        v15 = v40;
      }
      else
      {
        v15 = 0;
        LOBYTE(v40) = 0;
      }
      v16 = a5;
      if ( v15 )
      {
        *((_WORD *)a3 + 45) = 0;
        *((_DWORD *)a3 + 25) = *((_DWORD *)a2 + 2);
        v17 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a3 + 122) = 0;
        v18 = 0;
      }
      else
      {
        *((_DWORD *)a3 + 25) = v6;
        v18 = 1;
        v17 = v16;
      }
      *((_DWORD *)a3 + 26) = v17;
      *((_BYTE *)a3 + 120) = v18;
      LOBYTE(v14) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetImpl'::`2'::impl,
        v14);
      v19 = a6;
      *((_BYTE *)a3 + 121) = a6;
      v37 = 0LL;
      Instance = MPCHolographicInputManager::GetInstance();
      FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance, v21, v22, v23);
      v38 = FocusedTarget;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v38);
      if ( FocusedTarget )
      {
        v25 = **(int (__fastcall ***)(struct IMPCFocusTarget *, GUID *, __int64 *))FocusedTarget;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
        if ( v25(FocusedTarget, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v37) < 0 )
        {
          v19 = a6;
        }
        else
        {
          LODWORD(v41) = 0;
          v26 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v37 + 56LL))(v37, &v41);
          if ( v26 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1FA,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v26,
              (int)&v40);
          v19 = a6;
          if ( (_DWORD)v41 )
            *((_BYTE *)a3 + 123) = 1;
        }
      }
      v27 = *((_QWORD *)this + 455);
      v28 = v27 != 0;
      if ( *((_BYTE *)this + 5353) )
      {
        if ( !v27 && ISMTracing::IsEnabled() )
        {
          ISMTracing::Instance();
          ISMTracing::MPCMouseProcessor_InjectRelease_(
            (ISMTracing *)*((unsigned int *)a2 + 4),
            v6,
            v16,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a2 + 4),
            *((_DWORD *)a3 + 10));
        }
      }
      else if ( v27 )
      {
        v29 = MPCHolographicInputManager::GetInstance();
        PostProcessor = MPCHolographicInputManager::GetPostProcessor(v29, v30, v31, v32);
        v34 = *(void (__fastcall **)(struct IMPCInputPostProcessor *, unsigned __int64))(*(_QWORD *)PostProcessor + 64LL);
        v41 = __PAIR64__(v16, v6);
        v34(PostProcessor, __PAIR64__(v16, v6));
        if ( ISMTracing::IsEnabled() )
        {
          ISMTracing::Instance();
          ISMTracing::MPCMouseProcessor_InjectPress_(
            (ISMTracing *)*((unsigned int *)a2 + 4),
            v6,
            v16,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a2 + 4),
            *((_DWORD *)a3 + 10));
        }
      }
      *((_BYTE *)this + 5353) = v28;
      *((_DWORD *)this + 1339) = *((_DWORD *)a3 + 10);
      *((_DWORD *)this + 1342) = v19;
      *((_DWORD *)this + 1340) = v6;
      *((_DWORD *)this + 1341) = v16;
      v35 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 464) + 24LL))(
              *((_QWORD *)this + 464),
              a2,
              a3);
      if ( v35 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x216,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v35,
          (int)v36);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    }
  }
}
