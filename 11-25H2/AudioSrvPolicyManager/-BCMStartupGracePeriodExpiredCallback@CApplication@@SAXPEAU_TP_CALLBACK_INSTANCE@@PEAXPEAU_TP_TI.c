/*
 * XREFs of ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180033F20
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180006D70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CApplication::BCMStartupGracePeriodExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        __int64 a2,
        struct _TP_TIMER *a3)
{
  int v3; // eax
  __int64 v4[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4[1] = a2;
  v4[0] = (__int64)off_180053C60;
  v4[7] = (__int64)v4;
  v3 = QueueGenericWorkItem(v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2254LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v3);
}
