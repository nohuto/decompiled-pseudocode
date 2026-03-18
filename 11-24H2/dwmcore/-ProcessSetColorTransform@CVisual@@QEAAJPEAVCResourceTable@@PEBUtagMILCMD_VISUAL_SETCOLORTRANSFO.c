/*
 * XREFs of ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18028BACC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180032FC0 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAVCColorTransformResource@@XZ @ 0x180039B30 (-GetColorTransform@CVisual@@QEBAPEAVCColorTransformResource@@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetColorTransform(
        unsigned int **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCOLORTRANSFORM *a3)
{
  struct CResource **v3; // rbx
  unsigned int v5; // edx
  unsigned int v7; // esi
  struct CResource *Resource; // rdi
  struct CResource *ColorTransform; // r14
  int v10; // eax
  unsigned int *v11; // r10
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // r10
  unsigned int Slot; // eax
  __int64 v17; // r10

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v7 = 0;
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x1Au)) != 0LL )
  {
    ColorTransform = CVisual::GetColorTransform((CVisual *)this);
    if ( Resource != ColorTransform )
    {
      v10 = CResource::RegisterNotifier((CResource *)this, Resource);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xCA1u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, ColorTransform);
        v11 = this[29];
        v12 = *v11;
        if ( Resource )
        {
          if ( (v12 & 0x4000000) != 0 )
          {
            Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)this[29], 6);
            if ( Slot < *(_DWORD *)(v17 + 4) )
              v3 = (struct CResource **)(v17
                                       + *(unsigned int *)(v17 + 4)
                                       + 15LL
                                       + 8LL * Slot
                                       - (((unsigned __int8)*(_DWORD *)(v17 + 4) + 15) & 7));
            *v3 = Resource;
          }
          else
          {
            *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)this + 29, 6) = Resource;
          }
        }
        else if ( (v12 & 0x4000000) != 0 )
        {
          v13 = (__int64)this[29];
          *v11 = v12 & 0xFBFFFFFF;
          v14 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v13, 6);
          if ( v14 < *(_DWORD *)(v15 + 4) )
            *(_BYTE *)(v14 + v15 + 8) = 0;
        }
        CVisual::PropagateFlags((__int64)this, 4u);
      }
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xC99u, 0LL);
  }
  return v7;
}
