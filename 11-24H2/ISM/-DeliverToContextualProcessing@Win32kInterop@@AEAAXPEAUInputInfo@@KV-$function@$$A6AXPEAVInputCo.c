/*
 * XREFs of ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x180030C10
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002FC28 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800F132C (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180030F80 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180031010 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::DeliverToContextualProcessing(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  const char *j; // r9
  __int64 v9; // rdx
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 i; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *k; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 result; // rax
  __int64 v25; // rdx
  wil::details::in1diag3 *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 m; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v42; // [rsp+68h] [rbp+38h] BYREF
  int v43; // [rsp+70h] [rbp+40h] BYREF
  __int64 v44; // [rsp+78h] [rbp+48h]

  v44 = a4;
  v43 = a3;
  if ( (*(_DWORD *)a2 & 0x100003B) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x669,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)a4);
  InputTraceLogging::ContextualProcessing::ReceiveInput((const struct InputInfo *)a2);
  v9 = 0xCBF29CE484222325uLL;
  v10 = 0x100000001B3LL;
  v11 = 1LL;
  if ( *(_DWORD *)a2 == 2 )
    goto LABEL_36;
  v12 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v12 = 0x100000001B3LL * (*(unsigned __int8 *)(i + a2 + 4) ^ (unsigned __int64)v12);
  v14 = 2 * (v12 & a1[42]);
  j = (const char *)a1[39];
  v15 = *(_QWORD *)&j[16 * (v12 & a1[42]) + 8];
  v16 = a1[37];
  if ( v15 == v16 )
  {
LABEL_10:
    v15 = 0LL;
  }
  else
  {
    j = *(const char **)&j[8 * v14];
    while ( *(_DWORD *)(a2 + 4) != *(_DWORD *)(v15 + 16) )
    {
      if ( (const char *)v15 == j )
        goto LABEL_10;
      v15 = *(_QWORD *)(v15 + 8);
    }
  }
  if ( v15 && v15 != v16 )
  {
    for ( j = 0LL; (unsigned __int64)j < 4; ++j )
      v9 = 0x100000001B3LL * (*((unsigned __int8 *)&v43 + (_QWORD)j) ^ (unsigned __int64)v9);
    v11 = 2 * (v9 & *(_QWORD *)(v15 + 72));
    v17 = *(_QWORD *)(v15 + 48);
    v18 = *(_QWORD *)(v17 + 8 * v11 + 8);
    if ( v18 == *(_QWORD *)(v15 + 32) )
    {
LABEL_19:
      v18 = 0LL;
    }
    else
    {
      j = *(const char **)(v17 + 8 * v11);
      while ( v43 != *(_DWORD *)(v18 + 16) )
      {
        if ( (const char *)v18 == j )
          goto LABEL_19;
        v18 = *(_QWORD *)(v18 + 8);
      }
    }
    if ( v18 && v18 != *(_QWORD *)(v15 + 32) )
    {
      for ( k = (_QWORD *)(v15 + 24); ; k = a1 + 27 )
      {
        v20 = std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                k,
                v40,
                &v43,
                j);
        a1 = *(_QWORD **)v20;
        v42 = *(_QWORD *)(*(_QWORD *)v20 + 24LL);
        v21 = *(_QWORD *)(a4 + 56);
        if ( v21 )
          break;
        std::_Xbad_function_call();
        __debugbreak();
LABEL_36:
        for ( m = 0LL; m < 4; m += v11 )
          v9 = v10 * (*((unsigned __int8 *)&v43 + m) ^ (unsigned __int64)v9);
        v31 = 2 * (v9 & a1[33]);
        v32 = a1[30];
        v33 = *(_QWORD *)(v32 + 8 * v31 + 8);
        v34 = a1[28];
        if ( v33 == v34 )
        {
LABEL_42:
          v33 = 0LL;
        }
        else
        {
          j = *(const char **)(v32 + 8 * v31);
          while ( v43 != *(_DWORD *)(v33 + 16) )
          {
            if ( (const char *)v33 == j )
              goto LABEL_42;
            v33 = *(_QWORD *)(v33 + 8);
          }
        }
        if ( v33 && v33 != v34 )
          LOBYTE(v11) = 0;
        if ( (_BYTE)v11 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x685,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
            j);
      }
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 16LL))(v21, &v42);
      v22 = a1[4];
      v23 = a5;
      if ( v22 && *(_BYTE *)(a1[3] + 184LL) )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, a2);
        if ( (_DWORD)result == -2147417853 )
          goto LABEL_28;
        v26 = retaddr;
        if ( (int)result >= 0 )
          goto LABEL_28;
LABEL_57:
        wil::details::in1diag3::FailFast_Hr(
          v26,
          (void *)0x6A5,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)result,
          v40[0]);
      }
      v42 = *(_QWORD *)(a1[3] + 16LL);
      v29 = *(_QWORD *)(a5 + 56);
      if ( v29 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 16LL))(v29, &v42);
LABEL_28:
        v27 = *(_QWORD *)(a4 + 56);
        if ( v27 )
        {
          LOBYTE(v25) = v27 != a4;
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL))(v27, v25);
          *(_QWORD *)(a4 + 56) = 0LL;
        }
        v28 = *(_QWORD *)(v23 + 56);
        if ( v28 )
        {
          LOBYTE(v25) = v28 != v23;
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 32LL))(v28, v25);
          *(_QWORD *)(v23 + 56) = 0LL;
        }
        return result;
      }
      std::_Xbad_function_call();
      __debugbreak();
LABEL_56:
      std::_Xbad_function_call();
      __debugbreak();
      goto LABEL_57;
    }
  }
  v42 = 0LL;
  v35 = a5;
  v36 = *(_QWORD *)(a5 + 56);
  if ( !v36 )
    goto LABEL_56;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, const char *))(*(_QWORD *)v36 + 16LL))(
             v36,
             &v42,
             v11,
             j);
  v38 = *(_QWORD *)(a4 + 56);
  if ( v38 )
  {
    LOBYTE(v37) = v38 != a4;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 32LL))(v38, v37);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  v39 = *(_QWORD *)(v35 + 56);
  if ( v39 )
  {
    LOBYTE(v37) = v39 != v35;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 32LL))(v39, v37);
    *(_QWORD *)(v35 + 56) = 0LL;
  }
  return result;
}
