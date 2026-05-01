/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___::OnStoryboardStatusChanged @ 0x1805481B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C1C98 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _lambda_ed8ffcce05179564df35e7d067b53c30_::operator() @ 0x180547A14 (_lambda_ed8ffcce05179564df35e7d067b53c30_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___::OnStoryboardStatusChanged(
        _QWORD *a1,
        __int64 *a2,
        int a3)
{
  char v3; // si
  __int64 v6; // rax
  int (__fastcall *v7)(__int64 *, _QWORD, _QWORD); // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void (*v10)(void); // rax
  __int64 v11; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+28h] [rbp-10h] BYREF

  v3 = 1;
  if ( a3 != 1 )
  {
    if ( a3 == 5 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[4] + 184LL) + 160LL))(*(_QWORD *)(a1[4] + 184LL), 0LL);
      v9 = a1[5];
      if ( !v9 )
        return 0LL;
      v10 = *(void (**)(void))(*(_QWORD *)v9 + 48LL);
    }
    else
    {
      if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
        return 0LL;
      v11 = a1[5];
      if ( !v11 )
        return 0LL;
      v10 = *(void (**)(void))(*(_QWORD *)v11 + 56LL);
    }
    v10();
    return 0LL;
  }
  v6 = *a2;
  v13 = 0LL;
  v7 = *(int (__fastcall **)(__int64 *, _QWORD, _QWORD))(v6 + 136);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  if ( v7(a2, &v13, 0LL) >= 0 )
  {
    v14[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v13, v14) >= 0 )
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14[0] + 40LL))(v14[0]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14);
  }
  lambda_ed8ffcce05179564df35e7d067b53c30_::operator()(a1 + 2, v3);
  v8 = a1[5];
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return 0LL;
}
