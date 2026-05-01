/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18000653C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180005DA0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000EC34 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800108AC (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180004DAC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800071B4 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rdi
  char v2; // bp
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // r8
  DWORD CurrentThreadId; // r14d
  unsigned __int64 v8; // rsi
  __int64 i; // rbx
  DWORD *v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  v3 = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v4 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
      v14 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v4, &v14) >= 0
        && !*(_QWORD *)(v1 + 8) )
      {
        *(_QWORD *)(v1 + 8) = v14;
      }
    }
    v5 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v5 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v5 + 8 * v8 + 8); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_DWORD *)i == CurrentThreadId )
        {
          v3 = (char *)(i + 16);
          goto LABEL_15;
        }
      }
      if ( !v2 )
        return 0LL;
      v10 = (DWORD *)wil::details::ProcessHeapAlloc(0, 0x38uLL, v6);
      v11 = (signed __int64)v10;
      if ( !v10 )
        return 0LL;
      *v10 = CurrentThreadId;
      v3 = (char *)(v10 + 4);
      v10[1] = 0;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_WORD *)v10 + 8) = 40;
      *((_WORD *)v10 + 9) = 0;
      v10[5] = 0;
      *((_QWORD *)v10 + 3) = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_QWORD *)v10 + 5) = 0LL;
      *((_QWORD *)v10 + 6) = 0LL;
      do
      {
        v12 = *(_QWORD *)(v5 + 8 * v8 + 8);
        *(_QWORD *)(v11 + 8) = v12;
      }
      while ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8 * v8 + 8), v11, v12) );
LABEL_15:
      if ( v3 && !*((_QWORD *)v3 + 1) )
        *((_QWORD *)v3 + 1) = v5 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v3;
}
