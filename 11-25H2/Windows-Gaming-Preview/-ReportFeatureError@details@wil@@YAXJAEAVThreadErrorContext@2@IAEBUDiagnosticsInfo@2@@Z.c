/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000EB34
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800107AC (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18000652C (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180009670 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000CE88 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x18000DC60 (-GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        wil::ThreadErrorContext *a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  int v6; // edi
  void *v7; // r9
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  void (__fastcall *v10)(__int64, struct DiagnosticsInfo *); // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+28h] [rbp-D8h]
  __int64 v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+60h] [rbp-A0h]
  struct DiagnosticsInfo v15; // [rsp+A8h] [rbp-58h]
  struct DiagnosticsInfo v16[50]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = (int)this;
  memset_0(v11, 0, 0x98uLL);
  if ( !wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v11, v6) )
  {
    memset_0(v11, 0, 0x98uLL);
    v14 = *(unsigned __int16 *)(a4 + 24);
    v13 = *(_QWORD *)(a4 + 8);
    v15 = *(struct DiagnosticsInfo *)a4;
    v12 = v6;
    CurrentThreadId = GetCurrentThreadId();
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v11);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v11, v6);
  }
  wil::details::StagingFailureInformation::StagingFailureInformation(
    v16,
    (const struct wil::FailureInfo *)v11,
    (const struct DiagnosticsInfo *)a4,
    v7);
  v10 = (void (__fastcall *)(__int64, struct DiagnosticsInfo *))g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError
    || (v10 = (void (__fastcall *)(__int64, struct DiagnosticsInfo *))g_wil_details_apiRecordFeatureError) != 0LL )
  {
    v10(11973136LL, v16);
  }
}
