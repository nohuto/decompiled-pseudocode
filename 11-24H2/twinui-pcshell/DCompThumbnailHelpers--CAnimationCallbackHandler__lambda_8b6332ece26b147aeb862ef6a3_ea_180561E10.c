/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___::OnStoryboardStatusChanged @ 0x180561E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C1C98 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int (__fastcall *v5)(__int64, _QWORD, _QWORD); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void (*v8)(void); // rax
  __int64 v9; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v12[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a3 != 1 )
  {
    if ( a3 == 5 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
        *(_QWORD *)(a1 + 24),
        *(unsigned int *)(a1 + 32));
      v7 = *(_QWORD *)(a1 + 40);
      if ( !v7 )
        return 0LL;
      v8 = *(void (**)(void))(*(_QWORD *)v7 + 48LL);
    }
    else
    {
      if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
        return 0LL;
      v9 = *(_QWORD *)(a1 + 40);
      if ( !v9 )
        return 0LL;
      v8 = *(void (**)(void))(*(_QWORD *)v9 + 56LL);
    }
    v8();
    return 0LL;
  }
  v11 = 0LL;
  v5 = *(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  if ( v5(a2, &v11, 0LL) >= 0 )
  {
    v12[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v11, v12) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 40LL))(v12[0]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return 0LL;
}
