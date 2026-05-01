/*
 * XREFs of MsixvcUpdatePolicyInternal @ 0x180007B00
 * Callers:
 *     MsixvcUpdatePolicyString @ 0x1800088D0 (MsixvcUpdatePolicyString.c)
 *     MsixvcUpdatePolicyUInt64 @ 0x180008920 (MsixvcUpdatePolicyUInt64.c)
 * Callees:
 *     __security_check_cookie @ 0x180002210 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005C04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180006FAC (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800070E4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007100 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MsixvcUpdatePolicyInternal(
        const WCHAR *a1,
        const WCHAR *a2,
        unsigned int a3,
        const WCHAR *a4,
        __int64 a5)
{
  HRESULT v7; // eax
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  IUnknown *v10; // rcx
  HRESULT v12; // eax
  unsigned int v13; // r8d
  IUnknown *v14; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  IUnknown *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  IUnknown *v22; // rcx
  __int64 v23; // rcx
  IUnknown *v24; // rcx
  HRESULT v25; // eax
  HSTRING v26; // rbx
  int v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rcx
  IUnknown *v31; // rcx
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int64, PVOID, _QWORD, int *); // rdi
  HSTRING_HEADER *v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  IUnknown *v39; // rcx
  int v40; // eax
  unsigned int v41; // r8d
  const WCHAR *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  IUnknown *v45; // rcx
  const WCHAR *v46; // rbx
  __int64 (__fastcall *v47)(const WCHAR *, PVOID); // rdi
  HSTRING_HEADER *v48; // rax
  int v49; // eax
  const WCHAR *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  IUnknown *v53; // rcx
  int v54; // eax
  const WCHAR *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  IUnknown *v58; // rcx
  int v59; // eax
  const WCHAR *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  IUnknown *v63; // rcx
  HRESULT v64; // eax
  HSTRING v65; // rbx
  __int64 v66; // rcx
  const WCHAR *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  IUnknown *v71; // rcx
  int v72; // eax
  unsigned int v73; // r8d
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  IUnknown *v77; // rcx
  __int64 v78; // rbx
  __int64 (__fastcall *v79)(__int64, PVOID); // rdi
  HSTRING_HEADER *v80; // rax
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rcx
  IUnknown *v85; // rcx
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  IUnknown *v90; // rcx
  int v91; // eax
  unsigned int v92; // r8d
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  IUnknown *v96; // rcx
  __int64 v97; // rbx
  __int64 (__fastcall *v98)(__int64, PVOID); // rdi
  HSTRING_HEADER *v99; // rax
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  IUnknown *v104; // rcx
  int v105; // eax
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  IUnknown *v109; // rcx
  int v110; // eax
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  IUnknown *v114; // rcx
  const WCHAR *v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  IUnknown *v118; // rcx
  int v119[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v120; // [rsp+48h] [rbp-49h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-41h] BYREF
  __int64 v122; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v123[8]; // [rsp+60h] [rbp-31h] BYREF
  const WCHAR *v124; // [rsp+68h] [rbp-29h] BYREF
  int v125; // [rsp+70h] [rbp-21h] BYREF
  const WCHAR *v126; // [rsp+78h] [rbp-19h] BYREF
  const WCHAR *v127; // [rsp+80h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-9h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v124 = a1;
  v126 = a2;
  v127 = a4;
  pProxy = 0LL;
  v120 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &pProxy);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v10 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
    }
    return v9;
  }
  v12 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, (OLECHAR *)0xFFFFFFFFFFFFFFFFLL, 0, 3u, 0LL, 0x40u);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v12);
  v14 = pProxy;
  AddRef = pProxy->lpVtbl[15].AddRef;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v124, v13);
  v17 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, PVOID, __int64 *))AddRef)(
          v14,
          0LL,
          v16[1].Reserved.Reserved1,
          &v120);
  v9 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v17);
    v18 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
    }
    return v9;
  }
  v125 = 0;
  if ( (int)IsDeveloperModeEnabled(&v125) < 0 || !v125 )
  {
    v123[0] = 0;
    v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v120 + 320LL))(v120, v123);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v20);
      v21 = v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = pProxy;
      if ( pProxy )
      {
        pProxy = 0LL;
        ((void (__fastcall *)(IUnknown *))v22->lpVtbl->Release)(v22);
      }
      return v9;
    }
    if ( !v123[0] )
    {
      v9 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)0x80070057LL);
      v23 = v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = pProxy;
      if ( pProxy )
      {
        pProxy = 0LL;
        ((void (__fastcall *)(IUnknown *))v24->lpVtbl->Release)(v24);
      }
      return v9;
    }
  }
  v122 = 0LL;
  *(_QWORD *)v119 = 0LL;
  string = 0LL;
  v25 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &string);
  if ( v25 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
    JUMPOUT(0x1800088C8LL);
  }
  v26 = string;
  if ( v122 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v122 + 16LL))(v122);
  v27 = RoGetActivationFactory(v26, &GUID_93b105c2_0759_4c56_b8da_6e8f72ac464e, &v122);
  v9 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v27);
    v29 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v31->lpVtbl->Release)(v31);
    }
    return v9;
  }
  v32 = v122;
  v33 = *(__int64 (__fastcall **)(__int64, __int64, PVOID, _QWORD, int *))(*(_QWORD *)v122 + 488LL);
  v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v126, v28);
  v35 = v33(v32, v120, v34[1].Reserved.Reserved1, a3, v119);
  v9 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v35);
    v36 = *(_QWORD *)v119;
    if ( *(_QWORD *)v119 )
    {
      *(_QWORD *)v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v39->lpVtbl->Release)(v39);
    }
    return v9;
  }
  if ( !*(_QWORD *)v119 )
  {
    string = 0LL;
    v64 = WindowsCreateStringReference(
            L"Windows.Internal.StateRepository.PackagePolicy",
            0x2Eu,
            &hstringHeader,
            &string);
    if ( v64 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v64);
      __debugbreak();
    }
    v65 = string;
    v66 = *(_QWORD *)v119;
    if ( *(_QWORD *)v119 )
    {
      *(_QWORD *)v119 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    *(_QWORD *)v119 = 0LL;
    v124 = 0LL;
    v9 = RoActivateInstance(v65, &v124);
    if ( (v9 & 0x80000000) == 0 )
    {
      if ( *(_QWORD *)&GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        v67 = v124;
        *(_QWORD *)v119 = v124;
LABEL_100:
        if ( (v9 & 0x80000000) != 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)v9);
          v68 = *(_QWORD *)v119;
          if ( *(_QWORD *)v119 )
          {
            *(_QWORD *)v119 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
          }
          v69 = v122;
          if ( v122 )
          {
            v122 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
          }
          v70 = v120;
          if ( v120 )
          {
            v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
          }
          v71 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v71->lpVtbl->Release)(v71);
          }
          return v9;
        }
        v72 = (*(__int64 (__fastcall **)(const WCHAR *, __int64))(*(_QWORD *)v67 + 136LL))(v67, v120);
        v9 = v72;
        if ( v72 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4A,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v72);
          v74 = *(_QWORD *)v119;
          if ( *(_QWORD *)v119 )
          {
            *(_QWORD *)v119 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
          }
          v75 = v122;
          if ( v122 )
          {
            v122 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
          }
          v76 = v120;
          if ( v120 )
          {
            v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
          }
          v77 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v77->lpVtbl->Release)(v77);
          }
          return v9;
        }
        v78 = *(_QWORD *)v119;
        v79 = *(__int64 (__fastcall **)(__int64, PVOID))(**(_QWORD **)v119 + 152LL);
        v80 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v126, v73);
        v81 = v79(v78, v80[1].Reserved.Reserved1);
        v9 = v81;
        if ( v81 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4B,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v81);
          v82 = *(_QWORD *)v119;
          if ( *(_QWORD *)v119 )
          {
            *(_QWORD *)v119 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
          }
          v83 = v122;
          if ( v122 )
          {
            v122 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
          }
          v84 = v120;
          if ( v120 )
          {
            v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
          }
          v85 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v85->lpVtbl->Release)(v85);
          }
          return v9;
        }
        v86 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v119 + 168LL))(*(_QWORD *)v119, a3);
        v9 = v86;
        if ( v86 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4C,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v86);
          v87 = *(_QWORD *)v119;
          if ( *(_QWORD *)v119 )
          {
            *(_QWORD *)v119 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
          }
          v88 = v122;
          if ( v122 )
          {
            v122 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
          }
          v89 = v120;
          if ( v120 )
          {
            v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
          }
          v90 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v90->lpVtbl->Release)(v90);
          }
          return v9;
        }
        v91 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v119 + 216LL))(*(_QWORD *)v119, a5);
        v9 = v91;
        if ( v91 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v91);
          v93 = *(_QWORD *)v119;
          if ( *(_QWORD *)v119 )
          {
            *(_QWORD *)v119 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
          }
          v94 = v122;
          if ( v122 )
          {
            v122 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
          }
          v95 = v120;
          if ( v120 )
          {
            v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
          }
          v96 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v96->lpVtbl->Release)(v96);
          }
          return v9;
        }
        if ( a4 )
        {
          v97 = *(_QWORD *)v119;
          v98 = *(__int64 (__fastcall **)(__int64, PVOID))(**(_QWORD **)v119 + 200LL);
          v99 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v127, v92);
          v100 = v98(v97, v99[1].Reserved.Reserved1);
          v9 = v100;
          if ( v100 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x51,
              (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
              (const char *)(unsigned int)v100);
            v101 = *(_QWORD *)v119;
            if ( *(_QWORD *)v119 )
            {
              *(_QWORD *)v119 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
            }
            v102 = v122;
            if ( v122 )
            {
              v122 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
            }
            v103 = v120;
            if ( v120 )
            {
              v120 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
            }
            v104 = pProxy;
            if ( pProxy )
            {
              pProxy = 0LL;
              ((void (__fastcall *)(IUnknown *))v104->lpVtbl->Release)(v104);
            }
            return v9;
          }
        }
        else
        {
          v105 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v119 + 184LL))(*(_QWORD *)v119);
          v9 = v105;
          if ( v105 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x55,
              (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
              (const char *)(unsigned int)v105);
            v106 = *(_QWORD *)v119;
            if ( *(_QWORD *)v119 )
            {
              *(_QWORD *)v119 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 16LL))(v106);
            }
            v107 = v122;
            if ( v122 )
            {
              v122 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
            }
            v108 = v120;
            if ( v120 )
            {
              v120 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 16LL))(v108);
            }
            v109 = pProxy;
            if ( pProxy )
            {
              pProxy = 0LL;
              ((void (__fastcall *)(IUnknown *))v109->lpVtbl->Release)(v109);
            }
            return v9;
          }
        }
        v110 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v122 + 48LL))(v122, *(_QWORD *)v119);
        v9 = v110;
        if ( v110 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            (const char *)(unsigned int)v110);
          v111 = *(_QWORD *)v119;
          if ( *(_QWORD *)v119 )
          {
            *(_QWORD *)v119 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 16LL))(v111);
          }
          v112 = v122;
          if ( v122 )
          {
            v122 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 16LL))(v112);
          }
          v113 = v120;
          if ( v120 )
          {
            v120 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 16LL))(v113);
          }
          v114 = pProxy;
          if ( pProxy )
          {
            pProxy = 0LL;
            ((void (__fastcall *)(IUnknown *))v114->lpVtbl->Release)(v114);
          }
          return v9;
        }
        goto LABEL_181;
      }
      v9 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, int *))v124)(
             v124,
             &GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04,
             v119);
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v124 + 16LL))(v124);
    }
    v67 = *(const WCHAR **)v119;
    goto LABEL_100;
  }
  v40 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v119 + 216LL))(*(_QWORD *)v119, a5);
  v9 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v40);
    v42 = *(const WCHAR **)v119;
    if ( *(_QWORD *)v119 )
    {
      *(_QWORD *)v119 = 0LL;
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v43 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v45->lpVtbl->Release)(v45);
    }
    return v9;
  }
  if ( a4 )
  {
    v46 = *(const WCHAR **)v119;
    v47 = *(__int64 (__fastcall **)(const WCHAR *, PVOID))(**(_QWORD **)v119 + 200LL);
    v48 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v127, v41);
    v49 = v47(v46, v48[1].Reserved.Reserved1);
    v9 = v49;
    if ( v49 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v49);
      v50 = *(const WCHAR **)v119;
      if ( *(_QWORD *)v119 )
      {
        *(_QWORD *)v119 = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v50 + 16LL))(v50);
      }
      v51 = v122;
      if ( v122 )
      {
        v122 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
      }
      v52 = v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      }
      v53 = pProxy;
      if ( pProxy )
      {
        pProxy = 0LL;
        ((void (__fastcall *)(IUnknown *))v53->lpVtbl->Release)(v53);
      }
      return v9;
    }
  }
  else
  {
    v54 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v119 + 184LL))(*(_QWORD *)v119);
    v9 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v54);
      v55 = *(const WCHAR **)v119;
      if ( *(_QWORD *)v119 )
      {
        *(_QWORD *)v119 = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = v122;
      if ( v122 )
      {
        v122 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      v58 = pProxy;
      if ( pProxy )
      {
        pProxy = 0LL;
        ((void (__fastcall *)(IUnknown *))v58->lpVtbl->Release)(v58);
      }
      return v9;
    }
  }
  v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v122 + 56LL))(v122, *(_QWORD *)v119);
  v9 = v59;
  if ( v59 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v59);
    v60 = *(const WCHAR **)v119;
    if ( *(_QWORD *)v119 )
    {
      *(_QWORD *)v119 = 0LL;
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v60 + 16LL))(v60);
    }
    v61 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v62 = v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    v63 = pProxy;
    if ( pProxy )
    {
      pProxy = 0LL;
      ((void (__fastcall *)(IUnknown *))v63->lpVtbl->Release)(v63);
    }
    return v9;
  }
LABEL_181:
  v115 = *(const WCHAR **)v119;
  if ( *(_QWORD *)v119 )
  {
    *(_QWORD *)v119 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v115 + 16LL))(v115);
  }
  v116 = v122;
  if ( v122 )
  {
    v122 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 16LL))(v116);
  }
  v117 = v120;
  if ( v120 )
  {
    v120 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v117 + 16LL))(v117);
  }
  v118 = pProxy;
  if ( pProxy )
  {
    pProxy = 0LL;
    ((void (__fastcall *)(IUnknown *))v118->lpVtbl->Release)(v118);
  }
  return 0LL;
}
