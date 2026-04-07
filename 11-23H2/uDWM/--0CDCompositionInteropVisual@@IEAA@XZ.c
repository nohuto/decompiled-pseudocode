/*
 * XREFs of ??0CDCompositionInteropVisual@@IEAA@XZ @ 0x18002C11C
 * Callers:
 *     ?Create@CDCompositionInteropVisual@@SAJPEAPEAV1@@Z @ 0x18002C03C (-Create@CDCompositionInteropVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180039B40 (--0CVisual@@IEAA@XZ.c)
 */

CDCompositionInteropVisual *__fastcall CDCompositionInteropVisual::CDCompositionInteropVisual(
        CDCompositionInteropVisual *this)
{
  CDCompositionInteropVisual *v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CDCompositionInteropVisual::`vftable';
  *((_QWORD *)v1 + 31) = 0LL;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)v1 + 33) = 0LL;
  *((_QWORD *)v1 + 34) = 0LL;
  return v1;
}
