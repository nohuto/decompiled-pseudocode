/*
 * XREFs of ??_GSharedData@CPolygonShape@@UEAAPEAXI@Z @ 0x1801EE390
 * Callers:
 *     <none>
 * Callees:
 *     ??1SharedData@CPolygonShape@@UEAA@XZ @ 0x1801EE3CC (--1SharedData@CPolygonShape@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CPolygonShape::SharedData *__fastcall CPolygonShape::SharedData::`scalar deleting destructor'(
        CPolygonShape::SharedData *this,
        char a2)
{
  CPolygonShape::SharedData::~SharedData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
