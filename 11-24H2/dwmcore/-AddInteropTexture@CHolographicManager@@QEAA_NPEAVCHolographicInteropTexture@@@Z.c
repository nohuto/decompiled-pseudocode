/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802CEB40
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1802D2FEC (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINT.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x1802CEF30 (-DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1802CF394 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddInteropTexture(RTL_SRWLOCK *this, struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct CHolographicInteropTexture *v4; // rbp
  bool v5; // r14
  struct CHolographicInteropTexture *InteropTextureByBindId; // rdi
  _BYTE *Ptr; // rdx
  CHolographicInteropTaskQueue *v8; // rcx
  struct IUnknown *v9; // r8
  unsigned int v10; // edi
  CompositorTracing *v11; // rcx
  struct CHolographicInteropTexture *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v2 = this + 13;
  v4 = a2;
  v5 = 0;
  AcquireSRWLockShared(this + 13);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId(
                             (CHolographicManager *)this,
                             *((_DWORD *)v4 + 534));
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    AcquireSRWLockExclusive(v2);
    CMILRefCountImpl::AddReference((struct CHolographicInteropTexture *)((char *)v4 + 8));
    Ptr = this[19].Ptr;
    if ( Ptr == this[20].Ptr )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        (const void **)&this[18].Ptr,
        Ptr,
        &v13);
      v4 = v13;
    }
    else
    {
      *(_QWORD *)Ptr = v4;
      this[19].Ptr = (char *)this[19].Ptr + 8;
    }
    v8 = (CHolographicInteropTaskQueue *)this[6].Ptr;
    if ( v8 && LOBYTE(this[30].Ptr) )
    {
      if ( v4 )
        v9 = (struct IUnknown *)((char *)v4 + 80);
      else
        v9 = 0LL;
      v5 = CHolographicInteropTaskQueue::PostMessageW(v8, 2u, v9, 0LL, 0LL, 0LL, 0LL);
    }
    v10 = *((_DWORD *)v4 + 534);
    if ( CompositorTracing::IsEnabled() )
    {
      CompositorTracing::Instance();
      CompositorTracing::DwmHolographicInteropTextureAdd_(v11, v10, 0);
    }
    ReleaseSRWLockExclusive(v2);
  }
  return v5;
}
