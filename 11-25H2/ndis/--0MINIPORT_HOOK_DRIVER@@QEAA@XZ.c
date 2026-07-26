/*
 * XREFs of ??0MINIPORT_HOOK_DRIVER@@QEAA@XZ @ 0x140151DF0
 * Callers:
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x140199010 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

MINIPORT_HOOK_DRIVER *__fastcall MINIPORT_HOOK_DRIVER::MINIPORT_HOOK_DRIVER(MINIPORT_HOOK_DRIVER *this)
{
  *(_BYTE *)this = 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 1);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 13) = this;
  *((_QWORD *)this + 14) = MINIPORT_HOOK_DRIVER::DeregisterAsync;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
