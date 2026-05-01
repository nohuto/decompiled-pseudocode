/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___::Run @ 0x180325740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___::Run(
        __int64 a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, SID *, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(int (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  if ( v3(v2, &SID_FullScreenManager, &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d, &v5) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *(_QWORD *)(a1 + 24), 0LL);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
}
