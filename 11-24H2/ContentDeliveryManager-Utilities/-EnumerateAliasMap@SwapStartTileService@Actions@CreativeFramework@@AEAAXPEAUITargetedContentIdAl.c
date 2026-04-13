/*
 * XREFs of ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180094AF8
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800952C0 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004790 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IMapView@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180093908 (--$query@U-$IIterable@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Interna.c)
 *     ??0iterable_iterator@?$iterable_range@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180093D24 (--0iterable_iterator@-$iterable_range@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAl.c)
 *     ??1iterable_iterator@?$iterable_range@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180094080 (--1iterable_iterator@-$iterable_range@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
        HSTRING a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  int i; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rbx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+28h] [rbp-70h] BYREF
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-60h] BYREF
  int v22; // [rsp+40h] [rbp-58h]
  __int64 *v23; // [rsp+48h] [rbp-50h] BYREF
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  int v25; // [rsp+58h] [rbp-40h]
  __int64 v26; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  HSTRING string; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+18h]
  __int64 (__fastcall ***v31)(_QWORD, GUID *, _QWORD *); // [rsp+B8h] [rbp+20h] BYREF

  v30 = a3;
  string = a1;
  v4 = *a2;
  v31 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v4 + 72))(a2, &v31);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5,
      v18);
  wil::com_ptr_t<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Services::TargetedContent::Internal::TargetedContentIdAliasValue *>,wil::err_exception_policy>::query<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Services::TargetedContent::Internal::TargetedContentIdAliasValue *> *>>(
    &v31,
    &v18);
  wil::iterable_range<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Services::TargetedContent::Internal::TargetedContentIdAliasValue *> *,wil::err_exception_policy>::iterable_iterator::iterable_iterator(
    &v21,
    v18);
  v24 = 0LL;
  v25 = -1;
  v26 = 0LL;
  for ( i = v22; i != -1; v22 = i )
  {
    v7 = v21;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    v9 = v8(v7, (__int64 *)&v23);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v9,
        v18);
    string = 0LL;
    v10 = (__int64)v23;
    v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*v23 + 48);
    WindowsDeleteString(0LL);
    string = 0LL;
    v12 = v11(v10, &string);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v12,
        v18);
    v29 = 0LL;
    v13 = *v23;
    v29 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 56))(v23, &v29);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v14,
        v18);
    v19 = v29;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v15 = *(_QWORD *)(a3 + 24);
    if ( !v15 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, PCWSTR *, __int64 *))(*(_QWORD *)v15 + 16LL))(
            v15,
            &StringRawBuffer,
            &v19) )
    {
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v29);
      WindowsDeleteString(string);
      break;
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v29);
    WindowsDeleteString(string);
    LOBYTE(string) = 0;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21 + 64LL))(v21, &string);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v16,
        v18);
    if ( (_BYTE)string )
      i = v22 + 1;
    else
      i = -1;
  }
  wil::iterable_range<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Services::TargetedContent::Internal::TargetedContentIdAliasValue *> *,wil::err_exception_policy>::iterable_iterator::~iterable_iterator(&v24);
  wil::iterable_range<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Services::TargetedContent::Internal::TargetedContentIdAliasValue *> *,wil::err_exception_policy>::iterable_iterator::~iterable_iterator(&v21);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v18);
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v31);
}
