/*
 * XREFs of ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470
 * Callers:
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800165D0 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800693EC (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1801006B0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014E034 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B10F4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1284 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801E9D10 (-GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180258AAC (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x180258C24 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180027CF0 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18002EC00 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CRegionShape::BuildFromRects(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // rax
  const struct FastRegion::Internal::CRgnData **v4; // r13
  unsigned int v5; // esi
  __int64 v6; // r9
  _DWORD *v7; // rbx
  unsigned int v8; // r14d
  const struct FastRegion::Internal::CRgnData *v9; // rdi
  int *v10; // rax
  int v11; // r9d
  int v12; // r10d
  int v13; // edx
  int v14; // esp
  int v15; // ecx
  int v16; // r8d
  int v17; // r8d
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // esp
  int v22; // edi
  int v23; // edi
  int v24; // r10d
  int v25; // edx
  char *v26; // r11
  char *v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r11
  int v33; // edi
  int *v34; // rsi
  int v35; // edi
  int v36; // eax
  int v37; // ecx
  int v38; // r9d
  const struct FastRegion::Internal::CRgnData *v39; // r11
  __int64 v40; // rdi
  _DWORD *v41; // r8
  _DWORD *v42; // r10
  __int64 v43; // rax
  _DWORD *v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  HANDLE v48; // rax
  HANDLE ProcessHeap; // rax
  int v50; // eax
  FastRegion::Internal::CRgnData *v51; // rcx
  int v52; // esi
  int v53; // eax
  FastRegion::Internal::CRgnData *v54; // rcx
  int v55; // eax
  const struct FastRegion::Internal::CRgnData *v56; // r15
  struct FastRegion::Internal::CRgnData *v57; // rax
  FastRegion::Internal::CRgnData *v58; // rax
  void *v59; // rcx
  __int64 v62; // [rsp+28h] [rbp-D8h]
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  int v64; // [rsp+38h] [rbp-C8h] BYREF
  int v65; // [rsp+3Ch] [rbp-C4h]
  int v66; // [rsp+40h] [rbp-C0h]
  int v67; // [rsp+44h] [rbp-BCh] BYREF
  int v68; // [rsp+48h] [rbp-B8h]
  int v69; // [rsp+4Ch] [rbp-B4h]
  int v70; // [rsp+50h] [rbp-B0h]
  int v71; // [rsp+54h] [rbp-ACh]
  int v72; // [rsp+58h] [rbp-A8h]
  struct FastRegion::Internal::CRgnData *v73; // [rsp+80h] [rbp-80h] BYREF
  _DWORD Mem[18]; // [rsp+88h] [rbp-78h] BYREF
  int v75; // [rsp+D0h] [rbp-30h]
  struct FastRegion::Internal::CRgnData *v76; // [rsp+D8h] [rbp-28h]
  _BYTE v77[256]; // [rsp+E0h] [rbp-20h] BYREF
  int v78; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v79; // [rsp+1E8h] [rbp+E8h]
  _BYTE v80[256]; // [rsp+1F0h] [rbp+F0h] BYREF
  void *retaddr; // [rsp+328h] [rbp+228h]

  v3 = *(_DWORD **)(a1 + 16);
  v4 = (const struct FastRegion::Internal::CRgnData **)(a1 + 16);
  v5 = a3;
  v62 = a2;
  *v3 = 0;
  v6 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v6 )
  {
    LODWORD(v3) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    a2 = v62;
  }
  if ( v5 )
  {
    v7 = Mem;
    v8 = 0;
    v73 = (struct FastRegion::Internal::CRgnData *)Mem;
    Mem[0] = 0;
    while ( 1 )
    {
      if ( v8 >= v5 )
      {
        v3 = Mem;
        if ( Mem != v7 && v7 )
        {
          ProcessHeap = GetProcessHeap();
          LODWORD(v3) = HeapFree(ProcessHeap, 0, v7);
        }
        return (int)v3;
      }
      v9 = (const struct FastRegion::Internal::CRgnData *)&v64;
      v10 = (int *)(a2 + 16LL * v8);
      lpMem = &v64;
      v11 = v10[2];
      v12 = *v10;
      v13 = v10[3];
      if ( *v10 >= v11 || v10[1] >= v13 )
      {
        v64 = 0;
        goto LABEL_23;
      }
      v67 = v10[1];
      v15 = v14 + 84;
      v16 = v14 + 84;
      v65 = v12;
      v66 = v11;
      v17 = v16 - (v14 + 68);
      v71 = v12;
      v68 = v17;
      v18 = v15 - (v14 + 76);
      v72 = v11;
      v19 = 2;
      v69 = v13;
      v64 = 2;
      v70 = v18 + 8;
      if ( *v7 )
      {
        v50 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
                (const struct FastRegion::Internal::CRgnData *)v7,
                (const struct FastRegion::Internal::CRgnData *)&v64);
        v51 = (FastRegion::Internal::CRgnData *)v77;
        v76 = (struct FastRegion::Internal::CRgnData *)v77;
        v75 = v50;
        if ( (unsigned __int64)v50 > 0x100 )
        {
          v57 = (struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v50);
          v51 = v57;
          if ( !v57 )
          {
            v59 = v76;
            if ( v77 != (_BYTE *)v76 )
              goto LABEL_66;
            goto LABEL_67;
          }
          v7 = v73;
          v9 = (const struct FastRegion::Internal::CRgnData *)lpMem;
          v76 = v57;
        }
        FastRegion::Internal::CRgnData::Union(v51, (const struct FastRegion::Internal::CRgnData *)v7, v9);
        v33 = 0;
        if ( *(_DWORD *)v76 )
        {
          if ( v77 == (_BYTE *)v76 )
          {
            v55 = FastRegion::CRegion::CopyData((FastRegion::CRegion *)&v73, v76);
            v7 = v73;
            v33 = v55;
          }
          else
          {
            v52 = v75;
            v7 = v76;
            v75 = 0;
            v76 = (struct FastRegion::Internal::CRgnData *)v77;
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v73);
            v73 = (struct FastRegion::Internal::CRgnData *)v7;
            Mem[0] = v52;
          }
        }
        else
        {
          *(_DWORD *)v73 = 0;
          v7 = v73;
        }
        if ( v77 == (_BYTE *)v76 )
          goto LABEL_21;
        operator delete(v76);
      }
      else
      {
        v20 = Mem[0];
        v22 = v21 + 112;
        v23 = v18 - (unsigned int)&v67 - v17 + v22;
        if ( Mem == v7 )
          v20 = 60;
        if ( v20 >= v23 )
          goto LABEL_12;
        v7 = MIDL_user_allocate(v23);
        if ( v7 )
        {
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v73);
          v19 = v64;
          v73 = (struct FastRegion::Internal::CRgnData *)v7;
          Mem[0] = v23;
LABEL_12:
          *v7 = v19;
          v24 = 0;
          v7[1] = v65;
          v7[2] = v66;
          v25 = v68;
          v26 = (char *)&v67 + v68;
          v27 = (char *)&v7[2 * v19 + 3];
          if ( v19 > 0 )
          {
            v28 = v7 + 3;
            do
            {
              *v28 = *(_DWORD *)((char *)v28 + (char *)&v64 - (char *)v7);
              v28 += 2;
              v29 = v24++;
              v7[2 * v29 + 4] = (unsigned int)(&v67 + 2 * v29)
                              + 4 * ((v27 - v26) >> 2)
                              + *(&v67 + 2 * v29 + 1)
                              - ((_DWORD)v7
                               + 8 * v29
                               + 12);
            }
            while ( v24 < *v7 );
            v25 = v68;
          }
          v30 = (unsigned __int64)(int)(*(&v67 + 2 * v64 - 1)
                                      - (unsigned int)&v67
                                      - v25
                                      + (unsigned int)&v67
                                      + 8 * (v64 - 1)) >> 2;
          v31 = (int)v30;
          if ( (int)v30 > 0 )
          {
            v32 = v26 - v27;
            do
            {
              *(_DWORD *)v27 = *(_DWORD *)&v27[v32];
              v27 += 4;
              --v31;
            }
            while ( v31 );
          }
          v33 = 0;
          goto LABEL_20;
        }
        v33 = -2147024882;
      }
LABEL_20:
      v7 = v73;
LABEL_21:
      if ( v33 < 0 )
        goto LABEL_68;
      v9 = (const struct FastRegion::Internal::CRgnData *)lpMem;
      v5 = a3;
LABEL_23:
      if ( v8 == 5 * (v8 / 5) || v8 == v5 - 1 )
      {
        if ( *v7 )
        {
          if ( *(_DWORD *)*v4 )
          {
            v53 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
                    *v4,
                    (const struct FastRegion::Internal::CRgnData *)v7);
            v54 = (FastRegion::Internal::CRgnData *)v80;
            v79 = v80;
            v78 = v53;
            if ( (unsigned __int64)v53 > 0x100 )
            {
              v58 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v53);
              v54 = v58;
              if ( !v58 )
              {
                v59 = v79;
                if ( v80 != v79 )
LABEL_66:
                  operator delete(v59);
LABEL_67:
                v33 = -2147024882;
LABEL_68:
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v73);
                ModuleFailFastForHRESULT(v33, retaddr);
              }
              v7 = v73;
              v79 = v58;
            }
            FastRegion::Internal::CRgnData::Union(v54, *v4, (const struct FastRegion::Internal::CRgnData *)v7);
            v33 = FastRegion::CRegion::SaveResult(
                    (FastRegion::CRegion *)v4,
                    (struct FastRegion::Internal::CWorkBuffer *)&v78);
            if ( v80 != v79 )
              operator delete(v79);
            v7 = v73;
          }
          else
          {
            if ( v4 == &v73 )
              goto LABEL_37;
            v34 = (int *)(v4 + 1);
            v35 = v7[2 * *v7 + 2] + 8 * *v7 - v7[4] - 12 + 8 * (*v7 - 1) + 24;
            v36 = 60;
            if ( v4 + 1 != (const struct FastRegion::Internal::CRgnData **)*v4 )
              v36 = *v34;
            if ( v36 < v35 )
            {
              v56 = (const struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v35);
              if ( v56 )
              {
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v4);
                *v4 = v56;
                *v34 = v35;
                goto LABEL_30;
              }
              v7 = v73;
              v33 = -2147024882;
            }
            else
            {
LABEL_30:
              v37 = *v7;
              v38 = 0;
              v39 = *v4;
              *(_DWORD *)v39 = *v7;
              *((_DWORD *)v39 + 1) = v7[1];
              *((_DWORD *)v39 + 2) = v7[2];
              v40 = (__int64)v7 + v7[4] + 12;
              v41 = (_DWORD *)((char *)v39 + 8 * v37 + 12);
              if ( v37 > 0 )
              {
                v42 = (_DWORD *)((char *)v39 + 12);
                do
                {
                  *v42 = *(_DWORD *)((char *)v42 + (char *)v7 - (char *)v39);
                  v42 += 2;
                  v43 = v38++;
                  *((_DWORD *)v39 + 2 * v43 + 4) = 4 * (((__int64)v41 - v40) >> 2)
                                                 + (_DWORD)v7
                                                 + 8 * v43
                                                 + v7[2 * v43 + 4]
                                                 - ((_DWORD)v39
                                                  + 8 * v43);
                }
                while ( v38 < *(_DWORD *)v39 );
              }
              v44 = &v7[2 * *v7 + 1];
              v45 = (unsigned __int64)((int)v44 + v44[1] - v7[4] - ((int)v7 + 12)) >> 2;
              v46 = (int)v45;
              if ( (int)v45 > 0 )
              {
                v47 = v40 - (_QWORD)v41;
                do
                {
                  *v41 = *(_DWORD *)((char *)v41 + v47);
                  ++v41;
                  --v46;
                }
                while ( v46 );
              }
              v7 = v73;
LABEL_37:
              v33 = 0;
            }
          }
          if ( v33 < 0 )
            goto LABEL_68;
        }
        v5 = a3;
        *v7 = 0;
        v7 = v73;
        v9 = (const struct FastRegion::Internal::CRgnData *)lpMem;
      }
      if ( &v64 != (int *)v9 )
      {
        if ( v9 )
        {
          v48 = GetProcessHeap();
          HeapFree(v48, 0, v9);
          v7 = v73;
        }
      }
      a2 = v62;
      ++v8;
    }
  }
  return (int)v3;
}
