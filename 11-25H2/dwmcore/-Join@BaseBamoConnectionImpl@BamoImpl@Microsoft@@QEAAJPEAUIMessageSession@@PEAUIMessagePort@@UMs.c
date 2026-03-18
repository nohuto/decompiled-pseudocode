/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1801D047C
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1801CF00C (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1801D096C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D0C24 (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801D0CA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0CFC (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18025366C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v6; // rcx
  const unsigned __int16 *v8; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rbx
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  __int64 (__fastcall *v17)(__int64, unsigned __int16 *, const unsigned __int16 *, __int64); // r10
  int v18; // eax
  unsigned int v19; // edi
  int ConversationHost; // eax
  __int64 (__fastcall *v22)(__int64, __int64); // rdi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // [rsp+20h] [rbp-79h]
  int v28[4]; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int16 v29[4]; // [rsp+80h] [rbp-19h] BYREF
  int v30; // [rsp+88h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v30 = *(_DWORD *)L"O";
  v6 = 0x7FFFFFFFLL;
  *(_QWORD *)v29 = *(_QWORD *)L"_BAMO";
  v8 = L"System\\CompositionEngineDataProvider";
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v6;
  }
  while ( v6 );
  v10 = (0x7FFFFFFF - v6) & -(__int64)(v6 != 0);
  if ( !v6 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x17E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x80070057LL,
      v27);
  v11 = v10 + 6;
  v12 = (unsigned __int16 *)operator new[](saturated_mul(v10 + 6, 2uLL));
  v13 = v12;
  if ( v12 )
  {
    v14 = StringCchCopyW(v12, v11, L"System\\CompositionEngineDataProvider");
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x184,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v14,
        v27);
    v15 = StringCchCatW(v13, v11, v29);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x185,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v15,
        v27);
    Microsoft::BamoImpl::InternalLock::InternalLock(
      (Microsoft::BamoImpl::InternalLock *)v29,
      *(struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 96));
    if ( *(_QWORD *)(a1 + 64) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x196,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v16);
    if ( *(_BYTE *)(a1 + 218) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x19E,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v16);
    v17 = *(__int64 (__fastcall **)(__int64, unsigned __int16 *, const unsigned __int16 *, __int64))(*(_QWORD *)a2 + 296LL);
    *(_OWORD *)v28 = *a4;
    v18 = v17(a2, v13, L"System\\CompositionEngineDataProvider", a3);
    v19 = v18;
    if ( v18 >= 0 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(a1 + 80));
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(a1 + 72));
      ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 72, a1 + 80);
      if ( ConversationHost < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1DD,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)ConversationHost,
          (int)v28);
      v22 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(a1 + 56));
      v23 = v22(a2, a1 + 56);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E4,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v23,
          (int)v28);
      v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56), a1 + 24);
      if ( v24 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E6,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v24,
          (int)v28);
      *(_DWORD *)(a1 + 28) = 0;
      v25 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v26 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( *(_QWORD *)v29 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)v29 + 32LL));
      wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(v29);
      operator delete(v13);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B4,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v18);
      if ( *(_QWORD *)v29 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)v29 + 32LL));
      wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(v29);
      operator delete(v13);
      return v19;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
