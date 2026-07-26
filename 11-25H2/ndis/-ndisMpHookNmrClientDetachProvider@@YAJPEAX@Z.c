/*
 * XREFs of ?ndisMpHookNmrClientDetachProvider@@YAJPEAX@Z @ 0x1400CD9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x140151E70 (-Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ.c)
 */

__int64 __fastcall ndisMpHookNmrClientDetachProvider(void *a1)
{
  char *v1; // rbx

  if ( (_DWORD)a1 != 1 )
    return 3221225485LL;
  v1 = (char *)g_MiniportHookDrivers + 128;
  if ( KeGetCurrentIrql() )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)v1 + 30, 1, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 72), NormalWorkQueue);
    return 259LL;
  }
  else
  {
    MINIPORT_HOOK_DRIVER::Deregister((MINIPORT_HOOK_DRIVER *)v1);
    return 0LL;
  }
}
