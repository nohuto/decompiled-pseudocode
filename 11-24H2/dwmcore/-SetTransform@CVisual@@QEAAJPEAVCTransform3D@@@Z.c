/*
 * XREFs of ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x1801328E4
 * Callers:
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1801327D8 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::SetTransform(struct CResource **this, struct CTransform3D *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebp
  __int64 (__fastcall *v9)(CMILRefCountImpl *); // rax

  v2 = 0;
  if ( a2 != this[30] )
  {
    if ( a2 )
    {
      Count = CPtrArray<CVisual>::GetCount((_QWORD *)a2 + 4);
      v7 = CPtrArrayBase::InsertAt(v6, (unsigned __int64)this, Count);
      v8 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xD9u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xAB7u, 0LL);
        return v8;
      }
      v9 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
      if ( v9 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(a2);
      else
        v9(a2);
      v2 = v8;
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[30]);
    this[30] = a2;
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged((CVisual *)this);
  }
  return v2;
}
