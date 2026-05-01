/*
 * XREFs of _lambda_67700adb2cf4a33e0bc58e7b17f19822_::operator() @ 0x1802E3A58
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67700adb2cf4a33e0bc58e7b17f19822___::Run @ 0x1802EB540 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67700adb2cf4a33e0bc58e7b17f19822___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_67700adb2cf4a33e0bc58e7b17f19822_::operator()(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, __int64 *); // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v1 = *a1;
  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  v3 = v2(v1, &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 8333LL;
  }
  else
  {
    v5 = 8332LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return v4;
}
