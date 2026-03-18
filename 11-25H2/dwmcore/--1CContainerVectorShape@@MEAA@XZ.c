/*
 * XREFs of ??1CContainerVectorShape@@MEAA@XZ @ 0x1800792AC
 * Callers:
 *     ??_ECShapeTree@@UEAAPEAXI@Z @ 0x1800782E0 (--_ECShapeTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180079E78 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

void __fastcall CContainerVectorShape::~CContainerVectorShape(struct CResource ***this)
{
  char *v2; // rcx

  *this = (struct CResource **)&CContainerVectorShape::`vftable';
  CResource::UnRegisterNNotifiersInternal((CResource *)this, this[13], (unsigned int)(this[14] - this[13]));
  v2 = (char *)this[13];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, ((char *)this[15] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[13] = 0LL;
    this[14] = 0LL;
    this[15] = 0LL;
  }
  CVectorShape::~CVectorShape((CVectorShape *)this);
}
