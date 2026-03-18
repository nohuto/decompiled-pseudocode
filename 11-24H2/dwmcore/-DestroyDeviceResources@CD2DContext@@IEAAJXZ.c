/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1801CA824
 * Callers:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1801CA704 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1801CA738 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180147934 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1801CAD80 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1801CAED4 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x1801CAF10 (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DContext *this)
{
  CD2DResourceManager *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 i; // rdi
  __int64 v11; // r14
  __int64 v12; // rcx

  CD2DContext::ReleaseCachedD2DTarget(this);
  v2 = (CD2DResourceManager *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v2);
    v3 = (void *)*((_QWORD *)this + 21);
    if ( v3 )
    {
      operator delete(v3, 0x20uLL);
      *((_QWORD *)this + 21) = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable(this);
  v4 = *((_QWORD *)this + 39);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 39) = 0LL;
  }
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 26) = 0LL;
  }
  v6 = *((_QWORD *)this + 25);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 25) = 0LL;
  }
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 24) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 76); i = (unsigned int)(i + 1) )
  {
    v11 = *((_QWORD *)this + 35);
    v12 = *(_QWORD *)(v11 + 8 * i);
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      *(_QWORD *)(v11 + 8 * i) = 0LL;
    }
  }
  *((_DWORD *)this + 76) = 0;
  CDrawListBatchManager::DestroyDeviceResources((CD2DContext *)((char *)this + 8));
  return 0LL;
}
