/*
 * XREFs of ?SetOptions@CVisualProxy@@QEAAJ_N00@Z @ 0x1800736C4
 * Callers:
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180073644 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180088DB8 (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::SetOptions(CVisualProxy *this, char a2, __int64 a3, char a4)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx

  v4 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(unsigned int *)(v4 + 24);
  LOBYTE(v4) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, char))(*(_QWORD *)v6 + 272LL))(
           v6,
           v7,
           v4,
           0LL,
           a4);
}
