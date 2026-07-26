/*
 * XREFs of ?SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z @ 0x14015429C
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140153DD0 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x140153D3C (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x140154444 (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall KnobNamespace::SetKnobStoreValue(KnobNamespace *this, const wchar_t *a2, __int64 a3, char a4)
{
  unsigned int v8; // ebx
  struct KnobCollection *v9; // rsi
  unsigned int v10; // eax
  KnobNamespace *v11; // rcx
  struct KnobState *v12; // rdi
  struct KnobCollection *v14; // [rsp+30h] [rbp-48h] BYREF
  struct KnobState *v15; // [rsp+38h] [rbp-40h] BYREF
  KLockHolder v16; // [rsp+40h] [rbp-38h] BYREF
  struct KnobDescriptor *v17; // [rsp+80h] [rbp+8h] BYREF

  v14 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v16, &this->m_lock);
  if ( KnobNamespace::FindKnobByName(this, a2, (_LIST_ENTRY ***)&v14, (const struct KnobDescriptor **)&v17, &v15) )
  {
    v9 = v14;
    v10 = (*(__int64 (__fastcall **)(struct KnobCollection *, struct KnobDescriptor *, __int64))(*(_QWORD *)v14 + 8LL))(
            v14,
            v17,
            a3);
    v12 = v15;
    v8 = v10;
    *((_DWORD *)v15 + 2) = v10;
    if ( !v10 )
    {
      if ( a4 )
        KnobNamespace::UpdateSingleKnob(v11, v9, v17, v12);
      v8 = *((_DWORD *)v12 + 2);
    }
  }
  else
  {
    v8 = -1073741772;
  }
  KLockHolder::~KLockHolder(&v16);
  return v8;
}
