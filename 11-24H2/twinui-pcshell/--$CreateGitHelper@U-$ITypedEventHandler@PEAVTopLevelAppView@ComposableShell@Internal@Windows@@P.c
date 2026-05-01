/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@2@PEAPEAU342@@Z @ 0x1801F22C8
 * Callers:
 *     ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1802D00F4 (-Add@-$GitEventSourceSupportsAgile@U-$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Int.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x1802C6D04 (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  char *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  int AgileReference; // edi
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v14; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>>,2>,>(&v13);
  v5 = 0LL;
  if ( &v12 != v4 )
  {
    v5 = *(__int64 **)v4;
    *(_QWORD *)v4 = 0LL;
  }
  v6 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v5 )
  {
    AgileReference = -2147024882;
    goto LABEL_13;
  }
  v14 = v5 + 6;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v9 = v8;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
    AgileReference = RoGetAgileReference(0LL, &GUID_7e2e9e2f_4a06_5544_8cbc_995c27c3671a, a1, v9);
    if ( AgileReference < 0 )
      goto LABEL_13;
  }
  else
  {
    v10 = *v8;
    *v8 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
                     v5,
                     &GUID_7e2e9e2f_4a06_5544_8cbc_995c27c3671a,
                     a2);
LABEL_13:
  if ( v5 )
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  return (unsigned int)AgileReference;
}
