/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1401DF814
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1401DFF9C (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1401E11DC (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r9
  unsigned int i; // esi
  AUTOEXPANDALLOCATION *v15; // rax
  __int64 v16; // r9
  AUTOEXPANDALLOCATION *v17; // rbx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  const wchar_t *v22; // r9

  if ( *((_QWORD *)this + 2) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 963;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"New source context lists cannot be create while we have existing ones",
      963LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221227272LL;
  }
  v6 = *((unsigned int *)this + 19);
  if ( !(_DWORD)v6 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 968;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Cannot create new context lists with zero elements",
      968LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v7 = *((unsigned int *)this + 19);
  v8 = 72 * v6;
  if ( !is_mul_ok(v7, 0x48uLL) )
    v8 = -1LL;
  v9 = __CFADD__(v8, 8LL);
  v10 = v8 + 8;
  if ( v9 )
    v10 = -1LL;
  v11 = operator new[](v10, 0x674D444Fu, 256LL, a4);
  if ( !v11 )
  {
    *((_QWORD *)this + 2) = 0LL;
LABEL_26:
    WdLogSingleEntry0(6LL);
    v21 = 976LL;
    v22 = L"Failed to allocated new source context lists";
LABEL_27:
    WdLogGlobalForLineNumber = v21;
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v22, v21, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v12 = v11 + 8;
  *(_QWORD *)v11 = v7;
  `vector constructor iterator'(
    (char *)(v11 + 8),
    72LL,
    v7,
    (void (__fastcall *)(char *))_OUTPUTDUPL_CONTEXTLIST::_OUTPUTDUPL_CONTEXTLIST);
  *((_QWORD *)this + 2) = v12;
  if ( !v12 )
    goto LABEL_26;
  for ( i = 0; i < *((_DWORD *)this + 19); ++i )
  {
    v15 = (AUTOEXPANDALLOCATION *)operator new(0x10uLL, 0x674D444Fu, 256LL, v13);
    v17 = v15;
    if ( v15 )
    {
      *(_QWORD *)v15 = 0LL;
      *((_QWORD *)v15 + 1) = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer(v15, 0x100u, 0);
    }
    else
    {
      v17 = 0LL;
    }
    *(_QWORD *)(*((_QWORD *)this + 2) + 72LL * i + 56) = v17;
    v18 = *(_QWORD **)(*((_QWORD *)this + 2) + 72LL * i + 56);
    if ( !v18 || !*v18 )
    {
      WdLogSingleEntry0(6LL);
      v21 = 988LL;
      v22 = L"Failed to create temp present processing buffer";
      goto LABEL_27;
    }
    v19 = 8LL * *((unsigned int *)this + 2);
    if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
      v19 = -1LL;
    *(_QWORD *)(*((_QWORD *)this + 2) + 72LL * i + 48) = operator new[](v19, 0x674D444Fu, 256LL, v16);
    v20 = *((_QWORD *)this + 2);
    if ( !*(_QWORD *)(v20 + 72LL * i + 48) )
    {
      WdLogSingleEntry1(6LL, i);
      WdLogGlobalForLineNumber = 995;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to create context list for VidPn source 0x%I64x.",
        i,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *(_DWORD *)(v20 + 72LL * i + 64) = 0;
  }
  return 0LL;
}
