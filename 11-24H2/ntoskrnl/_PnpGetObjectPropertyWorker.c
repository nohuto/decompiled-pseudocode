/*
 * XREFs of _PnpGetObjectPropertyWorker @ 0x1408CB050
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE4D0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF120 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D24E0 (PiDqPnPGetObjectProperty.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpDispatchDevice @ 0x1408CB5A0 (_PnpDispatchDevice.c)
 *     DrvDbDispatchDriverPackage @ 0x140926230 (DrvDbDispatchDriverPackage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectPropertyWorker(
        _QWORD *a1,
        WCHAR *a2,
        int a3,
        HANDLE a4,
        const WCHAR *a5,
        __int64 a6,
        int *a7,
        void *a8,
        ULONG a9,
        ULONG *a10,
        int a11)
{
  __int64 v11; // r15
  void *v12; // r12
  ULONG v16; // edx
  __int64 (__fastcall *v17)(int, int, int, int, __int64); // rax
  int v18; // eax
  int v19; // ebx
  const WCHAR *v21; // rax
  __int64 v22; // rcx
  wchar_t *v23; // rax
  wchar_t *Pool2; // rbx
  unsigned int v25; // edi
  NTSTATUS v26; // eax
  __int64 v27; // r14
  int v28; // edi
  __int64 v29; // rax
  int *v30; // r15
  ULONG *v31; // r14
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *); // rax
  ULONG v34; // esi
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  __int64 v38; // [rsp+90h] [rbp-80h] BYREF
  ULONG *v39; // [rsp+98h] [rbp-78h]
  ULONG v40; // [rsp+A0h] [rbp-70h] BYREF
  int *v41; // [rsp+A8h] [rbp-68h]
  int v42; // [rsp+B0h] [rbp-60h] BYREF
  ULONG v43; // [rsp+B4h] [rbp-5Ch]
  HANDLE v44; // [rsp+B8h] [rbp-58h] BYREF
  HANDLE v45; // [rsp+C0h] [rbp-50h]
  const WCHAR *v46; // [rsp+C8h] [rbp-48h]
  HANDLE Handle; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD *v48; // [rsp+D8h] [rbp-38h]
  wchar_t pszDest[4]; // [rsp+E0h] [rbp-30h] BYREF
  const WCHAR *v50; // [rsp+E8h] [rbp-28h]
  __int64 v51; // [rsp+F0h] [rbp-20h]
  int *v52; // [rsp+F8h] [rbp-18h]
  void *v53; // [rsp+100h] [rbp-10h]
  ULONG v54; // [rsp+108h] [rbp-8h]
  int v55; // [rsp+10Ch] [rbp-4h]
  ULONG *v56; // [rsp+110h] [rbp+0h]
  int v57; // [rsp+118h] [rbp+8h]
  int v58; // [rsp+11Ch] [rbp+Ch]
  wchar_t P[64]; // [rsp+140h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = a8;
  v45 = a4;
  v48 = a1;
  v41 = a7;
  v39 = a10;
  v46 = a5;
  Handle = 0LL;
  if ( (_WORD)a11 )
    return 3221225485LL;
  if ( a8 )
  {
    v16 = a9;
    if ( !a9 )
      v12 = 0LL;
  }
  else
  {
    v16 = 0;
  }
  *a7 = 0;
  v43 = v16;
  *a10 = 0;
  v55 = 0;
  v58 = 0;
  if ( (unsigned int)(a3 - 1) > 0xA )
  {
LABEL_47:
    v19 = -1073741811;
  }
  else
  {
    v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))a1[a3 + 37];
    if ( v17 )
    {
      v57 = a11;
      v52 = a7;
      v54 = v16;
      v56 = a10;
      *(_QWORD *)pszDest = a4;
      v50 = a5;
      v51 = a6;
      v53 = v12;
      if ( v17 == PnpDispatchDevice )
      {
        v18 = PnpDispatchDevice((int)a1, (int)a2, a3, 8, (__int64)pszDest);
      }
      else if ( (char *)v17 == (char *)PnpDispatchDeviceInterface )
      {
        v18 = PnpDispatchDeviceInterface(a1, a2, (unsigned int)a3, 8, pszDest);
      }
      else if ( v17 == DrvDbDispatchDriverPackage )
      {
        v18 = DrvDbDispatchDriverPackage((_DWORD)a1, (_DWORD)a2, a3, 8, (__int64)pszDest);
      }
      else
      {
        v18 = guard_dispatch_icall_no_overrides(a1, a2);
      }
      v19 = v18;
      if ( v18 != -1073741802 )
        goto LABEL_10;
      if ( v45 )
        goto LABEL_16;
      v19 = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
      if ( v19 >= 0 )
      {
        v45 = Handle;
LABEL_16:
        v44 = 0LL;
        v42 = 0;
        v40 = 0;
        *v41 = 0;
        LOBYTE(v38) = 0;
        *v39 = 0;
        v21 = v46;
        if ( v46 )
        {
          v32 = 85LL;
          while ( *v21 )
          {
            ++v21;
            if ( !--v32 )
              goto LABEL_47;
          }
        }
        v19 = RtlStringCchPrintfExW(
                pszDest,
                0x30uLL,
                0LL,
                0LL,
                0x800u,
                L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
                *(_DWORD *)a6,
                *(unsigned __int16 *)(a6 + 4),
                *(unsigned __int16 *)(a6 + 6),
                *(unsigned __int8 *)(a6 + 8),
                *(unsigned __int8 *)(a6 + 9),
                *(unsigned __int8 *)(a6 + 10),
                *(unsigned __int8 *)(a6 + 11),
                *(unsigned __int8 *)(a6 + 12),
                *(unsigned __int8 *)(a6 + 13),
                *(unsigned __int8 *)(a6 + 14),
                *(unsigned __int8 *)(a6 + 15),
                *(_DWORD *)(a6 + 16),
                v38);
        if ( v19 < 0 )
          goto LABEL_35;
        v44 = 0LL;
        v22 = 512LL;
        v23 = pszDest;
        while ( *v23 )
        {
          ++v23;
          if ( !--v22 )
          {
            v19 = -1073741811;
            goto LABEL_35;
          }
        }
        if ( (unsigned __int64)(512 - v22) >= 0x30 )
        {
          v25 = 512 - v22 + 12;
          Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v25, 0x52504E50u);
          if ( !Pool2 )
          {
            v19 = -1073741801;
            goto LABEL_35;
          }
        }
        else
        {
          Pool2 = P;
          v25 = 59;
        }
        v26 = RtlStringCchPrintfExW(Pool2, v25, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", pszDest);
        v27 = (__int64)v48;
        v28 = v26;
        if ( v26 >= 0 )
        {
          if ( v48 )
          {
            v29 = v48[28];
            if ( v29 )
              v11 = *(_QWORD *)(v29 + 8);
          }
          v28 = RegRtlOpenKeyTransacted((__int64)v45, Pool2, 0, 1u, &v44, v11);
          if ( v28 == -1073741444 )
            v28 = -1073741772;
        }
        if ( Pool2 && Pool2 != P )
          ExFreePoolWithTag(Pool2, 0);
        if ( v28 == -1073741772 )
          goto LABEL_34;
        v19 = v28;
        if ( v28 < 0 )
          goto LABEL_35;
        v33 = *(__int64 (__fastcall **)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *))(v27 + 520);
        v34 = v43;
        v40 = v43;
        if ( !v33 || v33 == PnpRegQueryValueIndirect )
          v35 = PnpRegQueryValueIndirect(v27, v44, v46, &v42, v12, &v40, (bool *)&v38);
        else
          v35 = guard_dispatch_icall_no_overrides(v27, v44);
        v36 = v35;
        if ( v35 == -1073741772 || v35 == -1073741444 )
        {
LABEL_34:
          v19 = -1073741275;
        }
        else
        {
          if ( !v35 || v35 == -1073741789 )
          {
            v37 = (unsigned __int16)v42;
            v30 = v41;
            *v41 = (unsigned __int16)v42;
            if ( v37 != 1 )
            {
              v31 = v39;
              *v39 = v40;
              if ( v36 || !v34 )
                v19 = -1073741789;
              goto LABEL_37;
            }
LABEL_36:
            v31 = v39;
LABEL_37:
            if ( v44 )
              ZwClose(v44);
            if ( v19 >= 0 )
              v19 = PnpValidatePropertyData((__int64 *)v12, *v31, *v30);
            goto LABEL_10;
          }
          v19 = v35;
        }
LABEL_35:
        v30 = v41;
        goto LABEL_36;
      }
    }
    else
    {
      v19 = -1073741822;
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v19;
}
