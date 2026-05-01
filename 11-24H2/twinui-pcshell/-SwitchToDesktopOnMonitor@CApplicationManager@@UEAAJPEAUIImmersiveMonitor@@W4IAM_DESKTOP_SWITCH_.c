/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18029E640
 * Callers:
 *     ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180212A40 (-SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z.c)
 *     ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x1802EC550 (-SwitchToShellWindow@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18008A72C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801C5BB8 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801C5C20 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x1802966A0 (CDelayIAMOperations--AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID46973925@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029E848 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID46973925@@@details@wil@@QEAAX_NW4Report.c)
 *     ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x1802E1D90 (--$CreateRefCountedObj@V-$CAutoHandle@PEAX@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@V-$CAutoHand.c)
 *     _lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::__lambda_b35b57b2dc0f3b0a2942726bab1c64fe_ @ 0x1802E2EF4 (_lambda_b35b57b2dc0f3b0a2942726bab1c64fe_--__lambda_b35b57b2dc0f3b0a2942726bab1c64fe_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 v4; // r13
  HANDLE *v6; // rbx
  int Error; // edi
  CIAMGlobals *v8; // rcx
  bool IsCalledOnIAMThread; // al
  bool v10; // r12
  int v11; // r15d
  char *v12; // rax
  __int64 v13; // rcx
  HANDLE Event; // rax
  int v15; // edi
  char v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  bool v20; // [rsp+40h] [rbp-20h]
  HANDLE *v21; // [rsp+48h] [rbp-18h] BYREF
  int v22; // [rsp+50h] [rbp-10h]
  __int64 v23; // [rsp+B8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  Error = 0;
  if ( (a3 & 0x20) == 0 )
    Error = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch((CApplicationManager *)(a1 - 152), a2);
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID46973925>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ID46973925>::GetImpl'::`2'::impl,
    a2);
  if ( (v3 & 0x40) != 0 )
    v3 = 0;
  if ( Error >= 0 )
  {
    IsCalledOnIAMThread = CIAMGlobals::IsCalledOnIAMThread(v8);
    v10 = IsCalledOnIAMThread;
    v11 = 3;
    if ( (v3 & 4) != 0 )
      goto LABEL_20;
    if ( IsCalledOnIAMThread )
    {
      Error = CApplicationManager::_ActivateIamSpecialWindow((CApplicationManager *)(a1 - 152));
      goto LABEL_20;
    }
    v12 = (char *)CreateRefCountedObj<CAutoHandle<void *>,>(&v23);
    v6 = 0LL;
    if ( &v17 != v12 )
    {
      v6 = *(HANDLE **)v12;
      *(_QWORD *)v12 = 0LL;
    }
    v13 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( !v6 )
    {
      Error = -2147024882;
      goto LABEL_26;
    }
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    v6[1] = Event;
    if ( Event )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
      {
LABEL_26:
        if ( v6 )
          (*((void (__fastcall **)(HANDLE *))*v6 + 2))(v6);
        return (unsigned int)Error;
      }
    }
    v11 = 4;
LABEL_20:
    if ( Error >= 0 )
    {
      v23 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
      v18 = a1 - 152;
      v19 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      v20 = v10;
      v21 = v6;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      v22 = v3;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v15 = CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___(
              *(int **)(a1 + 648),
              (__int64)&v18,
              v11);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v15 )
      {
        Error = 0;
        if ( v6 )
          WaitForSingleObjectEx(v6[1], 0x1388u, 0);
      }
      else
      {
        Error = -2147467259;
      }
      lambda_b35b57b2dc0f3b0a2942726bab1c64fe_::__lambda_b35b57b2dc0f3b0a2942726bab1c64fe_(&v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    }
    goto LABEL_26;
  }
  return (unsigned int)Error;
}
