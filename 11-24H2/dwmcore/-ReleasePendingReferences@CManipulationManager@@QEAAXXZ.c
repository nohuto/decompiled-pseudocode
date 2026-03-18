/*
 * XREFs of ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x1801CD87C
 * Callers:
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x180256D84 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::ReleasePendingReferences(CManipulationManager *this)
{
  char *v1; // rbx
  CCachedVisualImage *v2; // rdi
  char *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 (__fastcall *v7)(CCachedVisualImage *, __int64, __int64); // rax

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
      v2 = (CCachedVisualImage *)*((_QWORD *)v3 + 2);
      operator delete(v3, 0x18uLL);
      --*((_DWORD *)v1 + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    if ( !v2 )
      break;
    v7 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v2 + 16LL);
    if ( v7 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2, v5, v6);
    else
      ((void (__fastcall *)(CCachedVisualImage *))v7)(v2);
  }
}
