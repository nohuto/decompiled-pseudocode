/*
 * XREFs of ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x1802B168C
 * Callers:
 *     ??_ECTextVisual@@MEAAPEAXI@Z @ 0x1802B1770 (--_ECTextVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180077040 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::~CTextVisualGeneratedT<CTextVisual,CVisual>(
        struct CResource ***this)
{
  char *v1; // rbx
  _QWORD **v3; // rdi

  v1 = (char *)(this + 84);
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 84);
  v3 = this + 87;
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 87);
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 90);
  if ( this[90] )
  {
    std::_Deallocate<16,0>(this[90], ((char *)this[92] - (char *)this[90]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[90] = 0LL;
    this[91] = 0LL;
    this[92] = 0LL;
  }
  if ( *v3 )
  {
    std::_Deallocate<16,0>(*v3, ((char *)this[89] - (char *)*v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *v3 = 0LL;
    this[88] = 0LL;
    this[89] = 0LL;
  }
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(_QWORD **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CVisual::~CVisual((struct CResource **)this);
}
