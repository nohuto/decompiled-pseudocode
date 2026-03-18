/*
 * XREFs of ?RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x140039DCC
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400C4A1C (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400C5DB0 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MDL_RANGE::RemoveFromLockedRanges(VIDMM_MDL_RANGE *this)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx
  _QWORD *v3; // rax

  v1 = (_QWORD *)((char *)this + 24);
  v2 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  *v1 = 0LL;
  v1[1] = 0LL;
}
