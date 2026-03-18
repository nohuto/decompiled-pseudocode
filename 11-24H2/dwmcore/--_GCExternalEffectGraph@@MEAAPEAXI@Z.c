/*
 * XREFs of ??_GCExternalEffectGraph@@MEAAPEAXI@Z @ 0x1802DF2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x180047D9C (--1CExternalEffectGraph@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CExternalEffectGraph *__fastcall CExternalEffectGraph::`scalar deleting destructor'(
        CExternalEffectGraph *this,
        char a2)
{
  CExternalEffectGraph::~CExternalEffectGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
