/*
 * XREFs of ??1CTokenManager@@AEAA@XZ @ 0x140097C68
 * Callers:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x140097DA0 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x140010C0C (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1400247D8 (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x14002482C (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x140024880 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x14002493C (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x14002EB88 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     ?DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x140059530 (-DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::~CTokenManager(struct _LIST_ENTRY *this)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *v6; // rcx
  unsigned int v7; // edx
  char *p_Blink; // rsi
  char *v9; // rbx
  char *v10; // rax
  __int64 v11; // rcx

  this->Flink = (struct _LIST_ENTRY *)&CTokenManager::`vftable';
  Flink = this[4].Flink;
  if ( Flink )
    ObCloseHandle(Flink, 0);
  Blink = this[4].Blink;
  if ( Blink )
    ObCloseHandle(Blink, 0);
  v4 = this[5].Flink;
  if ( v4 )
    ObCloseHandle(v4, 0);
  v5 = this[3].Flink;
  if ( v5 )
    MmUnmapViewInSessionSpace(v5);
  this[3].Blink = 0LL;
  v6 = this[2].Blink;
  if ( v6 )
    ObfDereferenceObject(v6);
  CTokenManager::DeleteOutstandingAnalogToken((CTokenManager *)this);
  CTokenManager::DeleteAllLegacyTokenBuffers((CTokenManager *)this, v7);
  CTokenManager::DeleteAllCompositionTokens((CTokenManager *)this);
  CTokenManager::DeleteAllFlipManagerTokens(this);
  p_Blink = (char *)&this[21].Blink;
  while ( 1 )
  {
    v10 = *(char **)p_Blink;
    if ( *(char **)(*(_QWORD *)p_Blink + 8LL) != p_Blink
      || (v11 = *(_QWORD *)v10, *(char **)(*(_QWORD *)v10 + 8LL) != v10) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)p_Blink = v11;
    *(_QWORD *)(v11 + 8) = p_Blink;
    if ( v10 == p_Blink )
      break;
    v9 = v10 - 8;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v10 - 1) + 56LL))(v10 - 8);
    (**(void (__fastcall ***)(char *, __int64))v9)(v9, 1LL);
  }
  CTokenManager::DeleteAllTokenQueues((CTokenManager *)this);
  CTokenQueue::DeleteAllTokens((CTokenQueue *)&this[22].Blink);
  CAdapterCollection::InternalDiscard((CAdapterCollection *)&this[7]);
}
