/*
 * XREFs of ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x18012D9F0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UpdateContentFlags@CVisual@@AEAAXXZ @ 0x18012DFBC (-UpdateContentFlags@CVisual@@AEAAXXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18012E050 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E300 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012EA10 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F8D0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18014BBCC (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z @ 0x18026BF94 (-RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::ProcessSetBrush(
        CSpriteVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVISUAL_SETBRUSH *a3)
{
  unsigned int v3; // r9d
  CMILRefCountImpl *v4; // rbx
  __int64 v6; // rax
  unsigned int v7; // edi
  char v8; // al
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  int v14; // eax
  __int64 (__fastcall *v15)(CMILRefCountImpl *); // rax
  __int64 v16; // r14
  __int64 (__fastcall *v17)(CResource *); // rax
  bool (__fastcall *v18)(__int64, unsigned __int64); // rax
  bool (__fastcall *v19)(__int64, int); // rax
  char v20; // al
  __int64 v21; // rdi
  CSpriteVisual **i; // rcx
  CSpriteVisual **v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 (__fastcall *v26)(__int64, __int64); // rax

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0LL;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v6 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v6))
    && (v24 = v6 + *((_DWORD *)a2 + 6) * v3, (v25 = *(_QWORD *)(v24 + 8)) != 0)
    && ((v26 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 64LL), v26 == CKeyframeAnimation::IsOfType)
      ? (v10 = CKeyframeAnimation::IsOfType(v25, 17LL))
      : v26 != CVisual::IsOfType
      ? (v26 != CSharedSection::IsOfType
       ? (v10 = v26(v25, 17LL))
       : (v10 = CSharedSection::IsOfType(v25, 17LL)))
      : (v10 = CVisual::IsOfType(v25, 17LL)),
        v10 && (v4 = *(CMILRefCountImpl **)(v24 + 8)) != 0LL) )
  {
    if ( v4 == *((CMILRefCountImpl **)this + 32) )
    {
      return 0;
    }
    else
    {
      CVisual::ClearContentTreeDataCaches(this);
      v11 = *((_QWORD *)this + 32);
      if ( v11 )
      {
        v19 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v11 + 64LL);
        if ( (char *)v19 == (char *)CRenderData::IsOfType )
        {
          v20 = CRenderData::IsOfType(v11, 168LL);
        }
        else if ( v19 == CSurfaceBrush::IsOfType )
        {
          v20 = CSurfaceBrush::IsOfType(v11, 168);
        }
        else
        {
          v20 = (char *)v19 == (char *)CCompositionSurfaceBitmap::IsOfType
              ? CCompositionSurfaceBitmap::IsOfType(v11, 168LL)
              : v19(v11, 168);
        }
        if ( v20 )
        {
          v21 = *((_QWORD *)g_pComposition + 82);
          for ( i = *(CSpriteVisual ***)(v21 + 8); i != *(CSpriteVisual ***)(v21 + 16) && *i != this; ++i )
            ;
          v23 = *(CSpriteVisual ***)(v21 + 16);
          if ( i != v23 )
          {
            memmove_0(i, i + 1, (char *)v23 - (char *)(i + 1));
            *(_QWORD *)(v21 + 16) -= 8LL;
          }
        }
      }
      if ( v4 )
      {
        v12 = *((_QWORD *)v4 + 4);
        if ( (v12 & 2) != 0 )
          v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v13 = *((_QWORD *)v4 + 4) & 1LL;
        v14 = CPtrArrayBase::InsertAt((CMILRefCountImpl *)((char *)v4 + 32), (unsigned __int64)this, v13);
        v7 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xD9u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x208u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x40u, 0LL);
          return v7;
        }
        v15 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v4 + 8LL);
        if ( v15 == CMILRefCountImpl::AddReference )
          CMILRefCountImpl::AddReference(v4);
        else
          v15(v4);
      }
      else
      {
        v7 = 0;
      }
      v16 = *((_QWORD *)this + 32);
      if ( v16 && CPtrArrayBase::Remove((CPtrArrayBase *)(v16 + 32), (unsigned __int64)this) )
      {
        v17 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v16 + 16LL);
        if ( v17 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CResource *)v16);
        else
          v17((CResource *)v16);
      }
      *((_QWORD *)this + 32) = v4;
      if ( v4 )
      {
        v18 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 64LL);
        if ( v18 == CColorBrush::IsOfType )
        {
          v8 = CColorBrush::IsOfType((__int64)v4, 0xA8uLL);
        }
        else if ( (char *)v18 == (char *)CMaskBrush::IsOfType )
        {
          v8 = CMaskBrush::IsOfType(v4, 168LL);
        }
        else if ( (char *)v18 == (char *)CCompositionSurfaceBitmap::IsOfType )
        {
          v8 = CCompositionSurfaceBitmap::IsOfType(v4, 168LL);
        }
        else
        {
          v8 = v18((__int64)v4, 168uLL);
        }
        if ( v8 )
          CSuperWetInkManager::RegisterSuperWetInkVisual(*((CSuperWetInkManager **)g_pComposition + 82), this);
      }
      CVisual::UpdateContentFlags(this);
      CVisual::PropagateFlags((__int64)this, 0x15u);
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x3Cu, 0LL);
  }
  return v7;
}
