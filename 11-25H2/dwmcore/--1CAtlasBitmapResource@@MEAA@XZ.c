/*
 * XREFs of ??1CAtlasBitmapResource@@MEAA@XZ @ 0x180213D4C
 * Callers:
 *     ??_GCAtlasBitmapResource@@MEAAPEAXI@Z @ 0x180213D10 (--_GCAtlasBitmapResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasBitmapResource::~CAtlasBitmapResource(CAtlasBitmapResource *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CAtlasBitmapResource::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CAtlasBitmapResource::`vftable'{for `IBitmapRealization'};
  CAtlasEntry::~CAtlasEntry((CAtlasBitmapResource *)((char *)this + 24));
}
