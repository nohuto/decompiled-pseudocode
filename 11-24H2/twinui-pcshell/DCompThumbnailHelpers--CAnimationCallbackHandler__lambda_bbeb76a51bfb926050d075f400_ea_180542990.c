/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___::OnStoryboardStatusChanged @ 0x180542990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C1C98 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 *a2,
        int a3)
{
  __int64 v5; // rax
  int (__fastcall *v6)(__int64 *, _QWORD, _QWORD); // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void (*v9)(void); // rax
  __int64 v10; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a3 != 1 )
  {
    if ( a3 == 5 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( !v8 )
        return 0LL;
      v9 = *(void (**)(void))(*(_QWORD *)v8 + 48LL);
    }
    else
    {
      if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
        return 0LL;
      v10 = *(_QWORD *)(a1 + 24);
      if ( !v10 )
        return 0LL;
      v9 = *(void (**)(void))(*(_QWORD *)v10 + 56LL);
    }
    v9();
    return 0LL;
  }
  v5 = *a2;
  v12 = 0LL;
  v6 = *(int (__fastcall **)(__int64 *, _QWORD, _QWORD))(v5 + 136);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  if ( v6(a2, &v12, 0LL) >= 0 )
  {
    v13[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v12, v13) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 40LL))(v13[0]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return 0LL;
}
