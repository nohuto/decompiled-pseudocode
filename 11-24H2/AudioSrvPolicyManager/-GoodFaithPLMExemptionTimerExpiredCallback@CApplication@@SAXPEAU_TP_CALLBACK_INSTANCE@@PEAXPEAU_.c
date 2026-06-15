/*
 * XREFs of ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180032590
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CApplication::GoodFaithPLMExemptionTimerExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        __int64 a2,
        struct _TP_TIMER *a3)
{
  int v3; // eax
  __int64 v4[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4[1] = a2;
  v4[0] = (__int64)off_180050CA0;
  v4[7] = (__int64)v4;
  v3 = QueueGenericWorkItem(v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1313LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v3);
}
