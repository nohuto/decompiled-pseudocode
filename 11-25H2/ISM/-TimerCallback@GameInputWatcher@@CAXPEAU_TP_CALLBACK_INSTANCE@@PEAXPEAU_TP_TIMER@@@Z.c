/*
 * XREFs of ?TimerCallback@GameInputWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18010AA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameInputWatcher::TimerCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  void (__fastcall *v3)(__int64); // rbx
  __int64 v4; // rdi

  v3 = (void (__fastcall *)(__int64))Context[15];
  v4 = Context[14];
  if ( v3 )
  {
    DisassociateCurrentThreadFromCallback(Instance);
    v3(v4);
  }
}
