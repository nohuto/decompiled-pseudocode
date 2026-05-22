/*
 * XREFs of ?SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z @ 0x1800253DC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800B0CF0 (std--_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT__ea_1800B0CF0.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180025634 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall ActivationListenerWindowIdAdapter::SetActiveWindowId(__int64 a1)
{
  int v1; // r15d
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r12
  bool i; // zf
  __int64 v6; // rax
  const struct std::nothrow_t *v7; // rbx
  __int64 v8; // rcx
  const struct std::nothrow_t *v9; // rsi
  __int64 v10; // r13
  const struct std::nothrow_t *v11; // rdi
  int (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // r14
  int (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rax
  const struct std::nothrow_t *v14; // r14
  const struct std::nothrow_t *j; // r14
  char *v16; // rax
  HWND v17; // r12
  int v18; // eax
  HWND v19; // rax
  __int64 v20; // rdx
  int (__fastcall *v21)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-38h]
  _QWORD *v22; // [rsp+28h] [rbp-30h]
  void *v23[2]; // [rsp+30h] [rbp-28h] BYREF
  const struct std::nothrow_t *v24; // [rsp+40h] [rbp-18h]
  __int64 v25; // [rsp+A8h] [rbp+50h] BYREF
  HWND Ancestor; // [rsp+B0h] [rbp+58h]
  _QWORD *v27; // [rsp+B8h] [rbp+60h]

  v1 = 0;
  Ancestor = 0LL;
  if ( a1 )
    Ancestor = GetAncestor((HWND)(int)a1, 2u);
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v4 = (_QWORD *)*((_QWORD *)InputSiteManager + 7);
  v22 = (_QWORD *)*((_QWORD *)InputSiteManager + 8);
  for ( i = v4 == v22; ; i = v4 == v22 )
  {
    v27 = v4;
    if ( i )
      break;
    v6 = *v4;
    *(_OWORD *)v23 = 0LL;
    v7 = 0LL;
    v24 = 0LL;
    v1 |= 1u;
    v8 = 0LL;
    v25 = 0LL;
    v9 = *(const struct std::nothrow_t **)(v6 + 488);
    v10 = *(_QWORD *)(v6 + 496);
    v11 = 0LL;
    while ( v9 != (const struct std::nothrow_t *)v10 )
    {
      v12 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v9 + 1);
      v13 = **v12;
      v21 = v13;
      if ( v8 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v13 = v21;
      }
      if ( v13(v12, &GUID_a1cdc933_ea3a_72de_bea8_f0397564bae3, &v25) < 0 )
        goto LABEL_10;
      if ( v11 == v7 )
      {
        std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
          v23,
          v11,
          &v25);
        v7 = v24;
        v11 = (const struct std::nothrow_t *)v23[1];
LABEL_10:
        v8 = v25;
        goto LABEL_11;
      }
LABEL_33:
      *(_QWORD *)v11 = v25;
      v8 = v25;
      if ( v25 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        v8 = v25;
      }
      v11 = (const struct std::nothrow_t *)((char *)v11 + 8);
      v23[1] = v11;
LABEL_11:
      v9 = (const struct std::nothrow_t *)((char *)v9 + 16);
    }
    if ( v8 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = (const struct std::nothrow_t *)v23[0];
    v14 = (const struct std::nothrow_t *)v23[0];
    if ( v23[0] != v11 )
    {
      v17 = Ancestor;
      v10 = 1LL;
      do
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 32LL))(*(_QWORD *)v14);
        v19 = GetAncestor((HWND)v18, 2u);
        v20 = 3LL;
        if ( v19 != v17 )
          v20 = 1LL;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v14 + 24LL))(*(_QWORD *)v14, v20);
        v14 = (const struct std::nothrow_t *)((char *)v14 + 8);
      }
      while ( v14 != v11 );
      v4 = v27;
    }
    v1 &= ~1u;
    if ( !v9 )
      goto LABEL_22;
    for ( j = v9; j != v11; j = (const struct std::nothrow_t *)((char *)j + 8) )
    {
      v8 = *(_QWORD *)j;
      if ( *(_QWORD *)j )
      {
        *(_QWORD *)j = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    v7 = (const struct std::nothrow_t *)((v7 - v9) & 0xFFFFFFFFFFFFFFF8uLL);
    v16 = (char *)v9;
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
      v9 = (const struct std::nothrow_t *)*((_QWORD *)v9 - 1);
      if ( (unsigned __int64)(v16 - (char *)v9 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v3);
        goto LABEL_33;
      }
    }
    operator delete(v9, v7);
LABEL_22:
    ++v4;
  }
}
