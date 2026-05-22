/*
 * XREFs of ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AD310
 * Callers:
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AE0DC (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     std::_Func_impl_no_alloc__lambda_e299dc0f19f00e2c7ccae28147d2a42e__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800AEB80 (std--_Func_impl_no_alloc__lambda_e299dc0f19f00e2c7ccae28147d2a42e__void__MIT_INPUT__ea_1800AEB80.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001B410 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022D10 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x180026224 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180061844 (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ForegroundManager::HandleDelegationChangeNotification(
        ForegroundManager *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v10; // rcx
  char v11; // al
  struct InputSiteManager *InputSiteManager; // rbx
  __int64 v13; // rax
  char *InputSiteFromId; // rax
  __int64 v15; // rcx
  const char *v16; // r9
  unsigned int v17; // ebx
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  int (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = *(int (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v6 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    if ( v7(v6, &v20) >= 0 )
    {
      v8 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
      v9 = **v20;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      if ( v9(v8, &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea, &v19) >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v24);
        while ( 1 )
        {
          v10 = v24;
          if ( !v24 )
            break;
          InputSite::GetAttachedObject<IDelegateInformationProvider>(v24, &v23);
          if ( !v23 )
            goto LABEL_15;
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 56LL))(v23);
          if ( (v11 & 0xE) == 0 || (v11 & 1) != 0 )
            goto LABEL_15;
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23) == a3 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23) != a2 )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x14A,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                v16);
            v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
            v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
            ForegroundManager::UpdateForegroundTarget(this, v18, v17, a2, a3, 1);
LABEL_15:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
            v10 = v24;
            break;
          }
          InputSiteManager = ISMStatics::GetInputSiteManager();
          v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
          InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId(
                                      (__int64)InputSiteManager,
                                      (__int64)&v21,
                                      1u,
                                      v13);
          Microsoft::WRL::ComPtr<InputSite>::operator=(&v24, InputSiteFromId);
          v15 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        }
        if ( v10 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
}
