/*
 * XREFs of _lambda_1a5eae780b6c1663d254d797c20a7e0a_::operator() @ 0x18067F0CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___::Run @ 0x18067F5C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800D334C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_1a5eae780b6c1663d254d797c20a7e0a_::operator()(CMarshaledInterface *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  v2 = CMarshaledInterface::_Unmarshal(this, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &v6, 0);
  v3 = v2;
  if ( v2 < 0
    || (v2 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v6 + 32LL))(
               v6,
               *((_QWORD *)this + 1),
               *((unsigned int *)this + 4),
               *((unsigned int *)this + 5),
               *((_DWORD *)this + 6)),
        v3 = v2,
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  return v3;
}
