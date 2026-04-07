/*
 * XREFs of ??1VisualCollection@@QEAA@XZ @ 0x180021918
 * Callers:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x18002189C (--1CContainerVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VisualCollection::~VisualCollection(VisualCollection *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 8);
}
