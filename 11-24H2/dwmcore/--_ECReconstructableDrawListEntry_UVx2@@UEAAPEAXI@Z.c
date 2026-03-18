/*
 * XREFs of ??_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z @ 0x18013B850
 * Callers:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18004D160 (-InternalRelease@-$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CReconstructableDrawListEntry_UVx2 *__fastcall CReconstructableDrawListEntry_UVx2::`vector deleting destructor'(
        CReconstructableDrawListEntry_UVx2 *this,
        char a2)
{
  CBrushRenderingEffect *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  _QWORD *Value; // rdi
  HANDLE ProcessHeap; // rax
  CThreadContext *v11; // rax
  CThreadContext *v12; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CBrushRenderingEffect *)*((_QWORD *)this + 10);
  if ( v4 )
    CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease(v4);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v7 )
    (**v7)(v7, 1LL);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 216LL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v11 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v11 || (v12 = CThreadContext::CThreadContext(v11), (Value = v12) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v12);
      }
      if ( *((_DWORD *)Value + 53) < *((_DWORD *)Value + 52) )
      {
        *(_QWORD *)this = Value[27];
        ++*((_DWORD *)Value + 53);
        Value[27] = this;
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
