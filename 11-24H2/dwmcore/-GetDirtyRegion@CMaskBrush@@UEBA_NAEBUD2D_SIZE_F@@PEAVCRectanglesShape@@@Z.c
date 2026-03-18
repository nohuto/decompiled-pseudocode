/*
 * XREFs of ?GetDirtyRegion@CMaskBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18004BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18004B820 (-GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C640 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?Release@CGenericInk@@WJA@EAAKXZ @ 0x1802781B0 (-Release@CGenericInk@@WJA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CMaskBrush::GetDirtyRegion(CMaskBrush *this, const struct D2D_SIZE_F *a2, struct CRectanglesShape *a3)
{
  CMaskBrush *v3; // rcx
  __int64 (__fastcall **v6)(CMaskBrush *); // rax
  __int64 (__fastcall *v7)(CMaskBrush *); // rax
  int Interface; // eax
  bool (__fastcall *v9)(CSurfaceBrush *, const struct D2D_SIZE_F *, struct CRectanglesShape *); // rax
  bool DirtyRegion; // al
  bool v11; // bl
  __int64 (__fastcall *v12)(CCachedVisualImage *); // rdx
  __int64 (__fastcall *v13)(CCachedVisualImage *); // rdx
  CSurfaceBrush *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = (CMaskBrush *)*((_QWORD *)this - 2);
  if ( !v3 )
    return 0;
  v6 = *(__int64 (__fastcall ***)(CMaskBrush *))v3;
  v15 = 0LL;
  v7 = *v6;
  if ( v7 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
    Interface = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface(v3);
  else
    Interface = ((__int64 (__fastcall *)(CMaskBrush *, GUID *, CSurfaceBrush **))v7)(
                  v3,
                  &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27,
                  &v15);
  if ( Interface < 0 )
  {
    if ( v15 )
    {
      v13 = *(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v15 + 16LL);
      if ( v13 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      {
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v15);
      }
      else if ( (char *)v13 == (char *)CGenericInk::Release )
      {
        CGenericInk::Release(v15);
      }
      else
      {
        (*(void (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    return 0;
  }
  v9 = *(bool (__fastcall **)(CSurfaceBrush *, const struct D2D_SIZE_F *, struct CRectanglesShape *))(*(_QWORD *)v15 + 24LL);
  if ( v9 == CSurfaceBrush::GetDirtyRegion )
    DirtyRegion = CSurfaceBrush::GetDirtyRegion(v15, a2, a3);
  else
    DirtyRegion = v9(v15, a2, a3);
  v11 = DirtyRegion;
  if ( v15 )
  {
    v12 = *(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v15 + 16LL);
    if ( v12 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v15);
    }
    else if ( (char *)v12 == (char *)CGenericInk::Release )
    {
      CGenericInk::Release(v15);
    }
    else
    {
      (*(void (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return v11;
}
