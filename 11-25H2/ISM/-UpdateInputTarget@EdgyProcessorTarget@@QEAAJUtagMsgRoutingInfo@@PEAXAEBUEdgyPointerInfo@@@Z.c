/*
 * XREFs of ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801A4A14
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A12E0 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801A3C1C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180017344 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022740 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x180053230 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  _OWORD *v4; // r15
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r14
  char v8; // si
  __int64 *v9; // r12
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // rdx
  __int64 v14; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  char *InputSiteFromInputSinkHandle; // rax
  __int64 v17; // rcx
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rdx
  const char *v21; // r9
  __int64 v22; // [rsp+20h] [rbp-88h] BYREF
  int (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-80h] BYREF
  __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+38h] [rbp-70h]
  __int64 *v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+48h] [rbp-60h]
  wil::ResultException *v28; // [rsp+50h] [rbp-58h] BYREF
  __int64 v29; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v27 = a1;
  v29 = a2;
  v25 = a3;
  v8 = 0;
  v9 = (__int64 *)(a1 + 128);
  v26 = (__int64 *)(a1 + 128);
  v10 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 128);
  v23 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( !v10 )
    goto LABEL_9;
  v22 = 0LL;
  v11 = **v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  if ( v11(v23, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v22) >= 0 )
  {
    if ( !v22 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      return 2147549183LL;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, v6, v5);
    if ( v8 && v5 )
      NtCloseCompositionInputSink(v5, v13);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  if ( !v8 )
  {
LABEL_9:
    v24 = 0LL;
    v14 = 0LL;
    v23 = 0LL;
    if ( v5 )
    {
      try
      {
        InputSiteManager = ISMStatics::GetInputSiteManager();
        InputSiteFromInputSinkHandle = (char *)InputSiteManager::GetInputSiteFromInputSinkHandle(
                                                 (__int64)InputSiteManager,
                                                 (__int64)&v22,
                                                 v5);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)&v23, InputSiteFromInputSinkHandle);
        v17 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      catch ( wil::ResultException *v28 )
      {
        v21 = (const char *)*((unsigned int *)v28 + 8);
        LODWORD(v22) = (_DWORD)v21;
        if ( (int)v21 >= 0 )
        {
          v4 = a4;
          v9 = v26;
          v7 = v27;
          v6 = v29;
          v5 = v25;
          goto LABEL_16;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
          v21);
        if ( v23 )
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v23)[2])(v23);
        v18 = v22;
LABEL_20:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        return v18;
      }
LABEL_16:
      v14 = (__int64)v23;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    v23 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v23);
    v19 = DWMInputTarget::Create(v6, &v23, &v24);
    v18 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v19);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      goto LABEL_20;
    }
    NtCloseCompositionInputSink(v5, v20);
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v9, &v24);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  }
  *(_DWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 48) = *v4;
  *(_OWORD *)(v7 + 64) = v4[1];
  return 0LL;
}
