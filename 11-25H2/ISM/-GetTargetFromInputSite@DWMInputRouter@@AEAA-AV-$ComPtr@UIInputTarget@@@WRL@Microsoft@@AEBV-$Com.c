/*
 * XREFs of ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180018290
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180017E30 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x180018744 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x180023E68 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18003DFC8 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180052338 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005B068 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x180074BB8 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x18009B664 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F1618 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
struct IInputTarget **__fastcall DWMInputRouter::GetTargetFromInputSite(
        DWMInputRouter *this,
        struct IInputTarget **a2,
        __int64 *a3,
        int a4,
        HWND *a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r15
  __int128 v14; // xmm1
  HWND *v15; // rdi
  char *v16; // rax
  struct IInputTarget *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void (__fastcall ***v21)(_QWORD, GUID *, struct IInputTarget **); // rdi
  void (__fastcall *v22)(_QWORD, GUID *, struct IInputTarget **); // rsi
  struct IInputTarget *v23; // rdx
  __int64 v24; // rax
  HWND *v25; // rcx
  const struct _LUID *Luid; // rax
  const char *v27; // [rsp+20h] [rbp-C1h]
  __int64 v28; // [rsp+30h] [rbp-B1h] BYREF
  HWND *v29; // [rsp+38h] [rbp-A9h] BYREF
  DWORD dwProcessId[2]; // [rsp+40h] [rbp-A1h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-99h]
  struct IInputTarget **v32; // [rsp+50h] [rbp-91h]
  char v33; // [rsp+58h] [rbp-89h] BYREF
  __int128 v34; // [rsp+60h] [rbp-81h] BYREF
  __int128 v35; // [rsp+70h] [rbp-71h]
  __int128 v36; // [rsp+80h] [rbp-61h]
  __int64 v37; // [rsp+90h] [rbp-51h]
  __int128 v38; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-31h]
  __int128 v40; // [rsp+C0h] [rbp-21h]
  __int128 v41; // [rsp+D0h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v32 = a2;
  v29 = a5;
  *a2 = 0LL;
  dwProcessId[1] = 1;
  v11 = *a3;
  if ( !*(_BYTE *)(*a3 + 480) )
  {
LABEL_17:
    v16 = (char *)InputSiteTarget::Create(&v28, a3);
    v17 = 0LL;
    if ( &v33 != v16 )
    {
      v17 = *(struct IInputTarget **)v16;
      *(_QWORD *)v16 = 0LL;
    }
    v18 = (__int64)*a2;
    *a2 = v17;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v19 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return a2;
  }
  if ( *a7 )
  {
    if ( *(_BYTE *)(v11 + 56) >= 2u )
      std::_Throw_bad_variant_access();
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a7 + 40LL))(*a7, *(_QWORD *)(v11 + 48)) )
    {
      v21 = (void (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*a7;
      v22 = **(void (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*a7;
      v23 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v22(v21, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a2);
      goto LABEL_29;
    }
  }
  if ( (a4 & 0x1000028) != 0 )
  {
    v12 = 3LL;
    v13 = 168LL;
  }
  else if ( (a4 & 0x10) != 0 )
  {
    v12 = 4LL;
    v13 = 232LL;
  }
  else if ( (a4 & 2) != 0 )
  {
    v12 = 1LL;
    v13 = 40LL;
  }
  else
  {
    if ( (a4 & 4) == 0 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        v27);
    v12 = 2LL;
    v13 = 104LL;
  }
  if ( !*(_BYTE *)(v13 + v11 + 104) )
  {
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    if ( *(_BYTE *)(v11 + 56) >= 2u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputQueueAndTransform(*(_QWORD *)(v11 + 48), v12, &v34, &v38);
    v14 = v35;
    *(_OWORD *)(v13 + v11 + 48) = v34;
    *(_OWORD *)(v13 + v11 + 64) = v14;
    *(_QWORD *)&v14 = v37;
    *(_OWORD *)(v13 + v11 + 80) = v36;
    *(_QWORD *)(v13 + v11 + 96) = v14;
    if ( !*(_BYTE *)(v13 + v11 + 104) )
      *(_BYTE *)(v13 + v11 + 104) = 1;
  }
  if ( (unsigned int)(*(_DWORD *)(v13 + v11 + 48) - 3) <= 1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
    v28 = *a3;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v28);
    v38 = *(_OWORD *)(v13 + v11 + 64);
    v39 = *(_OWORD *)(v13 + v11 + 80);
    *(_QWORD *)&v40 = *(_QWORD *)(v13 + v11 + 96);
    DWMInputRouter::CreateAndRegisterTarget(this, &v38, &v28, a2);
LABEL_29:
    v15 = v29;
    goto LABEL_16;
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 || *(_DWORD *)(v13 + v11 + 48) != 2 )
    goto LABEL_29;
  v15 = v29;
  if ( (a4 & 0x4000) != 0 )
  {
    dwProcessId[0] = 0;
    GetWindowThreadProcessId(v29[10], dwProcessId);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
    DWMInputRouter::CreateAndRegisterTarget(this, dwProcessId[0], 0, 0, (unsigned __int64)v29[10], a2);
    v29 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(a2, &v29) >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
      v31 = &v28;
      v28 = *a3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v28);
      v24 = (*((__int64 (__fastcall **)(HWND *, __int128 *))*v29 + 9))(v29, &v34);
      v38 = *(_OWORD *)v24;
      v39 = *(_OWORD *)(v24 + 16);
      *(_QWORD *)&v40 = *(_QWORD *)(v24 + 32);
      DWMInputRouter::CreateAndRegisterTarget(this, &v38, &v28, a2);
    }
    v25 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*((void (__fastcall **)(HWND *))*v25 + 2))(v25);
    }
  }
LABEL_16:
  if ( !*a2 )
    goto LABEL_17;
  if ( *((_BYTE *)v15 + 88) )
  {
    Luid = LegacyInputSinkData::GetLuid((LegacyInputSinkData *)(v11 + 48));
    if ( (unsigned __int8)operator==(Luid, a6) )
    {
      v28 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(a2, &v28) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 80LL))(v28, *((unsigned int *)v15 + 23));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    }
  }
  if ( !*a2 )
    goto LABEL_17;
  return a2;
}
