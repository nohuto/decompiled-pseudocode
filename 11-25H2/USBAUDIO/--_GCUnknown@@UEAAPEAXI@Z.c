/*
 * XREFs of ??_GCUnknown@@UEAAPEAXI@Z @ 0x14001A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14000EC18 (--3@YAXPEAX@Z.c)
 */

CUnknown *__fastcall CUnknown::`scalar deleting destructor'(CUnknown *this, char a2)
{
  this->__vftable = (CUnknown_vtbl *)&CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
