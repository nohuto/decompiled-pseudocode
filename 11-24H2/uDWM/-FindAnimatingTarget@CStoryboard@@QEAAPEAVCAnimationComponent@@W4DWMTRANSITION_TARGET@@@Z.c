/*
 * XREFs of ?FindAnimatingTarget@CStoryboard@@QEAAPEAVCAnimationComponent@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D1D24
 * Callers:
 *     ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z @ 0x1800A8284 (-FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CStoryboard::FindAnimatingTarget(__int64 a1)
{
  __int64 v1; // r9
  __int64 i; // r8
  CMILRefCountBase *v4; // rcx

  v1 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 120); i = (unsigned int)(i + 1) )
  {
    v4 = *(CMILRefCountBase **)(*(_QWORD *)(a1 + 96) + 8 * i);
    if ( (*((_DWORD *)v4 + 6) & 0xFFF) == 0x28 )
    {
      v1 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i);
      if ( v4 )
        CMILRefCountBase::AddRef(v4);
      return v1;
    }
  }
  return v1;
}
