/*
 * XREFs of ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800C03F8
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C02C0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@.c)
 *     ??1CDropShadow@@EEAA@XZ @ 0x1800C033C (--1CDropShadow@@EEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::~ShadowIntermediates(CDropShadow::ShadowIntermediates *this)
{
  CResource *v2; // rcx

  v2 = (CResource *)*((_QWORD *)this + 5);
  if ( v2 )
    CResource::UnRegisterNotifierInternal(v2, *((struct CResource **)this + 6));
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((char *)this + 56);
}
