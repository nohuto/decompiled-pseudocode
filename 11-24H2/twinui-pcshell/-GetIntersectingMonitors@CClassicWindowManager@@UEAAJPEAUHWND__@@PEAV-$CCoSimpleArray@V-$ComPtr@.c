/*
 * XREFs of ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180044360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x1800452DC (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x1800453D8 (_lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_--operator().c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180045678 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ??$_Add@$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K@Z @ 0x18016E48C (--$_Add@$$QEAV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIImmersiv.c)
 *     ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x1801ECBEC (-_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CClassicWindowManager::GetIntersectingMonitors(_QWORD *a1, __int64 a2, LPVOID *a3)
{
  int v5; // r14d
  __int64 v6; // rdi
  DWORD CurrentThreadId; // ebx
  HRESULT ApartmentType; // r15d
  int v9; // edi
  unsigned __int64 v10; // r12
  unsigned __int64 i; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 *v14; // rcx
  void *v15; // rax
  __int64 v16; // r12
  _QWORD *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  LPVOID *v20; // r14
  __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  char v23; // r13
  int (__fastcall ***v24)(_QWORD, GUID *, unsigned __int64 *); // rcx
  int v25; // esi
  int v26; // eax
  char v27; // di
  LPVOID *v28; // rbx
  LPVOID v29; // rdi
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r14
  __int64 v34; // rcx
  char v35; // bl
  unsigned __int64 v36; // r13
  _QWORD *v37; // r15
  _QWORD *v38; // rdi
  __int64 *v39; // rax
  __int64 v40; // rbx
  char v41; // al
  LPVOID *v42; // rcx
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rsi
  char *v49; // rax
  char *v50; // rsi
  unsigned __int64 v51; // rax
  LPVOID v52; // rcx
  __int64 *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rdi
  __int64 (__fastcall ***v58)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 (__fastcall *v62)(__int64, __int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v63; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v64; // [rsp+38h] [rbp-51h] BYREF
  __int64 v65; // [rsp+40h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-41h] BYREF
  void *v67; // [rsp+50h] [rbp-39h]
  void *v68; // [rsp+58h] [rbp-31h]
  void *v69; // [rsp+60h] [rbp-29h]
  LPVOID *p_pv; // [rsp+68h] [rbp-21h] BYREF
  _QWORD *v71; // [rsp+70h] [rbp-19h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-11h]
  __int64 v73; // [rsp+88h] [rbp-1h]
  HRESULT v74; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  __int64 pAptType; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v77; // [rsp+F8h] [rbp+6Fh] BYREF
  LPVOID *v78; // [rsp+100h] [rbp+77h]
  __int64 pAptQualifier; // [rsp+108h] [rbp+7Fh] BYREF

  v78 = a3;
  v5 = 0;
  LODWORD(v65) = 0;
  v71 = a1 - 9;
  v6 = (unsigned __int64)(a1 + 8) & -(__int64)(a1 != (_QWORD *)72);
  lpCriticalSection = (LPCRITICAL_SECTION)v6;
  v73 = v6;
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v6 + 0x2C)) || *(_DWORD *)(v6 + 40) == -3 )
    goto LABEL_15;
  CurrentThreadId = 0;
  LODWORD(pAptType) = 0;
  LODWORD(pAptQualifier) = 0;
  ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, (APTTYPEQUALIFIER *)&pAptQualifier);
  LODWORD(v77) = ApartmentType;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( !(_DWORD)pAptType )
  {
LABEL_8:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_10;
  }
  if ( (_DWORD)pAptType != 1 )
  {
    if ( (_DWORD)pAptType == 2 )
    {
      CurrentThreadId = -1;
      goto LABEL_10;
    }
    if ( (_DWORD)pAptType == 3 )
      goto LABEL_8;
LABEL_9:
    if ( ApartmentType < 0 )
      goto LABEL_13;
  }
LABEL_10:
  if ( CurrentThreadId != *(_DWORD *)(v6 + 40) )
    ApartmentType = -2147417842;
  LODWORD(v77) = ApartmentType;
LABEL_13:
  if ( ApartmentType < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC8,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
      (const char *)(unsigned int)ApartmentType);
    goto LABEL_16;
  }
LABEL_15:
  ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v6) ? 0x8001010E : 0;
  LODWORD(v77) = ApartmentType;
LABEL_16:
  v74 = ApartmentType;
  v63 = 0LL;
  v9 = 0;
  LODWORD(pAptType) = 0;
  if ( a2 )
  {
    v63 = 0LL;
    pAptType = 0LL;
    v10 = 0LL;
    for ( i = 0LL; i < a1[16]; ++i )
    {
      p_pv = 0LL;
      v12 = *(_QWORD *)(a1[15] + 8 * i);
      v64 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      pAptQualifier = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
             v12,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &pAptQualifier) < 0
        || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)pAptQualifier + 192LL))(pAptQualifier, a2) )
      {
        v5 = -1;
      }
      v13 = pAptQualifier;
      if ( pAptQualifier )
      {
        pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( !v5 )
      {
        v10 = i;
        v9 = 0;
        goto LABEL_29;
      }
      v5 = 0;
    }
    v9 = -2147319765;
LABEL_29:
    LODWORD(pAptType) = v9;
    if ( v9 >= 0 )
    {
      v58 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1[15] + 8 * v10);
      v9 = (**v58)(v58, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v63);
      LODWORD(pAptType) = v9;
    }
  }
  else
  {
    v59 = (_QWORD *)a1[15];
    v60 = *v59;
    if ( *v59 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v60 + 8LL))(*v59);
      v63 = v60;
    }
  }
  v14 = 0LL;
  pv = 0LL;
  v15 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  if ( v9 >= 0 )
  {
    v16 = v63;
    p_pv = &pv;
    if ( v63 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 8LL))(v63);
    v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
    v18 = *v17;
    if ( *v17 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 8LL))(*v17);
    while ( 1 )
    {
      v19 = v18;
      if ( !v18 )
        break;
      if ( v16 != v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        v55 = v16;
        v16 = v18;
        if ( v55 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 96LL))(v18);
      v57 = *v56;
      if ( v18 != *v56 )
      {
        if ( v57 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v57 + 8LL))(*v56);
        v18 = v57;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    pAptQualifier = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 80LL))(v16, &pAptQualifier) < 0 )
    {
      v21 = pAptType;
      v23 = v65;
LABEL_53:
      v27 = 0;
    }
    else
    {
      v20 = p_pv;
      v21 = pAptQualifier;
      if ( pAptQualifier )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)pAptQualifier + 8LL))(pAptQualifier);
      v22 = 0LL;
      v23 = 1;
      while ( v22 < (unsigned __int64)v20[1] )
      {
        v24 = (int (__fastcall ***)(_QWORD, GUID *, unsigned __int64 *))*((_QWORD *)*v20 + v22);
        if ( v24 && v21 )
        {
          if ( v24 == (int (__fastcall ***)(_QWORD, GUID *, unsigned __int64 *))v21 )
            goto LABEL_53;
          v64 = 0LL;
          v65 = 0LL;
          if ( (**v24)(v24, &GUID_00000000_0000_0000_c000_000000000046, &v64) < 0 )
            goto LABEL_50;
          v25 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v21)(
                  v21,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  &v65);
          if ( v25 >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v64 + 16LL))(v64);
          if ( v25 >= 0 && v64 == v65 )
            v26 = 1;
          else
LABEL_50:
            v26 = 0;
          if ( v26 )
            goto LABEL_53;
        }
        ++v22;
      }
      v27 = 1;
    }
    if ( (v23 & 1) != 0 && v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( !v27 )
      goto LABEL_68;
    v28 = p_pv;
    v29 = p_pv[1];
    v30 = (unsigned __int64)p_pv[3];
    if ( v29 == (LPVOID)v30 )
    {
      v31 = (unsigned __int64)v29 + 1;
      if ( v31 > 0xFFFFFFFE )
      {
LABEL_68:
        v34 = pAptQualifier;
        if ( pAptQualifier )
        {
          pAptQualifier = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 128LL))(v16) )
        {
          v35 = 1;
          v64 = v71[25];
          v36 = 0LL;
          if ( v64 )
          {
            v37 = v71;
            do
            {
              if ( !v35 )
                break;
              v38 = *(_QWORD **)(v37[24] + 8 * v36);
              v71 = v38;
              if ( v38 )
                (*(void (__fastcall **)(_QWORD *))(*v38 + 8LL))(v38);
              v39 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v38 + 96LL))(v38);
              v40 = *v39;
              if ( *v39 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(*v39);
              while ( 1 )
              {
                pAptQualifier = v40;
                if ( !v40 || v38 == (_QWORD *)v40 )
                  break;
                v46 = *(_QWORD *)v40;
                if ( v40 == v16 )
                {
                  (*(void (__fastcall **)(__int64))(v46 + 16))(v40);
                  v41 = 1;
                  goto LABEL_82;
                }
                v47 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(v46 + 96))(v40);
                v48 = *v47;
                if ( v40 != *v47 )
                {
                  if ( v48 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(*v47);
                  v40 = v48;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)pAptQualifier + 16LL))(pAptQualifier);
                }
              }
              if ( v40 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
              v41 = 0;
LABEL_82:
              if ( v41 )
                v35 = lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(&p_pv, &v71);
              else
                v35 = 1;
              if ( v38 )
                (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
              ++v36;
            }
            while ( v36 < v64 );
            ApartmentType = v77;
          }
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v9 = pAptType;
        goto LABEL_91;
      }
      if ( v31 > v30 )
      {
        v32 = 2 * v30;
        if ( !is_mul_ok(v30, 2uLL) )
          goto LABEL_68;
        if ( v30 > 0x1000 )
          v32 = v30 + 4096;
        if ( v31 <= v32 )
        {
          v31 = v32;
          if ( v32 > 0xFFFFFFFE )
            v31 = 4294967294LL;
        }
        v33 = 8 * v31;
        if ( !is_mul_ok(v31, 8uLL) )
          goto LABEL_68;
        v49 = (char *)CoTaskMemRealloc(*p_pv, 8 * v31);
        v50 = v49;
        if ( !v49 )
          goto LABEL_68;
        v51 = CTCoAllocPolicy::_CoTaskMemSize(v49);
        if ( v51 > v33 )
          memset_0(&v50[v33], 0, v51 - v33);
        v28[3] = (LPVOID)v31;
        *v28 = v50;
      }
    }
    v52 = v28[1];
    v28[1] = (char *)v52 + 1;
    v53 = (__int64 *)((char *)*v28 + 8 * (_QWORD)v52);
    if ( v53 )
    {
      v54 = pAptQualifier;
      *v53 = pAptQualifier;
      if ( v54 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
    }
    goto LABEL_68;
  }
  if ( v9 == -2147319765 )
  {
    v9 = CClassicWindowManager::_EnsureMonitorManager((CClassicWindowManager *)(a1 - 9));
    if ( v9 >= 0 )
    {
      pAptType = 0LL;
      v61 = a1[25];
      v62 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v61 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&pAptType);
      v9 = v62(
             v61,
             a2,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &pAptType);
      if ( v9 >= 0 )
      {
        v77 = pAptType;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v77);
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
          &pv,
          &v77);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v77);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&pAptType);
      if ( v9 >= 0 )
      {
LABEL_91:
        v42 = v78;
        *v78 = pv;
        v42[2] = v68;
        v42[1] = v67;
        v42[3] = v69;
        v14 = 0LL;
        pv = 0LL;
        v68 = 0LL;
        v15 = 0LL;
        v67 = 0LL;
        v69 = 0LL;
        goto LABEL_92;
      }
    }
    v15 = v67;
    v14 = (__int64 *)pv;
  }
LABEL_92:
  if ( v14 )
  {
    v43 = 0LL;
    if ( v15 )
    {
      do
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14[v43++]);
        v14 = (__int64 *)pv;
      }
      while ( v43 < (unsigned __int64)v67 );
    }
    CoTaskMemFree(v14);
    pv = 0LL;
  }
  v67 = 0LL;
  v69 = 0LL;
  v44 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
