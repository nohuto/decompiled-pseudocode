/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A920
 * Callers:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18005A680 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?GetPixelColor@CSectionBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x18005B0D0 (-GetPixelColor@CSectionBitmapRealization@@UEBA-AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z.c)
 *     ?QueryInterface@CWICBitmapWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180221650 (-QueryInterface@CWICBitmapWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005ABE0 (-HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface(
        CSystemMemoryBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  int Interface; // eax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)this + 80LL);
      if ( (char *)v7 == (char *)CSystemMemoryBitmap::HrFindInterface )
        Interface = CSystemMemoryBitmap::HrFindInterface(this, a2, a3);
      else
        Interface = v7();
      v5 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v5;
      }
    }
    else
    {
      *a3 = this;
      v5 = 0;
    }
    CMILRefCountImpl::AddReference((CSystemMemoryBitmap *)((char *)this + 8));
  }
  return v5;
}
