/*
 * XREFs of ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x14009E32C
 * Callers:
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x14009E208 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentat.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x140008F24 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140009854 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x14000A8E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x140038720 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ??$FindProperty@UFlipContentHCompSurf@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHCompSurf@@@Z @ 0x1400581E8 (--$FindProperty@UFlipContentHCompSurf@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentHCompSurf@@.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ??$FindProperty@UPresentationSurfaceInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentationSurfaceInfo@@@Z @ 0x14009E1A8 (--$FindProperty@UPresentationSurfaceInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentationSurface.c)
 */

__int64 __fastcall CContentResource::Initialize(CContentResource *this, struct PresentationSurfaceInfo *a2)
{
  unsigned int v2; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rcx
  int v9; // eax
  PVOID v10; // rdi
  int v11; // eax
  CCompositionSurface *v12; // rdx
  PVOID Object; // [rsp+40h] [rbp+20h] BYREF
  CCompositionSurface *v15; // [rsp+50h] [rbp+30h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
    Object = 0LL;
    v6 = *((_QWORD *)this + 4);
    if ( IsEnabledDeviceUsageNoInline )
    {
      CFlipPropertySetBase::FindProperty<PresentationSurfaceInfo>(v6, &Object);
      if ( !Object )
        return v2;
      v8 = *(void **)Object;
      *(_OWORD *)a2 = *(_OWORD *)Object;
    }
    else
    {
      CFlipPropertySetBase::FindProperty<FlipContentHCompSurf>(v6, &Object);
      if ( !Object )
        return v2;
      v8 = *(void **)Object;
    }
    if ( v8 )
    {
      Object = 0LL;
      v15 = 0LL;
      v9 = CompositionSurfaceObject::ResolveHandle(v8, 2u, v7, (struct CompositionSurfaceObject **)&Object);
      v10 = Object;
      v2 = v9;
      if ( v9 >= 0 )
      {
        v11 = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v15);
        v12 = v15;
        v2 = v11;
        if ( v11 >= 0 )
        {
          if ( CCompositionSurface::GetActiveBuffer(v15) )
          {
            v2 = -1073741811;
          }
          else
          {
            *((_QWORD *)this + 6) = v10;
            v10 = 0LL;
          }
        }
        if ( v12 )
          CCompositionSurface::UnlockAndRelease(v12);
      }
      if ( v10 )
        ObfDereferenceObject(v10);
    }
  }
  return v2;
}
