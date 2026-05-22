/*
 * XREFs of ??_EDelegatedInkCanvasProcessor@@UEAAPEAXI@Z @ 0x1801973D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DelegatedInkCanvasProcessor@@UEAA@XZ @ 0x180197208 (--1DelegatedInkCanvasProcessor@@UEAA@XZ.c)
 */

void **__fastcall DelegatedInkCanvasProcessor::`vector deleting destructor'(void **this, char a2)
{
  DelegatedInkCanvasProcessor::~DelegatedInkCanvasProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
