/*
 * XREFs of ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1401627C0
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140138CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x140162790 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?SetCurrentValue@KnobDescriptor@@QEBAX_K@Z @ 0x140072FD0 (-SetCurrentValue@KnobDescriptor@@QEBAX_K@Z.c)
 *     WPP_RECORDER_SF_Si @ 0x1400950B8 (WPP_RECORDER_SF_Si.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x140162A00 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x140162BD0 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x140162C80 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 */

__int64 __fastcall KnobNamespace::BuildCollection(
        KnobNamespace *this,
        struct KnobDescriptor *a2,
        unsigned __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        unsigned __int8 (*a5)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a6)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  char v6; // bp
  struct KnobDescriptor *v10; // r14
  unsigned __int64 v11; // r15
  struct KnobCollection *v12; // rax
  KnobCollection *v13; // rbx
  int v14; // r14d
  KPushLock *p_m_lock; // rdi
  int v16; // edx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_m_collectionList; // rsi
  _LIST_ENTRY *v20; // rbx
  void *v21; // [rsp+28h] [rbp-60h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-48h] BYREF
  char v23; // [rsp+50h] [rbp-38h]

  v6 = (char)a4;
  if ( a3 )
  {
    v10 = a2;
    v11 = a3;
    do
    {
      KnobDescriptor::SetCurrentValue(v10, v10->DefaultValue);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Si(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          1u,
          0xAu,
          (struct _GUID *)&WPP_1cc6a0a69d4d33edc5e419684ff2d750_Traceguids,
          v10->Name);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  v12 = KnobCollection::Create(this, a2, a3, a4, a6, v21);
  v13 = v12;
  if ( !v12 )
    return 3221225626LL;
  v23 = 0;
  *(_OWORD *)Handle = 0LL;
  v14 = (**(__int64 (__fastcall ***)(struct KnobCollection *, __int64, HANDLE *))v12)(v12, 1LL, Handle);
  p_m_lock = &this->m_lock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  if ( v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        1,
        11,
        (struct _GUID *)&WPP_1cc6a0a69d4d33edc5e419684ff2d750_Traceguids,
        v14);
    }
  }
  else
  {
    KnobCollection::PrepareUpdatedKnobValues(v13, (struct KnobTransaction *)Handle);
    KnobCollection::CommitUpdatedKnobValues(v13, 1);
  }
  if ( v6 )
  {
    Blink = this->m_collectionList.Blink;
    p_m_collectionList = &this->m_collectionList;
    v20 = (_LIST_ENTRY *)((char *)v13 + 8);
    if ( Blink->Flink != p_m_collectionList )
      __fastfail(3u);
    v20->Flink = p_m_collectionList;
    v20->Blink = Blink;
    Blink->Flink = v20;
    p_m_collectionList->Blink = v20;
    v13 = 0LL;
  }
  ExReleasePushLockExclusiveEx(p_m_lock, 0LL);
  KeLeaveCriticalRegion();
  if ( Handle[1] )
    ZwClose(Handle[1]);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x43626E4Bu);
  return 0LL;
}
