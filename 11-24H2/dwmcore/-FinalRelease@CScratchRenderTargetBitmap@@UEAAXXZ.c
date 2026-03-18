/*
 * XREFs of ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x1801AFE90
 * Callers:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801AFCA0 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1801B002C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAPEAVCD3DDevice@@XZ @ 0x1802CDA00 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAPEAVCD3DDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScratchRenderTargetBitmap::FinalRelease(CScratchRenderTargetBitmap *this)
{
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  __int64 Device; // rax
  __int64 v5; // rbx
  CGlobalComposition *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // rsi
  int v13; // eax
  CScratchRenderTargetBitmap *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 144)
    && (int)CRenderTargetBitmap::IsValid((CScratchRenderTargetBitmap *)((char *)this + 80)) >= 0 )
  {
    v2 = *((_QWORD *)this + 15);
    if ( v2 )
    {
      v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 40LL);
      if ( v3 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
        Device = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice();
      else
        Device = v3();
    }
    else
    {
      Device = 0LL;
    }
    v14 = this;
    v5 = Device + 464;
    if ( *((_BYTE *)this + 145) )
      --*(_DWORD *)(Device + 504);
    v6 = g_pComposition;
    v7 = 0LL;
    if ( g_pComposition )
      v7 = *((_QWORD *)g_pComposition + 111);
    *((_QWORD *)this + 17) = v7;
    v8 = *(_DWORD *)(v5 + 24);
    if ( v8 >= 0x20 )
    {
      if ( v6 )
        v11 = *((_QWORD *)v6 + 111);
      else
        v11 = 0LL;
      do
      {
        v12 = *(_QWORD *)(*(_QWORD *)v5 + 8LL * --v8);
        if ( (unsigned __int64)(v11 - *(_QWORD *)(v12 + 136)) > 1 )
        {
          DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v5, v8);
          *(_BYTE *)(v12 + 144) = 0;
          CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v12);
        }
      }
      while ( v8 );
    }
    v9 = *(_DWORD *)(v5 + 24);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v10 > *(_DWORD *)(v5 + 20) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet(v5, 8, 1, &v14);
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xC0u, 0LL);
          return;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v5 + 8LL * v9) = v14;
        *(_DWORD *)(v5 + 24) = v10;
      }
      CMILRefCountImpl::AddReference((CScratchRenderTargetBitmap *)((char *)v14 + 8));
    }
  }
}
