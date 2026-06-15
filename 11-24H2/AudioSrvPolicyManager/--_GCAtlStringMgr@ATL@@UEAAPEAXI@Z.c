/*
 * XREFs of ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x1800473F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 */

ATL::CAtlStringMgr *__fastcall ATL::CAtlStringMgr::`scalar deleting destructor'(ATL::CAtlStringMgr *this, char a2)
{
  *(_QWORD *)this = &ATL::CAtlStringMgr::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
