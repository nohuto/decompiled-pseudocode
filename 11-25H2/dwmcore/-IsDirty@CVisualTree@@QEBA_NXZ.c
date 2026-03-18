/*
 * XREFs of ?IsDirty@CVisualTree@@QEBA_NXZ @ 0x1801362D0
 * Callers:
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180135730 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180135800 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisualTree::IsDirty(CVisualTree *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
    LOBYTE(v1) = *(_BYTE *)(v1 + 96) != 0;
  return v1;
}
