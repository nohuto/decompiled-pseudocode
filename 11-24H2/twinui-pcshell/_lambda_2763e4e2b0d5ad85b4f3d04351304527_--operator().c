/*
 * XREFs of _lambda_2763e4e2b0d5ad85b4f3d04351304527_::operator() @ 0x180323AB8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2763e4e2b0d5ad85b4f3d04351304527___::Run @ 0x180325730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2763e4e2b0d5ad85b4f3d04351304527___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800D334C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2763e4e2b0d5ad85b4f3d04351304527_::operator()(CMarshaledInterface *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  v2 = CMarshaledInterface::_Unmarshal(this, &GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8, &v7, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(
           v7,
           *((_QWORD *)this + 1),
           *((_QWORD *)this + 2));
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 991LL;
  }
  else
  {
    v4 = 990LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return v3;
}
