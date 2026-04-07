/*
 * XREFs of ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x180105728
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x1800424A0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetInsetFromParentRight(CVisual *this, int a2)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 35) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 35) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 2LL);
  }
}
