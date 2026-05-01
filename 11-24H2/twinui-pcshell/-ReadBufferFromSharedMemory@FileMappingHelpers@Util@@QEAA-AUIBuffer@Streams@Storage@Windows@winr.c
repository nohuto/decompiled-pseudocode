/*
 * XREFs of ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F350
 * Callers:
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x18064C650 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x1800BD578 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801953E8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18021DD9C (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180288C5C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$IKeyValuePair@ULogoInfo@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@UIRandomAccessStream@Streams@Storage@Windows@6@@Collections@234@@impl@winrt@@QEBA@XZ @ 0x1805E6750 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@U-$IKeyValuePair@ULo.c)
 *     ??$make_shared@UInProcPropertyStore@Util@@$$V@std@@YA?AV?$shared_ptr@UInProcPropertyStore@Util@@@0@XZ @ 0x180647588 (--$make_shared@UInProcPropertyStore@Util@@$$V@std@@YA-AV-$shared_ptr@UInProcPropertyStore@Util@@.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18064868C (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Fo.c)
 *     ??$wait_for_completed@U?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@Foundation@Windows@1@I@Z @ 0x18064872C (--$wait_for_completed@U-$IAsyncOperationWithProgress@UIBuffer@Streams@Storage@Windows@winrt@@I@F.c)
 *     ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x1806495D8 (--0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z.c)
 *     ??1?$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ @ 0x18064A0A8 (--1-$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ.c)
 *     ?CreateFileMappingName@FileMappingHelpers@Util@@QEAA?AUhstring@winrt@@QEAUHWND__@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBU34@@Z @ 0x18064AE78 (-CreateFileMappingName@FileMappingHelpers@Util@@QEAA-AUhstring@winrt@@QEAUHWND__@@AEBV-$basic_st.c)
 *     ?ReadAsync@?$consume_Windows_Storage_Streams_IInputStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIBuffer@Streams@Storage@Windows@3@IAEBW4InputStreamOptions@5673@@Z @ 0x18064F268 (-ReadAsync@-$consume_Windows_Storage_Streams_IInputStream@UIRandomAccessStream@Streams@Storage@W.c)
 *     ?ReadContentsFromFile@Util@@YA?AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z @ 0x18064F80C (-ReadContentsFromFile@Util@@YA-AUIBuffer@Streams@Storage@Windows@winrt@@PEAE@Z.c)
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x180651F38 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 *     ?reset@?$unique_ptr@XP6AHPEBX@Z@std@@QEAAXPEAX@Z @ 0x1806549D4 (-reset@-$unique_ptr@XP6AHPEBX@Z@std@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14 #try_helpers=1
_QWORD *__fastcall Util::FileMappingHelpers::ReadBufferFromSharedMemory(
        _BYTE *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 *a4)
{
  volatile signed __int32 *v7; // rbx
  std::_Ref_count_base *v8; // r14
  __int64 v9; // r12
  __int64 *v10; // rax
  volatile signed __int32 **v11; // rax
  volatile signed __int32 *v12; // rdx
  LPVOID v13; // rax
  __int64 *v14; // rbx
  unsigned int v15; // eax
  enum AsyncStatus v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  enum AsyncStatus v21; // edx
  __int64 (__fastcall ***v22)(_QWORD, __int64 *, __int64 *); // rdi
  __int64 (__fastcall *v23)(_QWORD, __int64 *, __int64 *); // rbx
  struct IUnknown *v24; // rdx
  void **v25; // rax
  int v26; // eax
  __int64 v27; // rbx
  int v28; // eax
  int v29; // eax
  volatile signed __int32 *v31; // [rsp+30h] [rbp-D8h] BYREF
  volatile signed __int32 *v32; // [rsp+38h] [rbp-D0h] BYREF
  void (__fastcall ***v33)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  HANDLE hFileMappingObject; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  BOOL (__stdcall *v37)(LPCVOID); // [rsp+60h] [rbp-A8h] BYREF
  std::_Ref_count_base *v38; // [rsp+68h] [rbp-A0h]
  int v39; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall ***v40)(_QWORD, void *, __int64 *); // [rsp+78h] [rbp-90h] BYREF
  __int64 v41; // [rsp+80h] [rbp-88h] BYREF
  int v42; // [rsp+88h] [rbp-80h] BYREF
  __int128 v43; // [rsp+90h] [rbp-78h]
  __int64 v44[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-58h]
  volatile signed __int32 *v46; // [rsp+110h] [rbp+8h] BYREF
  _QWORD *v47; // [rsp+118h] [rbp+10h]
  __int64 *v48; // [rsp+128h] [rbp+20h]

  v48 = a4;
  v47 = a2;
  v39 = 0;
  v7 = 0LL;
  v32 = 0LL;
  if ( *a1 )
  {
    v10 = std::make_shared<Util::InProcPropertyStore,>(&v37);
    v9 = *v10;
    *(_QWORD *)&v45 = *v10;
    v8 = (std::_Ref_count_base *)v10[1];
    *((_QWORD *)&v45 + 1) = v8;
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( v38 )
      std::_Ref_count_base::_Decref(v38);
  }
  else
  {
    v45 = 0LL;
    v8 = (std::_Ref_count_base *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v9 = 0LL;
  }
  if ( *a1 )
  {
    v11 = (volatile signed __int32 **)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **, _QWORD))(*(_QWORD *)v9 + 8LL))(
                                        v9,
                                        &v46,
                                        a3);
    if ( &v32 != v11 )
    {
      v12 = *v11;
      *v11 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v32, (__int64)v12);
      v7 = v32;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v46);
    if ( !v7 )
    {
      *a2 = 0LL;
      goto LABEL_28;
    }
  }
  winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)&v32, v44);
  Util::FileMappingHelpers::CreateFileMappingName(a1, (struct winrt::impl::shared_hstring_header *)&v31, a3, v44, v48);
  Util::TryOpenFileMappingHandleForWindow(&hFileMappingObject, a3, &v31);
  if ( (char *)hFileMappingObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    v37 = UnmapViewOfFile;
    v38 = 0LL;
    v13 = MapViewOfFile(hFileMappingObject, 4u, 0, 0, 0LL);
    std::unique_ptr<void,int (*)(void const *)>::reset(&v37, v13);
    Util::ReadContentsFromFile(a2, v38);
    std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>((__int64)&v37);
LABEL_27:
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hFileMappingObject);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
LABEL_28:
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    goto LABEL_30;
  }
  if ( !*a1 )
  {
    *a2 = 0LL;
    goto LABEL_27;
  }
  v44[0] = 0LL;
  v35 = 0LL;
  v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **, _QWORD, volatile signed __int32 **))(*(_QWORD *)v9 + 16LL))(
                     v9,
                     &v46,
                     a3,
                     &v31);
  v15 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v14);
  if ( !v15 )
    v15 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>>(v14);
  winrt::impl::check_status_canceled((winrt::impl *)v15, v16);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo,winrt::Windows::Storage::Streams::IRandomAccessStream>>::GetResults(
    v14,
    (winrt *)&v33);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v46);
  v36 = 0LL;
  if ( !winrt::Windows::Foundation::operator==(&v33, &v36) )
  {
    v17 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)&v33);
    winrt::Windows::Storage::Streams::Buffer::Buffer((winrt::Windows::Storage::Streams::Buffer *)&v41, v17);
    LODWORD(v46) = 0;
    v18 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)&v33);
    v19 = winrt::impl::consume_Windows_Storage_Streams_IInputStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::ReadAsync(
            (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v33,
            &v37,
            &v41,
            v18,
            (unsigned int *)&v46);
    v20 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v19);
    if ( !v20 )
      v20 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Storage::Streams::IBuffer,unsigned int>>(
              v19,
              v21);
    winrt::impl::check_status_canceled((winrt::impl *)v20, v21);
    v40 = 0LL;
    v39 = 78;
    v22 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v19;
    v42 = 0;
    v43 = 0LL;
    v23 = (*v22)[10];
    v25 = winrt::put_abi((winrt *)&v40, v24);
    v26 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *), void **))v23)(v22, v25);
    winrt::check_hresult((int *)&v46, v26, (__int64)&v42);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
    if ( v40 )
    {
      v36 = 0LL;
      v42 = 0;
      v43 = 0LL;
      v28 = (**v40)(v40, &winrt::impl::guid_v<winrt::impl::IBufferByteAccess>, &v36);
      winrt::check_hresult((int *)&v46, v28, (__int64)&v42);
      v27 = v36;
    }
    else
    {
      v27 = 0LL;
    }
    v35 = v27;
    v42 = 0;
    v43 = 0LL;
    v29 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 24LL))(v27, v44);
    winrt::check_hresult((int *)&v46, v29, (__int64)&v42);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v40);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v41);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v33);
    Util::ReadContentsFromFile(a2, v44[0]);
    if ( v27 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v35);
    goto LABEL_27;
  }
  *a2 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v33);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hFileMappingObject);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
LABEL_30:
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
  return a2;
}
