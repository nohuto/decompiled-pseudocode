/*
 * XREFs of NtGdiEngGradientFill @ 0x1C02C9520
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1C0002BB0 (EngGradientFill.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C013D8D8 (--0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x1C013FCD0 (--1ECLIPOBJTMPBOUNDED@@QEAA@XZ.c)
 *     ?bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ @ 0x1C013FCEC (-bValid@ECLIPOBJTMPBOUNDED@@QEBA_NXZ.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02C6678 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C66B8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6870 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C02C6A40 (-CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z.c)
 *     ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C02C6A6C (-CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02C6AEC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z @ 0x1C02C776C (-bValidVertexMeshData@@YAHPEAU_TRIVERTEX@@PEAXKKK@Z.c)
 */

_BOOL8 __fastcall NtGdiEngGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        __int64 a3,
        __int64 a4,
        unsigned int nVertex,
        void *a6,
        ULONG a7,
        RECTL *a8,
        POINTL *a9,
        ULONG ulMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // esi
  unsigned int nMesh; // r12d
  bool v18; // cc
  __int64 v20; // rsi
  __int64 v21; // r13
  TRIVERTEX *v22; // r15
  void *pMesh; // r14
  char *v24; // r10
  void *v25; // rdx
  BOOL v26; // esi
  struct _CLIPOBJ *DDIOBJ; // rax
  XLATEOBJ *v28; // rax
  SURFOBJ *psoDest; // [rsp+60h] [rbp-1B8h]
  POINTL *pptlDitherOrg; // [rsp+68h] [rbp-1B0h] BYREF
  RECTL *prclExtents; // [rsp+70h] [rbp-1A8h] BYREF
  void *Src; // [rsp+78h] [rbp-1A0h]
  TRIVERTEX *v33; // [rsp+80h] [rbp-198h]
  void *v34; // [rsp+88h] [rbp-190h]
  struct _CLIPOBJ *v35; // [rsp+90h] [rbp-188h]
  __int64 v36; // [rsp+98h] [rbp-180h]
  UMPDOBJ *v37; // [rsp+A0h] [rbp-178h]
  __int64 v38; // [rsp+A8h] [rbp-170h]
  struct _POINTL v39; // [rsp+B0h] [rbp-168h] BYREF
  struct _CLIPOBJ *v40; // [rsp+B8h] [rbp-160h]
  __int64 v41; // [rsp+C0h] [rbp-158h]
  char *v42; // [rsp+C8h] [rbp-150h]
  _QWORD v43[8]; // [rsp+D0h] [rbp-148h] BYREF
  struct _RECTL v44; // [rsp+110h] [rbp-108h] BYREF
  _BYTE v45[160]; // [rsp+120h] [rbp-F8h] BYREF
  CLIPOBJ *pco; // [rsp+1C0h] [rbp-58h]

  v38 = a4;
  v36 = a3;
  v35 = a2;
  v40 = a2;
  v41 = a3;
  Src = a6;
  prclExtents = a8;
  pptlDitherOrg = a9;
  v44 = 0LL;
  v39 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v37 = ThreadCurrentObj;
  v13 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( ThreadCurrentObj )
    ++*v13;
  v42 = (char *)ThreadCurrentObj + 436;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v43, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  psoDest = (SURFOBJ *)v43[0];
  if ( ulMode < 2 )
  {
    v16 = 8;
    nMesh = a7;
    v18 = a7 <= 0x4E2000;
  }
  else
  {
    if ( ulMode != 2 )
    {
LABEL_9:
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
      --*v13;
      return 0LL;
    }
    v16 = 12;
    nMesh = a7;
    v18 = a7 <= 0x341555;
  }
  if ( !v18 )
    goto LABEL_9;
  if ( nMesh && nVertex )
  {
    v20 = nMesh * v16;
    if ( nVertex > 0x271000 )
      goto LABEL_9;
    v21 = 16 * nVertex;
    if ( (_DWORD)v21 )
      v22 = (TRIVERTEX *)Win32AllocPool((unsigned int)v21, 1886221639LL, v14, v15);
    else
      v22 = 0LL;
    v33 = v22;
    if ( (_DWORD)v20 )
      pMesh = (void *)Win32AllocPool((unsigned int)v20, 1886221639LL, v14, v15);
    else
      pMesh = 0LL;
    v34 = pMesh;
    if ( psoDest && v38 && Src && v22 && pMesh && prclExtents && pptlDitherOrg )
    {
      CaptureRECTL(&prclExtents, &v44);
      CapturePOINTL(&pptlDitherOrg, &v39);
      if ( &v24[v21] < v24 || (unsigned __int64)&v24[v21] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, v24, (unsigned int)v21);
      v25 = Src;
      if ( (char *)Src + v20 < Src || (unsigned __int64)Src + v20 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(pMesh, v25, (unsigned int)v20);
      v26 = bValidVertexMeshData(v22, (char *)pMesh, nVertex, nMesh, ulMode) != 0;
      if ( v26 )
      {
        DDIOBJ = UMPDOBJ::GetDDIOBJ(v37, v35, &psoDest->sizlBitmap);
        ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45, psoDest, DDIOBJ, 0LL);
        v26 = 0;
        if ( ECLIPOBJTMPBOUNDED::bValid((ECLIPOBJTMPBOUNDED *)v45) )
        {
          v28 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v37, v36);
          if ( EngGradientFill(psoDest, pco, v28, v22, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode) )
            v26 = 1;
        }
        ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED((ECLIPOBJTMPBOUNDED *)v45);
      }
    }
    else
    {
      v26 = 0;
    }
    if ( v22 )
      Win32FreePool(v22);
    if ( pMesh )
      Win32FreePool(pMesh);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
    --*v13;
    return v26;
  }
  else
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v43);
    --*v13;
    return 1LL;
  }
}
