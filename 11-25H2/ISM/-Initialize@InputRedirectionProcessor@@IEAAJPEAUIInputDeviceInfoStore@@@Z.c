/*
 * XREFs of ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18000EE68
 * Callers:
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x18007C530 (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18000F140 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18007F65C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::Initialize(
        InputRedirectionProcessor *this,
        struct IInputDeviceInfoStore *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HLOCAL, const wchar_t *, char *); // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, unsigned __int64, _QWORD, _QWORD); // rdi
  __int64 v12; // rdx
  __int64 v14; // rdx
  const char *v15; // [rsp+20h] [rbp-30h]
  HLOCAL hMem; // [rsp+40h] [rbp-10h] BYREF
  char v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v19; // [rsp+70h] [rbp+20h] BYREF

  v19 = 0;
  hMem = 0LL;
  v17 = 0;
  *((_QWORD *)this + 9) = a2;
  v3 = (__int64 *)((char *)this + 40);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  v5 = CoreUICreate(v3);
  if ( v5 < 0 )
  {
    v12 = 26LL;
    goto LABEL_8;
  }
  v6 = InputSecurityDescriptor::QueryDescriptor(&hMem, v4, L"System\\TouchInputRedirection");
  v5 = v6;
  if ( v6 < 0 )
  {
    v14 = 30LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system"
                    "\\lib\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v6,
      (int)v15);
    goto LABEL_20;
  }
  v7 = *v3;
  v8 = *(__int64 (__fastcall **)(__int64, HLOCAL, const wchar_t *, char *))(*(_QWORD *)v7 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  v6 = v8(v7, hMem, L"System\\TouchInputRedirection", (char *)this + 56);
  v5 = v6;
  if ( v6 < 0 )
  {
    v14 = 35LL;
    goto LABEL_18;
  }
  v9 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v6 = CoreUIFactoryCreate((char *)this + 48);
  v5 = v6;
  if ( v6 < 0 )
  {
    v14 = 37LL;
    goto LABEL_18;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
         *v9,
         &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb,
         &v19);
  if ( v5 >= 0 )
  {
    v10 = *v9;
    v11 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
    v15 = L"TouchInputRedirection";
    v5 = v11(v10, ((unsigned __int64)this + 8) & -(__int64)(this != 0LL), 0LL, v19);
    if ( v5 < 0 )
    {
      v12 = 49LL;
      goto LABEL_8;
    }
    v5 = 0;
LABEL_20:
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&hMem);
    return (unsigned int)v5;
  }
  v12 = 41LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\"
                  "lib\\inputredirectionprocessor.cpp",
    (const char *)(unsigned int)v5,
    (int)v15);
  if ( hMem )
  {
    if ( v17 )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(hMem);
  }
  return (unsigned int)v5;
}
