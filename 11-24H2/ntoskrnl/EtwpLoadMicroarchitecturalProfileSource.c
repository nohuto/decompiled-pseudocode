/*
 * XREFs of EtwpLoadMicroarchitecturalProfileSource @ 0x1407A8AE8
 * Callers:
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A87D4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     wcsnlen @ 0x1404FD950 (wcsnlen.c)
 *     wcsncpy_s @ 0x140502240 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     KiGetCpuVendor @ 0x140B6F294 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpLoadMicroarchitecturalProfileSource(int a1, struct _KAFFINITY_EX *a2, wchar_t *Src)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  __int64 Pool2; // rax
  char *v9; // rdi
  int CpuVendor; // eax
  ULONG v11; // [rsp+20h] [rbp-E0h]
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  int *v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+70h] [rbp-90h] BYREF
  int *v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+80h] [rbp-80h] BYREF
  int *v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+90h] [rbp-70h] BYREF
  int *v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h] BYREF
  int *v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+B0h] [rbp-50h] BYREF
  int *v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+C0h] [rbp-40h] BYREF
  int *v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h] BYREF
  int *v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+E0h] [rbp-20h] BYREF
  int *v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+F0h] [rbp-10h] BYREF
  int *v41; // [rsp+F8h] [rbp-8h]
  int v42[2]; // [rsp+110h] [rbp+10h] BYREF
  const WCHAR *v43; // [rsp+120h] [rbp+20h]
  int *v44; // [rsp+128h] [rbp+28h]
  int v45; // [rsp+130h] [rbp+30h]
  void *v46; // [rsp+148h] [rbp+48h]
  const WCHAR *v47; // [rsp+158h] [rbp+58h]
  int *v48; // [rsp+160h] [rbp+60h]
  int v49; // [rsp+168h] [rbp+68h]
  void *v50; // [rsp+180h] [rbp+80h]
  const WCHAR *v51; // [rsp+190h] [rbp+90h]
  int *v52; // [rsp+198h] [rbp+98h]
  int v53; // [rsp+1A0h] [rbp+A0h]
  void *v54; // [rsp+1B8h] [rbp+B8h]
  const wchar_t *v55; // [rsp+1C8h] [rbp+C8h]
  int *v56; // [rsp+1D0h] [rbp+D0h]
  int v57; // [rsp+1D8h] [rbp+D8h]
  void *v58; // [rsp+1F0h] [rbp+F0h]
  const WCHAR *v59; // [rsp+200h] [rbp+100h]
  int *v60; // [rsp+208h] [rbp+108h]
  int v61; // [rsp+210h] [rbp+110h]
  void *v62; // [rsp+228h] [rbp+128h]
  const WCHAR *v63; // [rsp+238h] [rbp+138h]
  int *v64; // [rsp+240h] [rbp+140h]
  int v65; // [rsp+248h] [rbp+148h]
  void *v66; // [rsp+260h] [rbp+160h]
  const WCHAR *v67; // [rsp+270h] [rbp+170h]
  int *v68; // [rsp+278h] [rbp+178h]
  int v69; // [rsp+280h] [rbp+180h]
  void *v70; // [rsp+298h] [rbp+198h]
  const WCHAR *v71; // [rsp+2A8h] [rbp+1A8h]
  int *v72; // [rsp+2B0h] [rbp+1B0h]
  int v73; // [rsp+2B8h] [rbp+1B8h]
  void *v74; // [rsp+2D0h] [rbp+1D0h]
  const wchar_t *v75; // [rsp+2E0h] [rbp+1E0h]
  int *v76; // [rsp+2E8h] [rbp+1E8h]
  int v77; // [rsp+2F0h] [rbp+1F0h]
  void *v78; // [rsp+308h] [rbp+208h]
  const wchar_t *v79; // [rsp+318h] [rbp+218h]
  int *v80; // [rsp+320h] [rbp+220h]
  int v81; // [rsp+328h] [rbp+228h]

  if ( !Src )
    return 3221225473LL;
  v21 = 0;
  v17 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v6 = wcsnlen(Src, 0xFEuLL) + 1;
  v12 = -1;
  v13 = -1;
  v20 = 0x10000;
  memset_0(v42, 0, 0x268uLL);
  v45 = 4;
  *(_QWORD *)v42 = &EtwpQueryRegistryCallback;
  v44 = &v22;
  v43 = L"Event";
  v23 = &v12;
  v48 = &v24;
  v47 = L"Unit";
  v25 = &v13;
  v52 = &v26;
  v51 = L"Interval";
  v27 = &v20;
  v56 = &v28;
  v55 = L"AllowsHalt";
  v29 = &v21;
  v60 = &v30;
  v59 = L"CMask";
  v31 = &v14;
  v64 = &v32;
  v63 = L"EdgeDetect";
  v33 = &v16;
  v68 = &v34;
  v67 = L"AnyThread";
  v22 = 4;
  v46 = &EtwpQueryRegistryCallback;
  v49 = 4;
  v24 = 4;
  v50 = &EtwpQueryRegistryCallback;
  v53 = 4;
  v26 = 4;
  v54 = &EtwpQueryRegistryCallback;
  v57 = 4;
  v28 = 4;
  v58 = &EtwpQueryRegistryCallback;
  v61 = 4;
  v30 = 4;
  v62 = &EtwpQueryRegistryCallback;
  v65 = 4;
  v32 = 4;
  v66 = &EtwpQueryRegistryCallback;
  v69 = 4;
  v35 = &v17;
  v34 = 4;
  v72 = &v36;
  v70 = &EtwpQueryRegistryCallback;
  v71 = L"CMaskInvert";
  v37 = &v15;
  v76 = &v38;
  v75 = L"HostGuest";
  v39 = &v18;
  v80 = &v40;
  v79 = L"PmuType";
  v73 = 4;
  v36 = 4;
  v74 = &EtwpQueryRegistryCallback;
  v77 = 4;
  v38 = 4;
  v78 = &EtwpQueryRegistryCallback;
  v81 = 4;
  v40 = 4;
  v41 = &v19;
  result = RtlpQueryRegistryValues(0x40000000, a1, (int)v42, 0, v11, 1);
  if ( (int)result < 0 )
    return result;
  if ( v12 == -1 || v13 == -1 )
    return 3221225473LL;
  Pool2 = ExAllocatePool2(0x100uLL, 2 * v6 + 280, 0x50777445u);
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
    *v9 = v12;
    v9[1] = v13;
    v9[2] = v14;
    v9[3] = v15;
    v9[4] = v17;
    v9[5] = v16;
  }
  else if ( CpuVendor == 1 )
  {
    *(_WORD *)v9 = v12;
    v9[2] = v13;
    v9[3] = v14;
    v9[4] = v15;
    v9[5] = v16;
    v9[6] = v18;
    v9[7] = v19;
  }
  *((_DWORD *)v9 + 2) = v20;
  guard_dispatch_icall_no_overrides(20LL, 2 * v6 + 280);
  ExFreePoolWithTag(v9, 0x50777445u);
  return 0LL;
}
