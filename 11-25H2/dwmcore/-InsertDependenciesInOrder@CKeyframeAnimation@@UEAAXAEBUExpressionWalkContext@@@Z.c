/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x180039F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180039AB0 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180039D10 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV-$CWe.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(
        CKeyframeAnimation *this,
        const struct ExpressionWalkContext *a2)
{
  unsigned int i; // edi
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  void *v8; // rsi
  _QWORD *v9; // rdi
  __int64 j; // rdi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  const char *v15; // r9
  char *v16; // rax
  _QWORD *v17; // rdi
  CGlobalComposition *v18; // rdi
  _DWORD *v19; // rdi
  CGlobalComposition *v20; // rdi
  _DWORD *v21; // rdi
  CGlobalComposition *v22; // rbx
  _DWORD *Value; // rbx
  CThreadContext *v24; // rax
  CThreadContext *v25; // rax
  CThreadContext *v26; // rax
  CThreadContext *v27; // rax
  CThreadContext *v28; // rax
  CThreadContext *v29; // rax
  void *v30; // rcx
  __int128 v31; // [rsp+30h] [rbp-38h]
  __int128 Buffer; // [rsp+40h] [rbp-28h] BYREF
  void *v33; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  for ( i = 0; i < *((_DWORD *)this + 96); ++i )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 45) + 8LL * i), a2);
  v5 = *((_QWORD *)this + 40);
  if ( !v5 )
  {
    *((_QWORD *)this + 40) = 0LL;
    if ( !*((_QWORD *)this + 2) )
    {
      v16 = (char *)MIDL_user_allocate(0x60uLL);
      v17 = v16;
      if ( !v16 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      *((_DWORD *)v16 + 2) = 0;
      *(_QWORD *)v16 = &CMILCOMWeakRef::`vftable';
      InitializeCriticalSection((LPCRITICAL_SECTION)(v16 + 16));
      v17[7] = this;
      *v17 = &CResourceWeakRef::`vftable';
      v17[8] = this;
      v17[9] = 0LL;
      v17[10] = 0LL;
      v17[11] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 2, (signed __int64)v17, 0LL) )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
    }
    v5 = *((_QWORD *)this + 2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)this + 40) = v5;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 824LL);
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  *(_QWORD *)&v31 = v5;
  DWORD2(v31) = 30;
  v33 = 0LL;
  Buffer = v31;
  v7 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v6 + 320), &Buffer);
  v8 = v33;
  v9 = v7;
  while ( v8 )
  {
    v30 = v8;
    v8 = (void *)*((_QWORD *)v8 + 2);
    operator delete(v30, 0x18uLL);
  }
  if ( v9 )
  {
    for ( j = v9[2]; j; j = *(_QWORD *)(j + 16) )
      CBaseExpression::InsertInOrder(*(CBaseExpression **)(j + 8), a2);
  }
  v11 = *((_QWORD *)this + 41);
  if ( v11 )
  {
    if ( !g_pComposition )
      goto LABEL_24;
    if ( GetCurrentThreadId() == CComposition::s_compositionThreadId
      || (v18 = g_pComposition, GetCurrentThreadId() == *((_DWORD *)v18 + 1428)) )
    {
LABEL_13:
      if ( !*(_QWORD *)(v11 + 64) )
        return;
      v12 = *((_QWORD *)this + 41);
      if ( g_pComposition )
      {
        if ( GetCurrentThreadId() == CComposition::s_compositionThreadId
          || (v20 = g_pComposition, GetCurrentThreadId() == *((_DWORD *)v20 + 1428)) )
        {
LABEL_16:
          v13 = *(_QWORD *)(v12 + 64);
          v14 = *((_QWORD *)this + 41);
          if ( !g_pComposition )
            goto LABEL_26;
          if ( GetCurrentThreadId() == CComposition::s_compositionThreadId
            || (v22 = g_pComposition, GetCurrentThreadId() == *((_DWORD *)v22 + 1428)) )
          {
LABEL_18:
            if ( *(_QWORD *)(v14 + 64) != v13 )
              wil::details::in1diag3::_FailFast_Unexpected(
                (wil::details::in1diag3 *)retaddr,
                (void *)0xAD,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
                v15);
            CExpressionManager::InsertExpressionsInOrderForTarget(
              *(_QWORD *)(*(_QWORD *)(v13 + 24) + 824LL),
              a2,
              v14,
              2);
            CExpressionManager::InsertExpressionsInOrderForTarget(
              *(_QWORD *)(*(_QWORD *)(v13 + 24) + 824LL),
              a2,
              v14,
              3);
            return;
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v28 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v28 || (v29 = CThreadContext::CThreadContext(v28), (Value = v29) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
              goto LABEL_26;
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v29);
          }
          if ( Value[10] )
            goto LABEL_18;
LABEL_26:
          ModuleFailFastForHRESULT(-2003304313, retaddr);
        }
        v21 = TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !v21 )
        {
          v26 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
          if ( !v26 || (v27 = CThreadContext::CThreadContext(v26), (v21 = v27) == 0LL) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
            goto LABEL_28;
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, v27);
        }
        if ( v21[10] )
          goto LABEL_16;
      }
LABEL_28:
      ModuleFailFastForHRESULT(-2003304313, retaddr);
    }
    v19 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !v19 )
    {
      v24 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v24 || (v25 = CThreadContext::CThreadContext(v24), (v19 = v25) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        goto LABEL_24;
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v25);
    }
    if ( v19[10] )
      goto LABEL_13;
LABEL_24:
    ModuleFailFastForHRESULT(-2003304313, retaddr);
  }
}
