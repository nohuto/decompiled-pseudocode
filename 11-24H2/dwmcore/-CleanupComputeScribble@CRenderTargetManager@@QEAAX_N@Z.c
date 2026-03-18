/*
 * XREFs of ?CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z @ 0x18025E3EC
 * Callers:
 *     ?ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ @ 0x1801EE904 (-ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::CleanupComputeScribble(CRenderTargetManager *this, __int64 a2)
{
  char v2; // bp
  _QWORD *v3; // rbx
  _QWORD *v5; // rsi

  *((_BYTE *)this + 744) = 1;
  v2 = a2;
  v3 = (_QWORD *)*((_QWORD *)this + 3);
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v3 != v5 )
  {
    LOBYTE(a2) = v2;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 248LL))(*v3, a2);
    ++v3;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
}
