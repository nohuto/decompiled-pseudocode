/*
 * XREFs of ?Clear@CLightStack@@QEAAXXZ @ 0x180097B10
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800E3D8C (--1CLightStack@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLightStack::Clear(CLightStack *this)
{
  unsigned int i; // esi
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * i);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v3 = (void *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 8) = 0;
  if ( v3 != *((void **)this + 2) )
  {
    operator delete(v3);
    *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
    *((_DWORD *)this + 7) = *((_DWORD *)this + 6);
  }
  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 13);
  *((_DWORD *)this + 32) = 0;
  if ( v4 != *((void **)this + 14) )
  {
    operator delete(v4);
    *((_QWORD *)this + 13) = *((_QWORD *)this + 14);
    *((_DWORD *)this + 31) = *((_DWORD *)this + 30);
  }
}
