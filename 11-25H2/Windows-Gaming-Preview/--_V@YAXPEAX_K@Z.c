/*
 * XREFs of ??_V@YAXPEAX_K@Z @ 0x180001D24
 * Callers:
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x180019200 (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800213C8 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete[](void *a1, const struct std::nothrow_t *a2)
{
  operator delete(a1, a2);
}
