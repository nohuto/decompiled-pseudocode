/*
 * XREFs of ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x1801DAF4C
 * Callers:
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x180261EF8 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::ReleasePendingReferences(CManipulationManager *this)
{
  char *v1; // rbx
  CResource *v2; // rdi
  char *v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CResource *); // rax

  v1 = (char *)this + 80;
  while ( 1 )
  {
    v2 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    v3 = *(char **)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v1 = v4;
    *(_QWORD *)(v4 + 8) = v1;
    if ( v3 != v1 )
    {
      v2 = (CResource *)*((_QWORD *)v3 + 2);
      operator delete(v3, 0x18uLL);
      --*((_DWORD *)v1 + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    if ( !v2 )
      break;
    v5 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v2 + 16LL);
    if ( v5 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2);
    else
      v5(v2);
  }
}
