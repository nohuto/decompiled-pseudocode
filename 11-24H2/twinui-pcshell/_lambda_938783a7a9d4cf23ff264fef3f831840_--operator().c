/*
 * XREFs of _lambda_938783a7a9d4cf23ff264fef3f831840_::operator() @ 0x18046229C
 * Callers:
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1804624F4 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_938783a7a9d4cf23ff264fef3f831840_::operator()(_QWORD **a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, SID *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  int v10; // [rsp+60h] [rbp+28h] BYREF
  int v11; // [rsp+68h] [rbp+30h] BYREF
  __int64 v12; // [rsp+70h] [rbp+38h] BYREF
  __int64 v13; // [rsp+78h] [rbp+40h] BYREF

  v10 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)**a1 + 48LL))(**a1, &v10);
  if ( v2 < 0 )
  {
    v3 = 289LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( v10 )
  {
    v13 = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)**a1 + 40LL))(**a1, &v13);
    if ( v2 < 0 )
    {
      v3 = 293LL;
      goto LABEL_3;
    }
    v12 = 0LL;
    v5 = a1[1][9];
    v6 = *(__int64 (__fastcall **)(__int64, __int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v7 = v6(v5, v13, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, &v12);
    v2 = v7;
    if ( v7 < 0 )
    {
      v8 = 295LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      return (unsigned int)v2;
    }
    v11 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 80LL))(v12, &v11);
    v2 = v7;
    if ( v7 < 0 )
    {
      v8 = 297LL;
      goto LABEL_12;
    }
    *(_BYTE *)a1[2] = v11 != -1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  }
  return 0LL;
}
