/*
 * XREFs of ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18009E960
 * Callers:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180188F34 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18018BB40 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18009DC10 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x180105B10 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryBitmap::IsRegionValid(_DWORD *a1, int *a2, __int64 a3)
{
  _DWORD *v3; // rdi
  int v6; // r8d
  int v7; // eax
  int v8; // r9d
  int v9; // r10d
  int v10; // edx
  const struct FastRegion::Internal::CRgnData *v11; // rdx
  char v12; // bl
  unsigned __int8 v13; // bl
  HANDLE ProcessHeap; // rax
  __int64 v16; // rax
  int v17; // r10d
  int v18; // r9d
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  int v23; // eax
  int *v24; // [rsp+20h] [rbp-60h] BYREF
  _DWORD Mem[3]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v26[2]; // [rsp+34h] [rbp-4Ch] BYREF
  _DWORD v27[13]; // [rsp+3Ch] [rbp-44h] BYREF
  _BYTE vars0[24]; // [rsp+80h] [rbp+0h] BYREF

  v3 = Mem;
  v24 = Mem;
  if ( a2 )
  {
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    v9 = a2[3];
  }
  else
  {
    v6 = *a1;
    v7 = a1[1];
    v8 = a1[2];
    v9 = a1[3];
  }
  if ( v6 >= v8 || v7 >= v9 )
  {
    v10 = 0;
  }
  else
  {
    v26[0] = v7;
    Mem[1] = v6;
    Mem[2] = v8;
    v27[2] = v6;
    v26[1] = (unsigned int)vars0 - 60 - (unsigned int)v26;
    v10 = 2;
    v27[3] = v8;
    v27[0] = v9;
    v27[1] = (unsigned int)vars0 - 60 - (unsigned int)v27 + 8;
  }
  Mem[0] = v10;
  if ( v10 && (v11 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)a1 + 2), *(_DWORD *)v11) )
    v12 = FastRegion::Internal::CRgnData::Intersects((const struct FastRegion::Internal::CRgnData *)Mem, v11);
  else
    v12 = 0;
  v13 = v12 ^ 1;
  if ( a3 )
  {
    if ( v13 )
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = 0LL;
      return v13;
    }
    CRegion::Intersect((CRegion *)&v24, (const struct CRegion *)(a1 + 4));
    v3 = v24;
    v16 = *v24;
    if ( (_DWORD)v16 )
    {
      v17 = v24[2 * v16 + 1];
      v18 = -1;
      v19 = -1;
      v20 = v24[3];
      v21 = v24[2];
      if ( v24[1] >= 0 )
        v19 = v24[1];
      *(_DWORD *)a3 = v19;
      v22 = -1;
      if ( v20 >= 0 )
        v22 = v20;
      *(_DWORD *)(a3 + 4) = v22;
      v23 = -1;
      if ( v21 >= 0 )
        v23 = v21;
      *(_DWORD *)(a3 + 8) = v23;
      if ( v17 >= 0 )
        v18 = v17;
      *(_DWORD *)(a3 + 12) = v18;
    }
  }
  if ( Mem != v3 && v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  return v13;
}
