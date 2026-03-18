/*
 * XREFs of ??1CVisualGroup@@UEAA@XZ @ 0x180265428
 * Callers:
 *     ??_ECVisualGroup@@UEAAPEAXI@Z @ 0x180265660 (--_ECVisualGroup@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@0@@Z @ 0x18013B600 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExclu.c)
 */

void __fastcall CVisualGroup::~CVisualGroup(CVisualGroup *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CExcludeVisualReference>>>(v2, *((_QWORD *)this + 10));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 9),
      (*((_QWORD *)this + 11) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  CResource::~CResource(this);
}
