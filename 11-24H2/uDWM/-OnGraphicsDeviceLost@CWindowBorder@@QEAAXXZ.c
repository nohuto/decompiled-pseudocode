/*
 * XREFs of ?OnGraphicsDeviceLost@CWindowBorder@@QEAAXXZ @ 0x1800EC7D0
 * Callers:
 *     ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ @ 0x1800DB4E0 (-OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036CD0 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800389BC (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowBorder::OnGraphicsDeviceLost(CWindowBorder *this)
{
  std::_Ref_count_base *v2; // rbx
  __int64 v3; // rcx
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=((_QWORD *)this + 30, (__int64 *)v4);
  if ( v4[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v4[1] + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = v4[1];
    (**(void (__fastcall ***)(std::_Ref_count_base *))v4[1])(v4[1]);
    std::_Ref_count_base::_Decwref(v2);
  }
  v3 = *((_QWORD *)this + 29);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, 0LL);
}
