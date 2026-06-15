/*
 * XREFs of ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180034540
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180015840 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

void __fastcall CApplication::DelayedInteractivityNotificationTimerExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_TIMER *a3)
{
  char *v3; // rbx
  __int64 v4; // rdx

  v3 = a2 + 544;
  std::_Func_class<void,>::operator()((__int64)(a2 + 544));
  std::_Func_class<void,>::_Tidy((__int64)v3, v4);
}
