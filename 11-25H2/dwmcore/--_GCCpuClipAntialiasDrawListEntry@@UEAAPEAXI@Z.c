/*
 * XREFs of ??_GCCpuClipAntialiasDrawListEntry@@UEAAPEAXI@Z @ 0x1801D9FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAXPEAX@Z @ 0x1801DA0BC (-Free@-$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CCpuClipAntialiasDrawListEntry *__fastcall CCpuClipAntialiasDrawListEntry::`scalar deleting destructor'(
        CCpuClipAntialiasDrawListEntry *this,
        char a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = (void *)v5[2];
    if ( v6 )
      operator delete(v6);
    operator delete(v5, 0x18uLL);
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v9 )
    (**v9)(v9, 1LL);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 112LL);
    else
      CThreadLocalObjectCache<CCpuClipAntialiasDrawListEntry,CCpuClipAntialiasDrawListEntry>::Free(this);
  }
  return this;
}
