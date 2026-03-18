/*
 * XREFs of ??_GCBrushRenderingGraph@@MEAAPEAXI@Z @ 0x180070F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x18006F218 (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::`scalar deleting destructor'(
        CBrushRenderingGraph *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CBrushRenderingGraph::~CBrushRenderingGraph(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, 0xD8uLL);
  return this;
}
