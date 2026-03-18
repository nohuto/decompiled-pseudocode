/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180231240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180092F70 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     McTemplateU0pxffffffffffffffff_EventWriteTransfer @ 0x18020228C (McTemplateU0pxffffffffffffffff_EventWriteTransfer.c)
 *     ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180231560 (-SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180257014 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall CDesktopTreeData::SetWorldTransform(
        CVisual **this,
        const struct CMILMatrix *a2,
        bool a3,
        struct CMILMatrix *a4)
{
  __int64 v8; // r10
  __int64 v9; // rdx
  struct CInteraction *InteractionInternal; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  bool v16; // si
  CVisual *v17; // r10
  struct CInteraction *v18; // rdx
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
  {
    CTreeData::SetWorldTransform((CTreeData *)this, a2, a3, a4);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 && CVisual::GetInputHandle(this[31]) )
    {
      if ( !*((_BYTE *)this + 15) )
        return 0;
      if ( this[28] == *(CVisual **)(*(_QWORD *)(v8 + 24) + 888LL) )
      {
        InteractionInternal = CVisual::GetInteractionInternal(this[31]);
        LODWORD(v12) = 0;
        v13 = 0LL;
        if ( InteractionInternal )
        {
          v14 = *((_QWORD *)InteractionInternal + 14);
          if ( v14 )
            v13 = *(_QWORD *)(v14 + 96);
          v12 = HIDWORD(v13);
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0pxffffffffffffffff_EventWriteTransfer(
            v13,
            v9,
            v11,
            (unsigned int)v13 | (unsigned __int64)((__int64)(int)v12 << 32),
            *(_DWORD *)a2,
            *((_DWORD *)a2 + 1),
            *((_DWORD *)a2 + 2),
            *((_DWORD *)a2 + 3),
            *((_DWORD *)a2 + 4),
            *((_DWORD *)a2 + 5),
            *((_DWORD *)a2 + 6),
            *((_DWORD *)a2 + 7),
            *((_DWORD *)a2 + 8),
            *((_DWORD *)a2 + 9),
            *((_DWORD *)a2 + 10),
            *((_DWORD *)a2 + 11),
            *((_DWORD *)a2 + 12),
            *((_DWORD *)a2 + 13),
            *((_DWORD *)a2 + 14),
            *((_DWORD *)a2 + 15));
      }
    }
    return *((_BYTE *)this + 15) && this[28] == *(CVisual **)(*((_QWORD *)this[31] + 3) + 888LL);
  }
  v16 = CTreeData::SetWorldTransform((CTreeData *)this, a2, a3, a4);
  if ( v16 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 && CVisual::GetInputHandle(this[31]) )
  {
    v18 = CVisual::GetInteractionInternal(v17);
    LODWORD(v20) = 0;
    v21 = 0LL;
    if ( v18 )
    {
      v18 = (struct CInteraction *)*((_QWORD *)v18 + 14);
      if ( v18 )
        v21 = *((_QWORD *)v18 + 12);
      v20 = HIDWORD(v21);
    }
    McTemplateU0pxffffffffffffffff_EventWriteTransfer(
      v21,
      (__int64)v18,
      v19,
      (unsigned int)v21 | (unsigned __int64)((__int64)(int)v20 << 32),
      *(_DWORD *)a2,
      *((_DWORD *)a2 + 1),
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      *((_DWORD *)a2 + 4),
      *((_DWORD *)a2 + 5),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 10),
      *((_DWORD *)a2 + 11),
      *((_DWORD *)a2 + 12),
      *((_DWORD *)a2 + 13),
      *((_DWORD *)a2 + 14),
      *((_DWORD *)a2 + 15));
  }
  return v16;
}
