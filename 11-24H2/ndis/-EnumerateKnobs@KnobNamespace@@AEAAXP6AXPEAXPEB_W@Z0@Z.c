/*
 * XREFs of ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x140148F90
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140149100 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     AddKnobNameToBuffer @ 0x140148D74 (AddKnobNameToBuffer.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall KnobNamespace::EnumerateKnobs(KnobNamespace *this, void (*a2)(void *, const wchar_t *), _DWORD *a3)
{
  _LIST_ENTRY *p_m_collectionList; // rdi
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *v6; // rsi
  __int64 v7; // r14
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  p_m_collectionList = &this->m_collectionList;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v8, &this->m_lock);
  for ( i = p_m_collectionList->Flink; i != p_m_collectionList; i = i->Flink )
  {
    v6 = 0LL;
    if ( i[3].Flink )
    {
      v7 = 0LL;
      do
      {
        AddKnobNameToBuffer(a3, i[3].Blink[v7].Flink);
        v6 = (_LIST_ENTRY *)((char *)v6 + 1);
        v7 += 3LL;
      }
      while ( v6 < i[3].Flink );
    }
  }
  KLockHolder::~KLockHolder(&v8);
}
