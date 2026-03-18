/*
 * XREFs of ?ResolveResource@?$CWeakReference@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x1802164E4
 * Callers:
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180095A30 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1802163DC (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWeakReference<CVisual>::ResolveResource(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    *a2 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
    return 2147500035LL;
  }
}
