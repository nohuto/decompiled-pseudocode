/*
 * XREFs of ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1801162C0
 * Callers:
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801164E0 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x180115504 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry2D::GetMeshData(
        CGeometry2D *this,
        const struct MilVertexXYZDUV2 **const a2,
        unsigned int *a3,
        const unsigned int **const a4,
        unsigned int *a5)
{
  int v9; // esi
  unsigned __int64 v10; // rsi
  void *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  unsigned __int64 v16; // rsi
  void *v17; // rax
  unsigned int v19; // eax

  v9 = 0;
  if ( *((_QWORD *)this + 9) )
    goto LABEL_6;
  v10 = (*(unsigned int (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 184LL))(this);
  v11 = MIDL_user_allocate(saturated_mul(v10, 0x20uLL));
  *((_QWORD *)this + 9) = v11;
  if ( !v11 )
  {
    v15 = -2147024882;
    v19 = 44;
    v9 = -2147024882;
    goto LABEL_9;
  }
  v12 = (*(__int64 (__fastcall **)(CGeometry2D *, void *, _QWORD))(*(_QWORD *)this + 224LL))(
          this,
          v11,
          (unsigned int)v10);
  v9 = v12;
  v15 = v12;
  if ( v12 < 0 )
  {
    v19 = 45;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v19, 0LL);
    CGeometry2D::FreeCaches((void **)this);
    return (unsigned int)v9;
  }
  v16 = (*(unsigned int (__fastcall **)(CGeometry2D *, __int64, __int64, _QWORD))(*(_QWORD *)this + 192LL))(
          this,
          v13,
          v14,
          (unsigned int)v12);
  v17 = MIDL_user_allocate(saturated_mul(v16, 4uLL));
  *((_QWORD *)this + 10) = v17;
  if ( !v17 )
  {
    v15 = -2147024882;
    v19 = 51;
    v9 = -2147024882;
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(CGeometry2D *, _QWORD, void *, _QWORD))(*(_QWORD *)this + 216LL))(
         this,
         0LL,
         v17,
         (unsigned int)v16);
  v15 = v9;
  if ( v9 < 0 )
  {
    v19 = 52;
    goto LABEL_9;
  }
LABEL_6:
  *a2 = (const struct MilVertexXYZDUV2 *)*((_QWORD *)this + 9);
  *a3 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 184LL))(this);
  *a4 = (const unsigned int *)*((_QWORD *)this + 10);
  *a5 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 192LL))(this);
  return (unsigned int)v9;
}
