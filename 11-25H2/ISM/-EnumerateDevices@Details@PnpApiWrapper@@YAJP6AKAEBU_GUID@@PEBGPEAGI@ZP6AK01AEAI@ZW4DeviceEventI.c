/*
 * XREFs of ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x180037654
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18008CCFC (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003795C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x180037F48 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x18009BE94 (--1-$unique_ptr@GU-$default_delete@G@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800C399C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PnpApiWrapper::Details::EnumerateDevices(
        __int64 (__fastcall *a1)(__int64, __int64, void *, _QWORD),
        const wchar_t *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r13d
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // r12
  void *v10; // rbx
  void *v11; // rsi
  void *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // esi
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // edx
  const wchar_t *v20; // rsi
  unsigned int v21; // ecx
  __int64 v22; // r12
  size_t v23; // rax
  UINT32 v24; // r14d
  unsigned int v25; // eax
  UINT32 v26; // edx
  HRESULT v27; // eax
  int v28; // edx
  unsigned int v29; // r8d
  __int64 v31; // rdx
  __int64 v32; // r9
  int v33; // [rsp+20h] [rbp-B8h]
  size_t MaxCount; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-A0h]
  const wchar_t *v36; // [rsp+40h] [rbp-98h]
  unsigned int v37; // [rsp+48h] [rbp-90h]
  void *v38; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall *v39)(__int64, __int64, void *, _QWORD); // [rsp+58h] [rbp-80h]
  __int64 v40; // [rsp+60h] [rbp-78h]
  void (__fastcall *v41)(_QWORD, HSTRING, __int64); // [rsp+68h] [rbp-70h]
  __int64 v42; // [rsp+70h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-60h] BYREF
  HSTRING string; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v35 = a4;
  v7 = a3;
  v36 = a2;
  v39 = a1;
  v37 = a3;
  v40 = a7;
  v42 = a7;
  v41 = (void (__fastcall *)(_QWORD, HSTRING, __int64))&PnpDeviceWatcher::OnPnpNotification;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
  v9 = (unsigned __int64)StringRawBuffer & -(__int64)(*StringRawBuffer != 0);
  v10 = 0LL;
  v38 = 0LL;
  LODWORD(MaxCount) = 0;
  v11 = 0LL;
  do
  {
    v12 = v11;
    v13 = ((__int64 (__fastcall *)(__int64, __int64, size_t *))v36)(v35, v9, &MaxCount);
    v15 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v13, v14);
    v16 = v15;
    if ( v15 == -2147023728 )
    {
      if ( v10 )
        operator delete(v10, (const struct std::nothrow_t *)2);
      return 2147943568LL;
    }
    if ( v15 < 0 )
    {
      v31 = 292LL;
      goto LABEL_34;
    }
    v17 = 2LL * (unsigned int)MaxCount;
    if ( !is_mul_ok((unsigned int)MaxCount, 2uLL) )
      v17 = -1LL;
    v10 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    v38 = v10;
    if ( v12 )
      operator delete(v12, (const struct std::nothrow_t *)2);
    if ( !v10 )
    {
      v16 = -2147024882;
      v32 = 2147942414LL;
      v31 = 296LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)v32,
        v33);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v38);
      return v16;
    }
    v18 = v39(v35, v9, v10, (unsigned int)MaxCount);
  }
  while ( v18 == 26 );
  v15 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v18, v19);
  v16 = v15;
  if ( v15 == -2147023728 )
  {
    operator delete(v10, (const struct std::nothrow_t *)2);
    return 2147943568LL;
  }
  if ( v15 < 0 )
  {
    v31 = 309LL;
LABEL_34:
    v32 = (unsigned int)v15;
    goto LABEL_35;
  }
  v20 = (const wchar_t *)v10;
  v36 = (const wchar_t *)v10;
  v21 = MaxCount;
  v22 = v40;
  while ( v21 && *v20 )
  {
    v23 = wcsnlen(v20, v21);
    v24 = v23;
    if ( v23 >= (unsigned int)MaxCount )
    {
      v16 = -2147418113;
      v32 = 2147549183LL;
      v31 = 322LL;
      goto LABEL_35;
    }
    string = 0LL;
    LODWORD(v35) = v23;
    v25 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v23);
    v26 = v25 - 1;
    if ( v24 < v25 )
      v26 = v24;
    v27 = WindowsCreateStringReference(v20, v26, &hstringHeader, &string);
    if ( v27 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27, v28, v29);
LABEL_31:
      v10 = v38;
      v20 = v36;
      v7 = v37;
      v22 = v42;
      v24 = v35;
    }
    else
    {
      try
      {
        v41(v7, string, v22);
      }
      catch ( ... )
      {
        goto LABEL_31;
      }
    }
    v20 += v24 + 1;
    v36 = v20;
    v21 = -1 - v24 + MaxCount;
    LODWORD(MaxCount) = v21;
  }
  if ( v10 )
    operator delete(v10, (const struct std::nothrow_t *)2);
  return 0LL;
}
