/*
 * XREFs of ?RemoveFromCddPrimarySyncContextList@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14005257C
 * Callers:
 *     ?RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14004F00C (-RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1403765D8 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::RemoveFromCddPrimarySyncContextList(ADAPTER_RENDER *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // r8

  Flink = a2->Flink;
  if ( a2->Flink )
  {
    if ( Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    --*((_DWORD *)this + 234);
  }
}
