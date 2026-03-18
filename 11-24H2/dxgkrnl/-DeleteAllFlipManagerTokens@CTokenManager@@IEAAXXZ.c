/*
 * XREFs of ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x140025030
 * Callers:
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x140024F20 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x140099E94 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140025728 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x140062D98 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::DeleteAllFlipManagerTokens(struct _LIST_ENTRY *this)
{
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *v7; // rax

  v2 = this + 19;
  while ( 1 )
  {
    Flink = v2->Flink;
    if ( v2->Flink == v2 )
      break;
    if ( Flink->Blink != v2 || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_11:
      __fastfail(3u);
    v2->Flink = v4;
    v4->Blink = v2;
    ((void (__fastcall *)(struct _LIST_ENTRY **))Flink[-1].Blink[3].Blink)(&Flink[-1].Blink);
    ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
  }
  FlipManagerDwmProcessFlipManagerSignal(this + 20, 0LL);
  v5 = this + 18;
  while ( 1 )
  {
    v6 = v5->Flink;
    if ( v5->Flink == v5 )
      break;
    if ( v6->Blink != v5 )
      goto LABEL_11;
    v7 = v6->Flink;
    if ( v6->Flink->Blink != v6 )
      goto LABEL_11;
    v5->Flink = v7;
    v7->Blink = v5;
    FlipManagerConsumerAdapterCleanupTokenDiscard(&v6[-3]);
  }
}
