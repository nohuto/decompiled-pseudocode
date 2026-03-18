/*
 * XREFs of ??1CSharedSectionBase@@MEAA@XZ @ 0x180214858
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x180214800 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 *     ??_ECSharedSectionBase@@MEAAPEAXI@Z @ 0x180280850 (--_ECSharedSectionBase@@MEAAPEAXI@Z.c)
 *     ??_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z @ 0x1802A2F40 (--_GCCrossContainerGuestReadWriteSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x18003EA38 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 */

void __fastcall CSharedSectionBase::~CSharedSectionBase(CSharedSectionBase *this)
{
  *(_QWORD *)this = &CSharedSectionBase::`vftable';
  CSharedSectionBase::UnmapSharedMemory(this);
  CResource::~CResource(this);
}
