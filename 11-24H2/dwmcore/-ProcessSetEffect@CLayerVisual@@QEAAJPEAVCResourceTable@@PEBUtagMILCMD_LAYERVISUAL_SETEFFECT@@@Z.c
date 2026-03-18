/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18021C070
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1801D8DE0 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18022E8F4 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  struct CResource **v8; // rax
  struct CResource **v9; // rdi
  struct CResource *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
  {
    if ( !*((_QWORD *)this + 86) )
      return v4;
    CLayerVisual::ClearTreeEffect(this);
    goto LABEL_18;
  }
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x39u);
  if ( !Resource )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x31u, 0LL);
    return v4;
  }
  v8 = (struct CResource **)*((_QWORD *)this + 86);
  if ( !v8 )
  {
    v8 = (struct CResource **)DefaultHeap::AllocClear(0x10uLL);
    if ( !v8 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v8[1] = 0LL;
    *v8 = 0LL;
    *((_QWORD *)this + 86) = v8;
  }
  if ( *v8 != Resource )
  {
    CResource::UnRegisterNotifierInternal(this, *v8);
    v9 = (struct CResource **)*((_QWORD *)this + 86);
    if ( *v9 != Resource )
    {
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
      v10 = *v9;
      *v9 = Resource;
      if ( v10 )
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = CResource::RegisterNotifier(this, Resource);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x3Fu, 0LL);
      return v4;
    }
    CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(this, v12);
LABEL_18:
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return v4;
}
