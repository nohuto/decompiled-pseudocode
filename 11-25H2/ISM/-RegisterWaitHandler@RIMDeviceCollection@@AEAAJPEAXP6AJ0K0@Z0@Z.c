/*
 * XREFs of ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x18000F058
 * Callers:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18004D808 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RIMDeviceCollection::RegisterWaitHandler(
        RIMDeviceCollection *this,
        void *a2,
        int (*a3)(void *, unsigned int, void *),
        void *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v7 = CoreUICreate(&v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 1194LL;
LABEL_10:
    v12 = (unsigned int)v7;
    goto LABEL_11;
  }
  if ( !v15 )
  {
    v8 = -2147418113;
    v12 = 2147549183LL;
    v11 = 1198LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v12,
      v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    return v8;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, void *, int (*)(void *, unsigned int, void *), void *))(*(_QWORD *)v15 + 272LL))(
         v15,
         a2,
         a3,
         a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 1204LL;
    goto LABEL_10;
  }
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
