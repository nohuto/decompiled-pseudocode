/*
 * XREFs of EngGradientFill @ 0x1401200C0
 * Callers:
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1401DE1F0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1402FB230 (-BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RE.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1402FD4A0 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140309ED0 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     NtGdiEngGradientFill @ 0x140339420 (NtGdiEngGradientFill.c)
 * Callees:
 *     ?psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z @ 0x1401203BC (-psSetupDstSurface@@YAPEAVSURFACE@@PEAV1@PEAU_RECTL@@AEAVSURFMEM@@HH@Z.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x140120574 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x140120928 (-bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECT.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngGradientFill(
        SURFOBJ *psoDest,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  unsigned __int64 v12; // r15
  int v13; // ebx
  RECTL v14; // xmm0
  struct SURFACE *v15; // rax
  struct SURFACE *v16; // r12
  LONG v17; // edx
  LONG v18; // r8d
  int v19; // ebx
  TRIVERTEX *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  Gre::Base *v23; // rcx
  LONG left; // eax
  LONG right; // ecx
  LONG v27; // eax
  LONG top; // ecx
  LONG v29; // eax
  __int64 v30; // rbx
  struct Gre::Base::SESSION_GLOBALS *v31; // r9
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v33; // rcx
  LONG v34; // ecx
  LONG v35; // edx
  __int64 v36; // rax
  size_t Size; // [rsp+28h] [rbp-89h]
  BOOL v38; // [rsp+50h] [rbp-61h]
  struct _XLATEOBJ *v39; // [rsp+58h] [rbp-59h] BYREF
  struct _RECTL v40; // [rsp+60h] [rbp-51h] BYREF
  __int64 v41; // [rsp+70h] [rbp-41h] BYREF
  char v42; // [rsp+78h] [rbp-39h]
  int v43; // [rsp+7Ch] [rbp-35h]
  __int64 v44; // [rsp+80h] [rbp-31h] BYREF
  struct _RECTL *v45; // [rsp+88h] [rbp-29h]
  RECTL v46; // [rsp+90h] [rbp-21h] BYREF

  v39 = pxlo;
  v45 = prclExtents;
  v46 = 0LL;
  v12 = (unsigned __int64)&psoDest[-1].pvScan0 & -(__int64)(psoDest != 0LL);
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v13 = 0;
  v44 = *(_QWORD *)(v12 + 0x30);
  PDEVOBJ::vSync((PDEVOBJ *)&v44, psoDest, 0LL, 0);
  v14 = *prclExtents;
  v46 = *prclExtents;
  if ( !pco || !pco->iDComplexity )
  {
LABEL_3:
    v40 = v14;
    if ( !pco )
      goto LABEL_6;
    goto LABEL_4;
  }
  left = v46.left;
  if ( v46.left < pco->rclBounds.left )
    left = pco->rclBounds.left;
  right = pco->rclBounds.right;
  v46.left = left;
  v27 = v46.right;
  if ( v46.right > right )
    v27 = right;
  top = pco->rclBounds.top;
  v46.right = v27;
  v29 = v46.top;
  if ( v46.top < top )
    v29 = top;
  v46.top = v29;
  if ( v46.bottom <= pco->rclBounds.bottom )
  {
    v14 = v46;
    goto LABEL_3;
  }
  v46.bottom = pco->rclBounds.bottom;
  v40 = v46;
LABEL_4:
  if ( pco->iDComplexity >= 2u )
    v13 = 1;
LABEL_6:
  v15 = psSetupDstSurface((struct SURFACE *)v12, &v40, (struct SURFMEM *)&v41, v13, ulMode > 1);
  v16 = v15;
  if ( v15 )
  {
    if ( v15 == (struct SURFACE *)v12 )
    {
      v19 = 0;
    }
    else
    {
      v17 = v46.top;
      v18 = v46.left;
      v19 = 1;
      if ( nVertex )
      {
        v20 = pVertex;
        v21 = nVertex;
        do
        {
          v20->x -= v18;
          v20->y -= v17;
          ++v20;
          --v21;
        }
        while ( v21 );
      }
      pptlDitherOrg->x += v18;
      pptlDitherOrg->y += v17;
    }
    if ( ulMode == 2 )
    {
      LODWORD(Size) = nMesh;
      v22 = bTriangleMesh(
              v16,
              v39,
              pVertex,
              nVertex,
              (struct _GRADIENT_TRIANGLE *)pMesh,
              Size,
              2u,
              &v40,
              v45,
              pptlDitherOrg);
    }
    else
    {
      v22 = bRectangleMesh(
              v16,
              v39,
              pVertex,
              nVertex,
              (struct _GRADIENT_RECT *)pMesh,
              nMesh,
              ulMode,
              &v40,
              pptlDitherOrg);
    }
    v38 = v22;
    if ( v19 )
    {
      v30 = *(_QWORD *)(v12 + 48);
      v39 = 0LL;
      v31 = Gre::Base::Globals(v23);
      if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
        v32 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v30 + 2832);
      else
        v32 = EngCopyBits;
      if ( v12 )
        v33 = v12 + 24;
      else
        v33 = 0LL;
      ((void (__fastcall *)(unsigned __int64, char *, CLIPOBJ *, char *, RECTL *, struct _XLATEOBJ **))v32)(
        v33,
        (char *)v16 + 24,
        pco,
        (char *)v31 + 4552,
        &v46,
        &v39);
      v34 = v46.top;
      v35 = v46.left;
      if ( nVertex )
      {
        v36 = nVertex;
        do
        {
          pVertex->x += v35;
          pVertex->y += v34;
          ++pVertex;
          --v36;
        }
        while ( v36 );
      }
      pptlDitherOrg->x -= v35;
      pptlDitherOrg->y -= v34;
    }
  }
  else
  {
    EngSetLastError(8u);
    v38 = 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v41);
  return v38;
}
