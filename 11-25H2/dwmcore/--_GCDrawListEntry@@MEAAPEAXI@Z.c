/*
 * XREFs of ??_GCDrawListEntry@@MEAAPEAXI@Z @ 0x18000F7C0
 * Callers:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDrawListEntry *__fastcall CDrawListEntry::`scalar deleting destructor'(CDrawListEntry *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  _QWORD *Value; // rbx
  HANDLE ProcessHeap; // rax
  CThreadContext *v10; // rax
  CThreadContext *v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v6 )
    (**v6)(v6, 1LL);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 80LL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v10 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v10 || (v11 = CThreadContext::CThreadContext(v10), (Value = v11) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v11);
      }
      if ( *((_DWORD *)Value + 37) < *((_DWORD *)Value + 36) )
      {
        *(_QWORD *)this = Value[19];
        ++*((_DWORD *)Value + 37);
        Value[19] = this;
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, this);
      }
    }
  }
  return this;
}
