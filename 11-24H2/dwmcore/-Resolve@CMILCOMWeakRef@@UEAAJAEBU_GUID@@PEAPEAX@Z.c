/*
 * XREFs of ?Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C5A40
 * Callers:
 *     ??$Resolve@VIOverlayMonitorTarget@@@IUnknownWeakRef@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x1801C5984 (--$Resolve@VIOverlayMonitorTarget@@@IUnknownWeakRef@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z.c)
 *     ?GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ @ 0x1801C59B0 (-GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ.c)
 * Callees:
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C640 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMWeakRef::Resolve(CMILCOMWeakRef *this, const struct _GUID *a2, void **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  CMaskBrush *v7; // rcx
  __int64 (__fastcall *v8)(CMaskBrush *, const struct _GUID *, void **); // rax
  unsigned int Interface; // eax
  unsigned int v10; // ebx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = (CMaskBrush *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    v8 = **(__int64 (__fastcall ***)(CMaskBrush *, const struct _GUID *, void **))v7;
    if ( v8 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
      Interface = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(v7, a2, a3);
    else
      Interface = v8(v7, a2, a3);
    v10 = Interface;
    if ( v3 )
      LeaveCriticalSection(v3);
    return v10;
  }
  else
  {
    *a3 = 0LL;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
    return 2147500035LL;
  }
}
