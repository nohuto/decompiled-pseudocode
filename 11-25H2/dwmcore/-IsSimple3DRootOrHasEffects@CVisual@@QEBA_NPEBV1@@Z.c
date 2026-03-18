/*
 * XREFs of ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18011F550
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18011F238 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::IsSimple3DRootOrHasEffects(CVisual *this, const struct CVisual *a2)
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // rdi
  _DWORD *v6; // r8
  char v7; // bp
  struct CTreeEffect *(__fastcall *v8)(CLayerVisual *); // rax
  __int64 v9; // rax
  _BYTE *v10; // rdx
  _QWORD *v11; // r9
  unsigned int i; // ecx

  if ( a2 && *((_DWORD *)a2 + 28) == 1 )
  {
    v4 = *((_DWORD *)this + 28);
    v5 = *((_QWORD *)this + 10);
    if ( (v5 & 2) != 0 )
      v5 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v5) = v5 & 1;
    v6 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v6 & 0x800000) == 0 )
      goto LABEL_7;
    v9 = (unsigned int)v6[1];
    v10 = v6 + 2;
    v11 = 0LL;
    for ( i = 0; i < (unsigned int)v9; ++v10 )
    {
      if ( *v10 == 9 )
        break;
      ++i;
    }
    if ( i < (unsigned int)v9 )
      v11 = (_QWORD *)((char *)v6 + 8LL * i - (((_BYTE)v9 + 15) & 7) + v9 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 64LL))(*v11, 60LL) )
      v7 = 1;
    else
LABEL_7:
      v7 = 0;
    v8 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 224LL);
    if ( v8 == CLayerVisual::GetTreeEffect )
      v3 = *((_QWORD *)this + 85);
    else
      v3 = (__int64)v8(this);
    if ( v4 != 1 && (_DWORD)v5 || v7 || v3 )
      LOBYTE(v3) = 1;
  }
  else
  {
    LOBYTE(v3) = 0;
  }
  return v3;
}
