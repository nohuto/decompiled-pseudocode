/*
 * XREFs of ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801A7238
 * Callers:
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A7510 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180052450 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ??$As@UIInputForwardTargetInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005CDD0 (--$As@UIInputForwardTargetInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     ??$As@UIInputForwardAreaInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardAreaInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005E88C (--$As@UIInputForwardAreaInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B78C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?ConvertInputTypeToCompositionInputType@HitTestHelper@@SA?BW4CompositionInputType@@W4InputType@@@Z @ 0x18019DC68 (-ConvertInputTypeToCompositionInputType@HitTestHelper@@SA-BW4CompositionInputType@@W4InputType@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall InputForwardProcessor::GetInputForwardInputSite(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  char v4; // r10
  bool v6; // r15
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // r8
  __int64 v38; // [rsp+20h] [rbp-40h] BYREF
  int v39; // [rsp+28h] [rbp-38h]
  __int64 *v40; // [rsp+30h] [rbp-30h]
  GUID v41; // [rsp+40h] [rbp-20h]

  v4 = a3;
  v39 = a3;
  v40 = a2;
  v41 = GUID_NULL;
  v6 = 0;
  v7 = *(_QWORD *)(a4 + 104);
  v8 = *(__int64 **)(v7 - 24);
  v9 = *(__int64 **)(v7 - 16);
  v40 = v9;
  v10 = *(_QWORD *)GUID_NULL.Data4;
  v11 = *(_QWORD *)&GUID_NULL.Data1;
  v12 = *(_QWORD *)GUID_NULL.Data4;
  v13 = *(_QWORD *)&GUID_NULL.Data1;
  while ( v8 != v9 )
  {
    if ( v6 )
      goto LABEL_35;
    v14 = v11 - v13;
    if ( v11 == v13 )
      v14 = v10 - v12;
    if ( !v14 )
    {
      if ( !*(_BYTE *)(*v8 + 480) )
        goto LABEL_40;
      v15 = HitTestHelper::ConvertInputTypeToCompositionInputType(v4);
      if ( *(_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(v16 + 48, v15) )
        break;
      v17 = *v8;
      v18 = 0LL;
      v38 = 0LL;
      v19 = *(_QWORD *)(v17 + 488);
      v20 = *(_QWORD *)(v17 + 496);
      if ( v19 != v20 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardAreaInputObjectProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v19 + 8),
                      &v38) >= 0 )
            break;
          v19 += 16LL;
        }
        while ( v19 != v20 );
        v18 = v38;
      }
      v21 = v18 - 8;
      v22 = -v18;
      v23 = (_QWORD *)(v21 & -(__int64)(v22 != 0));
      *(_QWORD *)&v41.Data1 = v23;
      if ( v23 )
        (*(void (__fastcall **)(__int64))*v23)(v21 & -(__int64)(v22 != 0));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
      if ( v23 )
      {
        v24 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(v23[1] + 24LL))(v23 + 1);
        v10 = v24[1];
        v11 = *v24;
        (*(void (__fastcall **)(_QWORD *))(*v23 + 8LL))(v23);
      }
      v12 = *(_QWORD *)GUID_NULL.Data4;
      v13 = *(_QWORD *)&GUID_NULL.Data1;
    }
    v25 = v11 - v13;
    if ( v11 == v13 )
      v25 = v10 - v12;
    if ( v25 )
    {
      v26 = *v8;
      v27 = 0LL;
      v38 = 0LL;
      v28 = *(_QWORD *)(v26 + 488);
      v29 = *(_QWORD *)(v26 + 496);
      if ( v28 != v29 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardTargetInputObjectProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v28 + 8),
                      &v38) >= 0 )
            break;
          v28 += 16LL;
        }
        while ( v28 != v29 );
        v27 = v38;
      }
      v30 = v27 - 8;
      v31 = -v27;
      v32 = (_QWORD *)(v30 & -(__int64)(v31 != 0));
      *(_QWORD *)&v41.Data1 = v32;
      if ( v32 )
        (*(void (__fastcall **)(__int64))*v32)(v30 & -(__int64)(v31 != 0));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
      if ( v32 )
      {
        v33 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v32[1] + 24LL))(v32 + 1);
        v34 = *v33 - v11;
        if ( *v33 == v11 )
          v34 = v33[1] - v10;
        v6 = v34 == 0;
      }
      if ( v32 )
        (*(void (__fastcall **)(_QWORD *))(*v32 + 8LL))(v32);
      if ( v6 )
      {
        v4 = v39;
LABEL_35:
        if ( !*(_BYTE *)(*v8 + 480) )
LABEL_40:
          std::_Throw_bad_optional_access();
        v35 = HitTestHelper::ConvertInputTypeToCompositionInputType(v4);
        if ( *(_DWORD *)LegacyInputSinkData::GetCompositionInputQueue(v36 + 48, v35) )
        {
          *a2 = *v8;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
          return a2;
        }
      }
      v12 = *(_QWORD *)GUID_NULL.Data4;
      v13 = *(_QWORD *)&GUID_NULL.Data1;
    }
    ++v8;
    v4 = v39;
    v9 = v40;
  }
  *a2 = 0LL;
  return a2;
}
