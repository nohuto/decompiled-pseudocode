/*
 * XREFs of ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1401496A4
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140149100 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     ??1KnobTransaction@@QEAA@XZ @ 0x14006FED0 (--1KnobTransaction@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x140162BD0 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x140162C80 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 */

__int64 __fastcall KnobNamespace::UpdateKnobs(KnobNamespace *this, bool *a2)
{
  _LIST_ENTRY *p_m_collectionList; // rdi
  _LIST_ENTRY *i; // rbx
  unsigned int v4; // esi
  _LIST_ENTRY *j; // rbx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  char v8; // [rsp+30h] [rbp-28h]
  KLockHolder v9; // [rsp+38h] [rbp-20h] BYREF

  *a2 = 0;
  p_m_collectionList = &this->m_collectionList;
  v8 = 0;
  v7 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v9, &this->m_lock);
  for ( i = p_m_collectionList->Flink; i != p_m_collectionList; i = i->Flink )
  {
    if ( !v8 )
    {
      v4 = ((__int64 (__fastcall *)(_LIST_ENTRY **, __int64, __int128 *))i[-1].Blink->Flink)(&i[-1].Blink, 1LL, &v7);
      if ( v4 )
        goto LABEL_12;
      if ( !v8 )
        NT_ASSERT("transaction.IsOpened");
    }
    KnobCollection::PrepareUpdatedKnobValues((KnobCollection *)&i[-1].Blink, (struct KnobTransaction *)&v7);
  }
  for ( j = p_m_collectionList->Flink; j != p_m_collectionList; j = j->Flink )
    KnobCollection::CommitUpdatedKnobValues((KnobCollection *)&j[-1].Blink, 0);
  v4 = 0;
LABEL_12:
  KLockHolder::~KLockHolder(&v9);
  KnobTransaction::~KnobTransaction((KnobTransaction *)&v7);
  return v4;
}
