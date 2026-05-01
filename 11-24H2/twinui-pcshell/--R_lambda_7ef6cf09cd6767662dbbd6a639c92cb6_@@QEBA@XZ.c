/*
 * XREFs of ??R_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@QEBA@XZ @ 0x18018C538
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18021EBA0 (-Run@-$CTaskWrapper@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x18018C5D4 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 *     ??$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAVAgileRef@01@@Z @ 0x18018CA64 (--$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIAct.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_7ef6cf09cd6767662dbbd6a639c92cb6_::operator()(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__int64 **)a1;
  v8 = 0LL;
  v3 = v1[1];
  v4 = *v1;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
  result = Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
             &v8,
             v4,
             v3);
  v6 = v8;
  **(_DWORD **)(a1 + 16) = result;
  if ( (int)result >= 0 )
  {
    v8 = *(__int64 **)(a1 + 8);
    v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v8);
    result = Microsoft::WRL::AsAgile<Windows::ApplicationModel::Activation::IActivatedEventArgs>(v6, v7);
    **(_DWORD **)(a1 + 16) = result;
  }
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v6 + 16))(v6);
  return result;
}
