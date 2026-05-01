/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize @ 0x180012DA0
 * Callers:
 *     _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x1800125D0 (_anonymous_namespace_--StreamReference--OpenReadAsync.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize(__int64 a1, char *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64); // rsi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64); // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  char v15; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)a2 )
  {
    v3 = -2147467261;
    v4 = 137LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v3);
    return v3;
  }
  v6 = 0LL;
  if ( &v15 != a2 )
  {
    v6 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(a1 + 80);
  v9 = **v8;
  v10 = *(_QWORD *)(a1 + 72);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v3 = v9(v8, &GUID_00000036_0000_0000_c000_000000000046, a1 + 72);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 140LL;
    goto LABEL_3;
  }
  v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *v11 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    *((_DWORD *)v11 + 3) = 1;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::FileProperties::StorageItemThumbnail *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v12[2] = a1;
    *v12 = off_180046880;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)0x8007000ELL);
    return v3;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 80) + 48LL))(*(_QWORD *)(a1 + 80), v12);
  v14 = v13;
  if ( v13 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v13);
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    return v14;
  }
}
