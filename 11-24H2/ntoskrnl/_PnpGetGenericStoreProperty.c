/*
 * XREFs of _PnpGetGenericStoreProperty @ 0x1408C5920
 * Callers:
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D24E0 (PiDqPnPGetObjectProperty.c)
 *     PiDevCfgCopyObjectProperties @ 0x1409CD594 (PiDevCfgCopyObjectProperties.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetGenericStoreProperty(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        __int64 a4,
        _DWORD *a5,
        void *a6,
        int a7,
        _DWORD *a8)
{
  __int64 v8; // r12
  const WCHAR *v10; // rax
  NTSTATUS v11; // edi
  __int64 v12; // rcx
  wchar_t *v13; // rax
  wchar_t *Pool2; // rdi
  unsigned int v15; // ebx
  int v16; // ebx
  __int64 v17; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *); // rax
  NTSTATUS v21; // eax
  NTSTATUS v22; // ecx
  int v23; // eax
  __int64 v24; // [rsp+90h] [rbp-80h] BYREF
  int v25; // [rsp+98h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-70h] BYREF
  void *v27; // [rsp+A8h] [rbp-68h]
  const WCHAR *v28; // [rsp+B0h] [rbp-60h]
  __int64 v29; // [rsp+B8h] [rbp-58h]
  _DWORD *v30; // [rsp+C0h] [rbp-50h]
  _DWORD *v31; // [rsp+C8h] [rbp-48h]
  wchar_t pszDest[48]; // [rsp+D0h] [rbp-40h] BYREF
  wchar_t P[64]; // [rsp+130h] [rbp+20h] BYREF

  v8 = 0LL;
  v29 = a2;
  v10 = a3;
  v27 = a6;
  *a5 = 0;
  v28 = a3;
  v30 = a5;
  *a8 = 0;
  v31 = a8;
  Handle = 0LL;
  v25 = 0;
  HIDWORD(v24) = 0;
  LOBYTE(v24) = 0;
  if ( a3 )
  {
    v19 = 85LL;
    while ( *v10 )
    {
      ++v10;
      if ( !--v19 )
        return 3221225485LL;
    }
  }
  v11 = RtlStringCchPrintfExW(
          pszDest,
          0x30uLL,
          0LL,
          0LL,
          0x800u,
          L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
          *(_DWORD *)a4,
          *(unsigned __int16 *)(a4 + 4),
          *(unsigned __int16 *)(a4 + 6),
          *(unsigned __int8 *)(a4 + 8),
          *(unsigned __int8 *)(a4 + 9),
          *(unsigned __int8 *)(a4 + 10),
          *(unsigned __int8 *)(a4 + 11),
          *(unsigned __int8 *)(a4 + 12),
          *(unsigned __int8 *)(a4 + 13),
          *(unsigned __int8 *)(a4 + 14),
          *(unsigned __int8 *)(a4 + 15),
          *(_DWORD *)(a4 + 16),
          v24);
  if ( v11 >= 0 )
  {
    Handle = 0LL;
    v12 = 512LL;
    v13 = pszDest;
    while ( *v13 )
    {
      ++v13;
      if ( !--v12 )
      {
        v11 = -1073741811;
        goto LABEL_20;
      }
    }
    if ( (unsigned __int64)(512 - v12) >= 0x30 )
    {
      v15 = 512 - v12 + 12;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v15, 0x52504E50u);
      if ( !Pool2 )
      {
        v11 = -1073741801;
        goto LABEL_20;
      }
    }
    else
    {
      Pool2 = P;
      v15 = 59;
    }
    v16 = RtlStringCchPrintfExW(Pool2, v15, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", pszDest);
    if ( v16 >= 0 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(a1 + 224);
        if ( v17 )
          v8 = *(_QWORD *)(v17 + 8);
      }
      v16 = RegRtlOpenKeyTransacted(v29, Pool2, 0, 1u, &Handle, v8);
      if ( v16 == -1073741444 )
        v16 = -1073741772;
    }
    if ( Pool2 && Pool2 != P )
      ExFreePoolWithTag(Pool2, 0);
    if ( v16 != -1073741772 )
    {
      v11 = v16;
      if ( v16 < 0 )
        goto LABEL_20;
      v20 = *(__int64 (__fastcall **)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *))(a1 + 520);
      HIDWORD(v24) = a7;
      if ( !v20 || v20 == PnpRegQueryValueIndirect )
        v21 = PnpRegQueryValueIndirect(a1, Handle, v28, &v25, v27, (ULONG *)&v24 + 1, (bool *)&v24);
      else
        v21 = guard_dispatch_icall_no_overrides(a1, Handle);
      v22 = v21;
      if ( v21 != -1073741772 && v21 != -1073741444 )
      {
        if ( !v21 || v21 == -1073741789 )
        {
          v23 = (unsigned __int16)v25;
          *v30 = (unsigned __int16)v25;
          if ( v23 != 1 )
          {
            *v31 = HIDWORD(v24);
            if ( v22 || !a7 )
              v11 = -1073741789;
          }
        }
        else
        {
          v11 = v21;
        }
        goto LABEL_20;
      }
    }
    v11 = -1073741275;
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
