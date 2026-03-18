/*
 * XREFs of ??1CResourceTable@@UEAA@XZ @ 0x18018D2DC
 * Callers:
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18018D290 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ @ 0x18018D31C (-BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18018D380 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
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
