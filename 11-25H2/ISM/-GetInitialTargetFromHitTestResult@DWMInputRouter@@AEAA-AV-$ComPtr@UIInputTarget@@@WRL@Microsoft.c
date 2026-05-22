/*
 * XREFs of ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180017B20
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018CC0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801978A0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180017E30 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 *     ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x180017F48 (-CreateTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AE.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall DWMInputRouter::GetInitialTargetFromHitTestResult(
        int a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 *v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rbx
  const struct std::nothrow_t *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  const struct std::nothrow_t *v21; // rdx
  __int64 v22; // rax
  int (__fastcall *v23)(__int64 *, GUID *, __int64 **); // rbx
  void (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v25)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v26)(__int64 *, GUID *, __int64 *); // rbx
  __int64 v27; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-20h] BYREF
  void *v29[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v30; // [rsp+58h] [rbp-8h]

  v27 = 0LL;
  v9 = a5;
  if ( a5 )
  {
LABEL_33:
    a5 = 0LL;
    v23 = *(int (__fastcall **)(__int64 *, GUID *, __int64 **))*v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
    if ( v23(v9, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &a5) < 0 )
    {
      v26 = *(void (__fastcall **)(__int64 *, GUID *, __int64 *))*v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      v26(v9, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v27);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*a5 + 24))(a5, &v28);
      v24 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
      if ( v28 )
      {
        v25 = **v28;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
        v25(v24, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v27);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  }
  DWMInputRouter::GetTargetListFromHitTestResult(a1, (unsigned int)v29, a3, a4, (__int64)&v27);
  v11 = v29[0];
  v12 = v29[1];
  while ( 1 )
  {
    if ( v11 == v12 )
    {
      DWMInputRouter::CreateTargetFromHitTestResult(v10, a2, a4);
      v14 = (__int64 *)v29[0];
      if ( !v29[0] )
        goto LABEL_8;
      v9 = (__int64 *)v29[1];
      if ( v29[0] != v29[1] )
      {
        do
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14++);
        while ( v14 != v9 );
        v14 = (__int64 *)v29[0];
      }
      v15 = (const struct std::nothrow_t *)(8 * ((v30 - (__int64)v14) >> 3));
      v16 = v14;
      if ( (unsigned __int64)v15 < 0x1000
        || (v15 = (const struct std::nothrow_t *)((char *)v15 + 39),
            v14 = (__int64 *)*(v14 - 1),
            (unsigned __int64)((char *)v16 - (char *)v14 - 8) <= 0x1F) )
      {
        operator delete(v14, v15);
        *(_OWORD *)v29 = 0LL;
        v30 = 0LL;
        goto LABEL_8;
      }
      v22 = _o__invalid_parameter_noinfo_noreturn(v13, v15);
      __debugbreak();
LABEL_31:
      v21 = (const struct std::nothrow_t *)((char *)v21 + 39);
      v14 = (__int64 *)*(v14 - 1);
      if ( (unsigned __int64)(v22 - (_QWORD)v14 - 8) <= 0x1F )
      {
LABEL_27:
        operator delete(v14, v21);
        *(_OWORD *)v29 = 0LL;
        v30 = 0LL;
        goto LABEL_8;
      }
      _o__invalid_parameter_noinfo_noreturn(v20, v21);
      __debugbreak();
      goto LABEL_33;
    }
    a5 = 0LL;
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v11)(
           *v11,
           &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
           (__int64 *)&a5) >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*a5 + 40))(a5, *(_QWORD *)(a4 + 8)) )
        break;
    }
    v10 = (__int64)a5;
    if ( a5 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ++v11;
  }
  v19 = *v11;
  *a2 = *v11;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = (__int64)a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v14 = (__int64 *)v29[0];
  if ( v29[0] )
  {
    v9 = (__int64 *)v29[1];
    if ( v29[0] != v29[1] )
    {
      do
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v14++);
      while ( v14 != v9 );
      v14 = (__int64 *)v29[0];
    }
    v21 = (const struct std::nothrow_t *)(8 * ((v30 - (__int64)v14) >> 3));
    v22 = (__int64)v14;
    if ( (unsigned __int64)v21 < 0x1000 )
      goto LABEL_27;
    goto LABEL_31;
  }
LABEL_8:
  v17 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return a2;
}
