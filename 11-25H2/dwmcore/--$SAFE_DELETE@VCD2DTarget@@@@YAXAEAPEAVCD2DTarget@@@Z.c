/*
 * XREFs of ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1801D9094
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800D7AD0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1801D9020 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802D6FB0 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SAFE_DELETE<CD2DTarget>(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void (*v6)(void); // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1[5];
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = v1[4];
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = v1[3];
    if ( v5 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
      if ( (char *)v6 == (char *)CDeviceTextureTarget::Release )
        CDeviceTextureTarget::Release(v5);
      else
        v6();
    }
    operator delete(v1, 0x58uLL);
    *a1 = 0LL;
  }
}
