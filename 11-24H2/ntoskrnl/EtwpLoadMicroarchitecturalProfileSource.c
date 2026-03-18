/*
 * XREFs of EtwpLoadMicroarchitecturalProfileSource @ 0x1407A89A8
 * Callers:
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A8694 (EtwpLoadMicroarchitecturalProfileGroup.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     wcsnlen @ 0x140500090 (wcsnlen.c)
 *     wcsncpy_s @ 0x140504980 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
 *     KiGetCpuVendor @ 0x140B6D9F4 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpLoadMicroarchitecturalProfileSource(int a1, struct _KAFFINITY_EX *a2, wchar_t *Src)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  __int64 Pool2; // rax
  char *v9; // rdi
  int CpuVendor; // eax
  __int64 v11; // r9
  ULONG v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+54h] [rbp-ACh] BYREF
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  int *v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+70h] [rbp-90h] BYREF
  int *v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+80h] [rbp-80h] BYREF
  int *v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+90h] [rbp-70h] BYREF
  int *v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+A0h] [rbp-60h] BYREF
  int *v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+C0h] [rbp-40h] BYREF
  int *v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+D0h] [rbp-30h] BYREF
  int *v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+E0h] [rbp-20h] BYREF
  int *v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+F0h] [rbp-10h] BYREF
  int *v42; // [rsp+F8h] [rbp-8h]
  int v43[2]; // [rsp+110h] [rbp+10h] BYREF
  const WCHAR *v44; // [rsp+120h] [rbp+20h]
  int *v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+130h] [rbp+30h]
  void *v47; // [rsp+148h] [rbp+48h]
  const WCHAR *v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  int v50; // [rsp+168h] [rbp+68h]
  void *v51; // [rsp+180h] [rbp+80h]
  const WCHAR *v52; // [rsp+190h] [rbp+90h]
  int *v53; // [rsp+198h] [rbp+98h]
  int v54; // [rsp+1A0h] [rbp+A0h]
  void *v55; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v56; // [rsp+1C8h] [rbp+C8h]
  int *v57; // [rsp+1D0h] [rbp+D0h]
  int v58; // [rsp+1D8h] [rbp+D8h]
  void *v59; // [rsp+1F0h] [rbp+F0h]
  const WCHAR *v60; // [rsp+200h] [rbp+100h]
  int *v61; // [rsp+208h] [rbp+108h]
  int v62; // [rsp+210h] [rbp+110h]
  void *v63; // [rsp+228h] [rbp+128h]
  const WCHAR *v64; // [rsp+238h] [rbp+138h]
  int *v65; // [rsp+240h] [rbp+140h]
  int v66; // [rsp+248h] [rbp+148h]
  void *v67; // [rsp+260h] [rbp+160h]
  const WCHAR *v68; // [rsp+270h] [rbp+170h]
  int *v69; // [rsp+278h] [rbp+178h]
  int v70; // [rsp+280h] [rbp+180h]
  void *v71; // [rsp+298h] [rbp+198h]
  const WCHAR *v72; // [rsp+2A8h] [rbp+1A8h]
  int *v73; // [rsp+2B0h] [rbp+1B0h]
  int v74; // [rsp+2B8h] [rbp+1B8h]
  void *v75; // [rsp+2D0h] [rbp+1D0h]
  const wchar_t *v76; // [rsp+2E0h] [rbp+1E0h]
  int *v77; // [rsp+2E8h] [rbp+1E8h]
  int v78; // [rsp+2F0h] [rbp+1F0h]
  void *v79; // [rsp+308h] [rbp+208h]
  const wchar_t *v80; // [rsp+318h] [rbp+218h]
  int *v81; // [rsp+320h] [rbp+220h]
  int v82; // [rsp+328h] [rbp+228h]

  if ( !Src )
    return 3221225473LL;
  v22 = 0;
  v18 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v6 = wcsnlen(Src, 0xFEuLL) + 1;
  v13 = -1;
  v14 = -1;
  v21 = 0x10000;
  memset_0(v43, 0, 0x268uLL);
  v46 = 4;
  *(_QWORD *)v43 = &EtwpQueryRegistryCallback;
  v45 = &v23;
  v44 = L"Event";
  v24 = &v13;
  v49 = &v25;
  v48 = L"Unit";
  v26 = &v14;
  v53 = &v27;
  v52 = L"Interval";
  v28 = &v21;
  v57 = &v29;
  v56 = L"AllowsHalt";
  v30 = &v22;
  v61 = &v31;
  v60 = L"CMask";
  v32 = &v15;
  v65 = &v33;
  v64 = L"EdgeDetect";
  v34 = &v17;
  v69 = &v35;
  v68 = L"AnyThread";
  v23 = 4;
  v47 = &EtwpQueryRegistryCallback;
  v50 = 4;
  v25 = 4;
  v51 = &EtwpQueryRegistryCallback;
  v54 = 4;
  v27 = 4;
  v55 = &EtwpQueryRegistryCallback;
  v58 = 4;
  v29 = 4;
  v59 = &EtwpQueryRegistryCallback;
  v62 = 4;
  v31 = 4;
  v63 = &EtwpQueryRegistryCallback;
  v66 = 4;
  v33 = 4;
  v67 = &EtwpQueryRegistryCallback;
  v70 = 4;
  v36 = &v18;
  v35 = 4;
  v73 = &v37;
  v71 = &EtwpQueryRegistryCallback;
  v72 = L"CMaskInvert";
  v38 = &v16;
  v77 = &v39;
  v76 = L"HostGuest";
  v40 = &v19;
  v81 = &v41;
  v80 = L"PmuType";
  v74 = 4;
  v37 = 4;
  v75 = &EtwpQueryRegistryCallback;
  v78 = 4;
  v39 = 4;
  v79 = &EtwpQueryRegistryCallback;
  v82 = 4;
  v41 = 4;
  v42 = &v20;
  result = RtlpQueryRegistryValues(0x40000000, a1, (int)v43, 0, v12, 1);
  if ( (int)result < 0 )
    return result;
  if ( v13 == -1 || v14 == -1 )
    return 3221225473LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  wcsncpy_s((wchar_t *)(Pool2 + 280), v6, Src, v6);
  *((_DWORD *)v9 + 5) = 0;
  *((_DWORD *)v9 + 4) = 2097153;
  memset_0(v9 + 24, 0, 0x100uLL);
  KiCopyAffinityEx((struct _KAFFINITY_EX *)(v9 + 16), *((_WORD *)v9 + 9), a2);
  CpuVendor = KiGetCpuVendor();
  if ( CpuVendor == 2 )
  {
    *v9 = v13;
    v9[1] = v14;
    v9[2] = v15;
    v9[3] = v16;
    v9[4] = v18;
    v9[5] = v17;
  }
  else if ( CpuVendor == 1 )
  {
    *(_WORD *)v9 = v13;
    v9[2] = v14;
    v9[3] = v15;
    v9[4] = v16;
    v9[5] = v17;
    v9[6] = v19;
    v9[7] = v20;
  }
  *((_DWORD *)v9 + 2) = v21;
  guard_dispatch_icall_no_overrides(20LL, 2 * v6 + 280, v9, v11);
  ExFreePoolWithTag(v9, 0x50777445u);
  return 0LL;
}
