/*
 * XREFs of ?SetSize@CSpriteVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001A8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::SetSize(CSpriteVisual *this, const struct tagSIZE *a2)
{
  bool v3; // zf

  if ( *((_DWORD *)this + 32) != a2->cx || *((_DWORD *)this + 33) != a2->cy )
  {
    v3 = (*((_BYTE *)this + 92) & 1) == 0;
    *((struct tagSIZE *)this + 16) = *a2;
    if ( !v3 )
      (*(void (__fastcall **)(CSpriteVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    (*(void (__fastcall **)(CSpriteVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 304LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
  return 0LL;
}
