/*
 * XREFs of ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18017EC9C
 * Callers:
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18017EC9C (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x1801E5754 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 * Callees:
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18017EC9C (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     _invalid_parameter_noinfo @ 0x1802D24B6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

bool __fastcall wil::details::ThreadFailureCallbackHolder::GetThreadContext(
        struct wil::FailureInfo *a1,
        struct wil::details::ThreadFailureCallbackHolder **a2,
        char *a3,
        unsigned __int64 a4)
{
  bool result; // al
  __int64 v9; // rcx
  struct wil::details::ThreadFailureCallbackHolder *v10; // rdx
  char *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  char *v14; // rbx
  _BYTE *v15; // rbx
  __int64 v16; // rbp
  size_t v17; // rdi
  size_t v18; // rsi

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = wil::details::ThreadFailureCallbackHolder::GetThreadContext(a1, a2[2], a3, a4);
    v10 = a2[4];
    if ( v10 )
    {
      if ( !*(_DWORD *)v10 )
        *(_DWORD *)v10 = _InterlockedIncrement(&wil::details::ThreadFailureCallbackHolder::s_telemetryId);
      if ( !*((_DWORD *)a1 + 20) )
      {
        *((_OWORD *)a1 + 5) = *(_OWORD *)v10;
        *((_QWORD *)a1 + 12) = *((_QWORD *)v10 + 2);
      }
      v11 = &a3[a4];
      *(_OWORD *)((char *)a1 + 104) = *(_OWORD *)v10;
      *((_QWORD *)a1 + 15) = *((_QWORD *)v10 + 2);
      v12 = -1LL;
      v13 = -1LL;
      do
        ++v13;
      while ( a3[v13] );
      v14 = &a3[v13];
      if ( v11 - v14 <= 2 )
        return 1;
      *v14 = 92;
      v15 = v14 + 1;
      v16 = *((_QWORD *)v10 + 1);
      do
        ++v12;
      while ( *(_BYTE *)(v12 + v16) );
      v17 = v12 + 1;
      v18 = v11 - v15;
      if ( v17 >= v18 )
        v17 = v18;
      if ( v17 )
      {
        if ( !v15 )
          goto LABEL_22;
        if ( v16 && v18 >= v17 )
        {
          memcpy_0(v15, *((const void **)v10 + 1), v17);
          goto LABEL_19;
        }
        memset_0(v15, 0, v18);
        if ( v16 )
        {
          if ( v18 >= v17 )
            goto LABEL_19;
          *(_DWORD *)_o__errno(v9, v10) = 34;
        }
        else
        {
LABEL_22:
          *(_DWORD *)_o__errno(v9, v10) = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_19:
      v15[v17 - 1] = 0;
      return 1;
    }
  }
  return result;
}
