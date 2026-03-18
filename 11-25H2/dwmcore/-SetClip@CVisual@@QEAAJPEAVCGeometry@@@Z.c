/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18012F074
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z @ 0x18012EF68 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800B34B0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18012F1D4 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x18012F260 (-IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x18012FAF0 (-IsSameGeometry@CRegionGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::SetClip(CVisual *this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  const struct CGeometry *v4; // rdx
  bool (__fastcall *v6)(CRectangleGeometry *__hidden, const struct CGeometry *); // rax
  char IsSameGeometry; // al
  char v8; // bp
  unsigned __int64 Count; // rax
  CPtrArrayBase *v10; // rcx
  int v11; // eax
  __int64 (__fastcall *v12)(CMILRefCountImpl *); // rax
  _BYTE *v13; // rdx

  v3 = 0;
  v4 = (const struct CGeometry *)*((_QWORD *)this + 31);
  if ( a2 != v4 )
  {
    if ( a2 )
    {
      v6 = *(bool (__fastcall **)(CRectangleGeometry *__hidden, const struct CGeometry *))(*(_QWORD *)a2 + 200LL);
      if ( v6 == CRectangleGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRectangleGeometry::IsSameGeometry(a2, v4);
      }
      else if ( v6 == CRegionGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRegionGeometry::IsSameGeometry(a2, v4);
      }
      else
      {
        IsSameGeometry = ((__int64 (__fastcall *)(struct CGeometry *))v6)(a2);
      }
      v8 = IsSameGeometry;
      Count = CPtrArray<CVisual>::GetCount((_QWORD *)a2 + 4);
      v11 = CPtrArrayBase::InsertAt(v10, (unsigned __int64)this, Count);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xD9u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0xA7Fu, 0LL);
        return v3;
      }
      v12 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
      if ( v12 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(a2);
      else
        v12(a2);
    }
    else
    {
      v8 = 0;
    }
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 31));
    *((_QWORD *)this + 31) = a2;
    if ( !v8 )
    {
      CVisual::PropagateFlags((__int64)this, 5u);
      CVisual::OnTransformChanged(this);
      CVisual::OnClipChanged(this, v13);
    }
  }
  return v3;
}
