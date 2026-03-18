/*
 * XREFs of ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1801DCA6C
 * Callers:
 *     ?SetSource@CBitmapResource@@IEAAJPEAUIWICBitmap@@@Z @ 0x1801DC950 (-SetSource@CBitmapResource@@IEAAJPEAUIWICBitmap@@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802BC170 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180040E14 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1801DCBB8 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapRealization::Create(struct IWICBitmapSource *a1, struct IBitmapRealization **a2)
{
  unsigned int v2; // edi
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  struct ID2DBitmapCacheSource *v9; // rcx
  int v10; // eax
  struct ID2DBitmapCacheSource *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  lpVtbl = a1->lpVtbl;
  v11 = 0LL;
  if ( ((int (__fastcall *)(struct IWICBitmapSource *, GUID *, struct ID2DBitmapCacheSource **))lpVtbl->QueryInterface)(
         a1,
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         &v11) >= 0 )
    goto LABEL_2;
  v9 = v11;
  v11 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = CWICBitmapWrapper::Create(a1, &v11);
  v2 = v10;
  if ( v10 >= 0 )
  {
LABEL_2:
    v6 = MIDL_user_allocate(0x60uLL);
    v7 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x60uLL);
      v7[7] = 0LL;
      v7[8] = 0LL;
      *v7 = &CWICBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
      v7[2] = &CGDISectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
      v7[10] = &CWICBitmapRealization::`vftable'{for `IBitmapRealization'};
      v7[11] = &CWICBitmapRealization::`vftable'{for `IWICDecoderBitmapSource'};
      *((_BYTE *)v7 + 72) = 0;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 1));
    }
    else
    {
      v7 = 0LL;
    }
    CD2DBitmapCache::InitializeCache((CD2DBitmapCache *)v7, v11);
    *a2 = (struct IBitmapRealization *)((unsigned __int64)(v7 + 10) & -(__int64)(v7 != 0LL));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1Cu, 0LL);
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v11 + 16LL))(v11);
  return v2;
}
