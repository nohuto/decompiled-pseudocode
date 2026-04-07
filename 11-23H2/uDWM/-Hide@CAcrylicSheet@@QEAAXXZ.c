/*
 * XREFs of ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x1800A2FB8
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180048EE0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800A3698 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAcrylicSheet::Hide(CAcrylicSheet *this)
{
  __int64 v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  CVisual::SetOpacity(this, 0.0);
  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = 0;
  (*(void (__fastcall **)(CAcrylicSheet *, int *))(v2 + 104))(this, &v3);
}
