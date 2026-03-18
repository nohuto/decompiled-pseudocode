/*
 * XREFs of ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801963F0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  bool v4; // di
  struct CTreeEffect *(__fastcall *v5)(CLayerVisual *); // rax
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  _DWORD *v9; // r8
  __int64 v10; // rdx
  _BYTE *v11; // rax
  _QWORD *v12; // rcx
  unsigned int i; // r9d

  if ( *((_DWORD *)this + 28) != 1 )
    return 0;
  v4 = a2 && *((_DWORD *)a2 + 28) == 1;
  v5 = *(struct CTreeEffect *(__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 224LL);
  if ( v5 == CLayerVisual::GetTreeEffect )
    v6 = *((_QWORD *)this + 85);
  else
    v6 = (__int64)v5(this);
  if ( v6 )
    goto LABEL_9;
  v9 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v9 & 0x800000) == 0 )
    goto LABEL_24;
  v10 = (unsigned int)v9[1];
  v11 = v9 + 2;
  v12 = 0LL;
  for ( i = 0; i < (unsigned int)v10; ++v11 )
  {
    if ( *v11 == 9 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v10 )
    v12 = (_QWORD *)((char *)v9 + 8LL * i - (((_BYTE)v10 + 15) & 7) + v10 + 15);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 64LL))(*v12, 60LL) )
LABEL_9:
    v7 = 1;
  else
LABEL_24:
    v7 = 0;
  if ( v4 )
  {
    return v7 != 0;
  }
  else
  {
    v8 = *((_QWORD *)this + 10);
    if ( (v8 & 2) != 0 )
      v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v8) = v8 & 1;
    return (_DWORD)v8 != 0;
  }
}
