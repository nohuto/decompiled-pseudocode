/*
 * XREFs of ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18
 * Callers:
 *     NtUnBindCompositionSurface @ 0x140019EB0 (NtUnBindCompositionSurface.c)
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001BDDC (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14001D29C (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140043640 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtBindCompositionSurface @ 0x1400442C0 (NtBindCompositionSurface.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400450D0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x1400453C0 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140046D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1400472D0 (NtQueryCompositionSurfaceBinding.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1400480B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1400518E4 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1400537D0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z @ 0x140062140 (-DxgkQueryHostCompSurfInfo@@YAJ_JAEAIAEA_K@Z.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009C4E0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009C660 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x14009C870 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x14009C980 (NtSetCompositionSurfaceStatistics.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400A068C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 *     ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B5578 (-CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMES.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x14020A5B0 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionSurfaceObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct CompositionSurfaceObject **a4)
{
  NTSTATUS v5; // eax
  struct CompositionSurfaceObject *v6; // rdi
  unsigned int v7; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v6 = (struct CompositionSurfaceObject *)Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
    {
      *a4 = v6;
    }
    else
    {
      ObfDereferenceObject(v6);
      return (unsigned int)-1073741788;
    }
  }
  return v7;
}
