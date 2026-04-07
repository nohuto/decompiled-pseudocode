/*
 * XREFs of ?OnGraphicsDeviceLost@CDWriteText@@QEAAXXZ @ 0x1800C2F1C
 * Callers:
 *     ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ @ 0x1800DB4E0 (-OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDWriteText::OnGraphicsDeviceLost(CDWriteText *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 56LL))(*((_QWORD *)this + 18), 0LL);
  (*(void (__fastcall **)(CDWriteText *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
}
