/*
 * XREFs of ??1CResource@@MEAA@XZ @ 0x18005AA5C
 * Callers:
 *     ??_GCResource@@MEAAPEAXI@Z @ 0x18005AA10 (--_GCResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResource::~CResource(CResource *this)
{
  *(_QWORD *)this = &CResource::`vftable';
  if ( *((_DWORD *)this + 6) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 96LL))(*((_QWORD *)this + 2));
  CBaseObject::~CBaseObject(this);
}
