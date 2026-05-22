/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18000BDF4
 * Callers:
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x18000BD90 (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x18000C8C0 (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 * Callees:
 *     ??1?$RefPtr@UICoreUIClient@@@@QEAA@XZ @ 0x18000B9F0 (--1-$RefPtr@UICoreUIClient@@@@QEAA@XZ.c)
 *     StringLengthWorkerW @ 0x18000C21C (StringLengthWorkerW.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18000C264 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000C2D8 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006934C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        size_t a2,
        __int64 a3,
        _OWORD *a4,
        const wchar_t *psz,
        char a6)
{
  HRESULT v10; // eax
  size_t v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int16 *v13; // r15
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  __int64 v17; // r10
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  const struct std::nothrow_t *v21; // rdx
  int ConversationHost; // eax
  __int64 (__fastcall *v24)(size_t, __int64); // rbx
  int v25; // eax
  int v26; // eax
  size_t v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  const struct std::nothrow_t *v30; // rdx
  int v31; // [rsp+20h] [rbp-89h]
  unsigned __int16 *v32; // [rsp+20h] [rbp-89h]
  size_t pcchLength; // [rsp+60h] [rbp-49h] BYREF
  int v34; // [rsp+68h] [rbp-41h]
  _BYTE v35[8]; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int16 *v36; // [rsp+78h] [rbp-31h]
  __int128 v37; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int16 v38[8]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  pcchLength = 0LL;
  *(_QWORD *)v38 = *(_QWORD *)L"_BAMO";
  *(_DWORD *)&v38[4] = *(_DWORD *)L"O";
  if ( psz )
  {
    v10 = StringLengthWorkerW(psz, a2, &pcchLength);
    if ( v10 >= 0 )
    {
      v11 = pcchLength;
      goto LABEL_6;
    }
  }
  else
  {
    v10 = -2147024809;
  }
  v11 = 0LL;
LABEL_6:
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x17E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v31);
  v12 = v11 + 6;
  v13 = (unsigned __int16 *)operator new[](saturated_mul(v11 + 6, 2uLL));
  v36 = v13;
  v14 = StringCchCopyW(v13, v12, psz);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x184,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v14,
      v31);
  v15 = StringCchCatW(v13, v12, v38);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x185,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v15,
      v31);
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)v35,
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
  v34 = 0;
  v17 = *(_QWORD *)a2;
  if ( a6 )
  {
    pcchLength = 0LL;
    *(_OWORD *)v38 = *a4;
    v32 = v38;
    v18 = (*(__int64 (__fastcall **)(size_t, unsigned __int16 *, const wchar_t *, __int64))(v17 + 296))(
            a2,
            v13,
            psz,
            a3);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B4,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v18,
        (int)v38);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&pcchLength);
LABEL_22:
      Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)v35);
      operator delete(v13, v21);
      return v19;
    }
  }
  else
  {
    *(_QWORD *)v38 = 0LL;
    pcchLength = 0LL;
    v37 = *a4;
    LODWORD(v32) = 3;
    v20 = (*(__int64 (__fastcall **)(size_t, unsigned __int16 *, const wchar_t *, __int128 *))(v17 + 336))(
            a2,
            v13,
            psz,
            &v37);
    v19 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CA,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v20,
        3);
      if ( pcchLength )
        (*(void (__fastcall **)(size_t))(*(_QWORD *)pcchLength + 16LL))(pcchLength);
      goto LABEL_22;
    }
  }
  RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)(a1 + 80));
  RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)(a1 + 72));
  ConversationHost = CoreUICallCreateConversationHost(a2, pcchLength, a1 + 72, a1 + 80);
  if ( ConversationHost < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DD,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)ConversationHost,
      (int)v32);
  v24 = *(__int64 (__fastcall **)(size_t, __int64))(*(_QWORD *)a2 + 40LL);
  RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>((__int64 *)(a1 + 56));
  v25 = v24(a2, a1 + 56);
  if ( v25 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E4,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v25,
      (int)v32);
  v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56), a1 + 24);
  if ( v26 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E6,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v26,
      (int)v32);
  *(_DWORD *)(a1 + 28) = v34;
  v27 = pcchLength;
  pcchLength = 0LL;
  v28 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v27;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = a2;
  (*(void (__fastcall **)(size_t))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( pcchLength )
    (*(void (__fastcall **)(size_t))(*(_QWORD *)pcchLength + 16LL))(pcchLength);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)v35);
  operator delete(v13, v30);
  return 0LL;
}
