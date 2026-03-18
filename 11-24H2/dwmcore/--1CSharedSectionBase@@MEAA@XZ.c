/*
 * XREFs of ??1CSharedSectionBase@@MEAA@XZ @ 0x180155B18
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x180155AC0 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x180275DD0 (--_ECSharedSectionBase@@MEAAPEAXI@Z.c)
 *     ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x180298EC0 (--_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x180155848 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 */

void __fastcall CSharedSectionBase::~CSharedSectionBase(CSharedSectionBase *this)
{
  *(_QWORD *)this = &CSharedSectionBase::`vftable';
  CSharedSectionBase::UnmapSharedMemory(this);
  CResource::~CResource(this);
}
