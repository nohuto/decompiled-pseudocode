/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x18020C554
 * Callers:
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18007BE8C (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180084360 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18020C65C (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>>(
        int **a1,
        __int64 *a2)
{
  unsigned int RectangleCount; // eax
  unsigned int v5; // edi
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // rbp
  int v10; // esi
  char *v11; // r14
  int *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r9d
  int v16; // r10d
  __int64 v17; // r8
  int v18; // edx
  _DWORD *v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // r11
  char v22[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]
  int *v24; // [rsp+30h] [rbp-38h]
  char *v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+40h] [rbp-28h]
  int v27; // [rsp+44h] [rbp-24h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = *((_DWORD *)a2 + 6);
  v6 = DynArrayImpl<0>::AddMultiple(a2, 16LL, RectangleCount);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT(v6, retaddr);
  result = FastRegion::CRegion::BeginIterator(a1, (__int64)v22);
  LODWORD(v8) = v27;
  v9 = v23;
  v10 = v26;
  v11 = v25;
  v12 = v24;
  while ( (unsigned __int64)v12 < v9 )
  {
    v13 = *a2;
    v14 = 2 * v10;
    v15 = *v12;
    ++v10;
    v16 = v12[2];
    v17 = 2LL * v5;
    v18 = *(_DWORD *)&v11[4 * v14 + 4];
    result = *(unsigned int *)&v11[4 * v14];
    *(_DWORD *)(v13 + 8 * v17) = result;
    *(_DWORD *)(v13 + 8 * v17 + 4) = v15;
    *(_DWORD *)(v13 + 8 * v17 + 8) = v18;
    *(_DWORD *)(v13 + 8 * v17 + 12) = v16;
    if ( v10 >= (int)v8 )
    {
      v19 = v12 + 2;
      while ( 1 )
      {
        v20 = v19;
        v11 = (char *)v19 + (int)v19[1];
        v21 = (int)v19[3] - (_QWORD)v11;
        v12 = v19;
        v19 += 2;
        v8 = ((__int64)v19 + v21) >> 3;
        if ( (_DWORD)v8 )
          break;
        if ( (unsigned __int64)v20 >= v9 )
          goto LABEL_8;
      }
      v10 = 0;
    }
LABEL_8:
    ++v5;
  }
  return result;
}
