/*
 * XREFs of ??$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVFeatureStateManager@01@@Z @ 0x1800072D0
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007050 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::EnsureCoalescedTimer<wil::details::FeatureStateManager>(
        struct _TP_TIMER **a1,
        _BYTE *a2,
        void *a3)
{
  DWORD LastError; // r14d
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v8; // rbp
  struct _TP_TIMER *v9; // r15
  DWORD v10; // ebx
  struct _TP_TIMER *v11; // rcx
  _FILETIME pftDueTime; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
  {
    if ( !*a1 )
    {
      LastError = GetLastError();
      ThreadpoolTimer = CreateThreadpoolTimer(
                          _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_,
                          a3,
                          0LL);
      v8 = *a1;
      v9 = ThreadpoolTimer;
      if ( *a1 )
      {
        v10 = GetLastError();
        SetThreadpoolTimer(v8, 0LL, 0, 0);
        WaitForThreadpoolTimerCallbacks(v8, 1);
        CloseThreadpoolTimer(v8);
        SetLastError(v10);
      }
      *a1 = v9;
      SetLastError(LastError);
    }
    v11 = *a1;
    if ( *a1 )
    {
      pftDueTime = (_FILETIME)-3000000000LL;
      SetThreadpoolTimer(v11, &pftDueTime, 0, 0x124F8u);
      *a2 = 1;
    }
  }
}
