/*
 * XREFs of ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A9450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024800 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ @ 0x180191988 (-GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ.c)
 *     ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x1801A932C (-GetContainerGuidFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801A9F70 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801C3338 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotkeyContextualProcessor::OnInput(
        HotKeyProcessor **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  GUID v7; // xmm6
  int v8; // ecx
  __int64 *v9; // rbx
  int v10; // eax
  int v11; // eax
  bool v12; // bl
  unsigned __int16 UnhandedVirtualKey; // ax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11
  int v16; // eax
  HotKeyProcessor *v17; // rcx
  int v18; // eax
  int v20; // [rsp+28h] [rbp-69h]
  int v21; // [rsp+28h] [rbp-69h]
  unsigned int v22; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v23; // [rsp+5Ch] [rbp-35h] BYREF
  __int64 v24; // [rsp+60h] [rbp-31h] BYREF
  __int64 v25[2]; // [rsp+68h] [rbp-29h] BYREF
  struct _GUID v26; // [rsp+78h] [rbp-19h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+88h] [rbp-9h] BYREF
  GUID v28; // [rsp+98h] [rbp+7h]
  char v29; // [rsp+A8h] [rbp+17h]
  int v30; // [rsp+ACh] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  *((_DWORD *)a4 + 2) = (*((_DWORD *)a3 + 26) != 3) + 3;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    *(_OWORD *)v27 = 0LL;
    v7 = GUID_NULL;
    v28 = GUID_NULL;
    v29 = 0;
    v30 = 0;
    if ( *((_WORD *)a2 + 30) > 6u || (v8 = 118, !_bittest(&v8, *((unsigned __int16 *)a2 + 30))) )
    {
      if ( *((_WORD *)a2 + 30) != 231 )
      {
        v23 = 0;
        v22 = 0;
        v26 = GUID_NULL;
        v24 = 0LL;
        v9 = (__int64 *)((char *)a3 + 16);
        if ( *((_QWORD *)a3 + 2)
          && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3 + 2,
                    &v24) >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 32LL))(v24, &v23);
          if ( v10 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xA2,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotk"
                   "eycontextualprocessor.cpp",
              (const char *)(unsigned int)v10,
              v20);
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 40LL))(v24, &v22);
          if ( v11 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xA3,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotk"
                   "eycontextualprocessor.cpp",
              (const char *)(unsigned int)v11,
              v20);
          v25[0] = *v9;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v25);
          GetContainerGuidFromInputTarget(v25, &v26);
          v7 = v26;
        }
        v12 = *((_BYTE *)a2 + 94) & 1;
        UnhandedVirtualKey = KeyboardInputInfo::GetUnhandedVirtualKey(a2);
        v26 = v7;
        v16 = HotKeyProcessor::DetectAndProcessHotKey(
                this[5],
                UnhandedVirtualKey,
                v12,
                v14,
                v15,
                (unsigned __int8 *)a2 + 96,
                v23,
                v22,
                &v26,
                (struct HotKeyDetectionResult *)v27);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xB2,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkey"
                 "contextualprocessor.cpp",
            (const char *)(unsigned int)v16,
            v21);
        if ( v30 )
        {
          v17 = this[4];
          if ( v17 )
            (*(void (__fastcall **)(HotKeyProcessor *))(*(_QWORD *)v17 + 40LL))(v17);
        }
        v26 = v7;
        v18 = VirtualHotKeyTracker::OnInput(this[6], a2, &v26, (const struct HotKeyDetectionResult *)v27);
        if ( v18 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xBD,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkey"
                 "contextualprocessor.cpp",
            (const char *)(unsigned int)v18,
            v21);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        if ( v29 )
          *((_DWORD *)a4 + 2) = 3;
      }
    }
    if ( v27[1] )
      std::_Ref_count_base::_Decref(v27[1]);
  }
  return 0LL;
}
