/*
 * XREFs of ??_GCIVTouchSerializer@@UEAAPEAXI@Z @ 0x140213910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CIVSerializer@@UEAA@XZ @ 0x140199A64 (--1CIVSerializer@@UEAA@XZ.c)
 */

CIVTouchSerializer *__fastcall CIVTouchSerializer::`scalar deleting destructor'(CIVTouchSerializer *this)
{
  *(_QWORD *)this = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer(this);
  return this;
}
