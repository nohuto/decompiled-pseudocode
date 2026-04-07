/*
 * XREFs of ?SetInsetFromParentBottom@CVisual@@QEAAXH@Z @ 0x18006B8C0
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180029F90 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetInsetFromParentBottom(CVisual *this, int a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 23) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 23) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 2LL);
  }
}
