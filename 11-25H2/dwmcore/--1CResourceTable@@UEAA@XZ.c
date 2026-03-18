/*
 * XREFs of ??1CResourceTable@@UEAA@XZ @ 0x1800C0E0C
 * Callers:
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x1800C0DC0 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ @ 0x1800C0E4C (-BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800C0EB0 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 */

void __fastcall CResourceTable::~CResourceTable(CResourceTable *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CResourceTable::`vftable';
  CResourceTable::BreakLinksForCyclicResources(this);
  ReleaseInterface<CProcessAttribution>((char *)this + 56);
  v2 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  operator delete(v2);
}
