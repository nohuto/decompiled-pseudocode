/*
 * XREFs of ?AddProcessAdapterInfo@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140041CB4
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14036620C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::AddProcessAdapterInfo(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v4; // rcx

  if ( this[10] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4622;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_OpenAdapterLock.IsExclusiveOwner()",
      4622LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (struct _LIST_ENTRY *)this[38];
  if ( (struct _KTHREAD **)v4->Flink != this + 37 )
    __fastfail(3u);
  a2->Flink = (struct _LIST_ENTRY *)(this + 37);
  a2->Blink = v4;
  v4->Flink = a2;
  this[38] = (struct _KTHREAD *)a2;
  ++*((_DWORD *)this + 78);
}
