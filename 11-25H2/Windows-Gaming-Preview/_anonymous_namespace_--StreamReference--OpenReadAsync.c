/*
 * XREFs of _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x1800124D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000CC00 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800126E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOp.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012B10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 *     _anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize @ 0x180012CA0 (_anonymous_namespace_--DummyAsyncOperation--RuntimeClassInitialize.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::StreamReference::OpenReadAsync(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  char *v7; // rbx
  int Interface; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(a1 + 64) + 56LL))(
         *(_QWORD *)(a1 + 64),
         5LL,
         *(unsigned int *)(a1 + 72),
         &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v3);
    v5 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  *a2 = 0LL;
  v7 = (char *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
  {
    Interface = -2147024882;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)Interface);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return (unsigned int)Interface;
  }
  *(_QWORD *)v7 = &Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 24));
  *((_QWORD *)v7 + 8) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>'};
  *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncInfo'};
  *((_QWORD *)v7 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = off_180046B40;
  *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v7 + 2) = off_180046AE8;
  *((_QWORD *)v7 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v7 + 9) = 0LL;
  *((_QWORD *)v7 + 10) = 0LL;
  *((_QWORD *)v7 + 11) = 0LL;
  *((_QWORD *)v7 + 12) = 0LL;
  *((_QWORD *)v7 + 13) = 0LL;
  *((_QWORD *)v7 + 14) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)(v7 + 88), 2);
  *((_QWORD *)v7 + 15) = 0LL;
  Interface = anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize(v7, &v12);
  if ( Interface < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v7);
    goto LABEL_12;
  }
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                v7,
                &GUID_c4a57c5e_32b0_55b3_ad13_ce1c23041ed6,
                a2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v7);
  if ( Interface < 0 )
    goto LABEL_12;
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
