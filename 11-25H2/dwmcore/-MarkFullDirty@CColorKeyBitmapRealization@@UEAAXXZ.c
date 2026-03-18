/*
 * XREFs of ?MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ @ 0x1802E0220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CColorKeyBitmapRealization::MarkFullDirty(CColorKeyBitmapRealization *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 24LL) + 80LL))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 24LL));
  CD2DBitmapCache::MarkFullInvalid((CColorKeyBitmapRealization *)((char *)this - 80));
}
