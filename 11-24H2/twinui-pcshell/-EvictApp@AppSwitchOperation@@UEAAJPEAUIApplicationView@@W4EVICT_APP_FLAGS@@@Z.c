/*
 * XREFs of ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180524FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180525570 (-QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C26BC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1806C30D8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppSwitchOperation::EvictApp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r14
  int EvictApp; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  char v11; // bl
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, GUID *, __int64 *); // rdi
  __int64 *v16; // rax
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+58h] BYREF

  v6 = a1 - 176;
  v18 = (a1 + 16) & -(__int64)(a1 != 176);
  v19 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v18, 1);
  EvictApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = EvictApp;
  if ( EvictApp >= 0 )
  {
    EvictApp = AppSwitchOperation::QueryEvictApp(v6, a2, a3);
    v8 = EvictApp;
    if ( EvictApp >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 1;
      if ( (a3 & 1) != 0 )
      {
        v10 = 524353;
        *(_DWORD *)(a1 - 72) = 524353;
      }
      else
      {
        v10 = 1;
      }
      if ( (a3 & 4) != 0 )
      {
        v11 = 1;
        v10 |= 0x20u;
        *(_DWORD *)(a1 - 72) = v10;
      }
      else
      {
        v11 = 0;
      }
      if ( (a3 & 8) == 0 )
        *(_DWORD *)(a1 - 72) = v10 | 0x10000;
      if ( (a3 & 2) == 0
        && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(
             *(_QWORD *)(a1 - 112),
             1LL)
        && (!(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(
               *(_QWORD *)(a1 - 112),
               4LL)
         || v11) )
      {
        v21 = 0LL;
        v12 = *(_QWORD *)(a1 - 112);
        v13 = *(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 104LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        if ( v13(v12, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v21) >= 0 )
        {
          v22 = 0LL;
          v14 = v21;
          v15 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v21 + 48LL);
          v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v22);
          if ( v15(v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v16) >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v22);
            *(_DWORD *)(a1 - 72) |= 2u;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      }
      EvictApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
      v8 = EvictApp;
      if ( EvictApp >= 0 )
      {
        v8 = 0;
        goto LABEL_26;
      }
      v9 = 195LL;
    }
    else
    {
      v9 = 149LL;
    }
  }
  else
  {
    v9 = 146LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)EvictApp);
LABEL_26:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v18);
  return v8;
}
