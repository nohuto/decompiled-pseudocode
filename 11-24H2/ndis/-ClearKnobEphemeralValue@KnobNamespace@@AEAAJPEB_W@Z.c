/*
 * XREFs of ?ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z @ 0x140148DA0
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140149100 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x14014906C (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x140149774 (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall KnobNamespace::ClearKnobEphemeralValue(KnobNamespace *this, const wchar_t *a2)
{
  KnobNamespace *v4; // rcx
  unsigned int v5; // ebx
  struct KnobState *v6; // rbx
  KLockHolder v8; // [rsp+30h] [rbp-28h] BYREF
  struct KnobState *v9; // [rsp+60h] [rbp+8h] BYREF
  struct KnobDescriptor *v10; // [rsp+70h] [rbp+18h] BYREF
  struct KnobCollection *v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v8, &this->m_lock);
  if ( KnobNamespace::FindKnobByName(this, a2, &v11, (const struct KnobDescriptor **)&v10, &v9) )
  {
    v6 = v9;
    KnobNamespace::UpdateSingleKnob(v4, v11, v10, v9);
    v5 = *((_DWORD *)v6 + 2);
  }
  else
  {
    v5 = -1073741772;
  }
  KLockHolder::~KLockHolder(&v8);
  return v5;
}
