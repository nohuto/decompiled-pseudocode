/*
 * XREFs of ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180061030
 * Callers:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180061260 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180065B10 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x180099E60 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

__int64 __fastcall FastRegion::CRegion::SaveResult(
        FastRegion::CRegion *this,
        struct FastRegion::Internal::CWorkBuffer *a2)
{
  int *v2; // rdi
  _DWORD *v4; // rbx
  int v5; // eax
  int *v6; // r15
  int v7; // ebp
  int v8; // edx
  int v9; // r10d
  __int64 v10; // r11
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 result; // rax
  HANDLE ProcessHeap; // rax
  int v20; // ebx

  v2 = (int *)*((_QWORD *)a2 + 1);
  if ( !*v2 )
  {
    **(_DWORD **)this = 0;
    return 0LL;
  }
  if ( (int *)((char *)a2 + 16) == v2 )
  {
    v4 = *(_DWORD **)this;
    v5 = 60;
    v6 = (int *)((char *)this + 8);
    v7 = v2[2 * *v2 + 2] + 8 * *v2 - 12 - v2[4] + 8 * (*v2 - 1) + 24;
    if ( (FastRegion::CRegion *)((char *)this + 8) != *(FastRegion::CRegion **)this )
      v5 = *v6;
    if ( v5 < v7 )
    {
      ProcessHeap = GetProcessHeap();
      v4 = HeapAlloc(ProcessHeap, 0, v7);
      if ( !v4 )
        return 2147942414LL;
      FastRegion::CRegion::FreeMemory(this);
      *(_QWORD *)this = v4;
      *v6 = v7;
    }
    v8 = *v2;
    v9 = 0;
    *v4 = *v2;
    v4[1] = v2[1];
    v4[2] = v2[2];
    v10 = (__int64)v2 + v2[4] + 12;
    v11 = &v4[2 * v8 + 3];
    if ( v8 > 0 )
    {
      v12 = v4 + 3;
      do
      {
        *v12 = *(_DWORD *)((char *)v12 + (char *)v2 - (char *)v4);
        v12 += 2;
        v13 = v9++;
        v4[2 * v13 + 4] = (_DWORD)v2
                        + 8 * v13
                        + 4 * (((__int64)v11 - v10) >> 2)
                        + v2[2 * v13 + 4]
                        - ((_DWORD)v4
                         + 8 * v13);
      }
      while ( v9 < *v4 );
    }
    v14 = (__int64)&v2[2 * *v2 + 1];
    v15 = (unsigned __int64)((int)v14 + *(_DWORD *)(v14 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
    v16 = (int)v15;
    if ( (int)v15 > 0 )
    {
      v17 = v10 - (_QWORD)v11;
      do
      {
        *v11 = *(_DWORD *)((char *)v11 + v17);
        ++v11;
        --v16;
      }
      while ( v16 );
    }
    return 0LL;
  }
  else
  {
    v20 = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
    *((_QWORD *)a2 + 1) = (char *)a2 + 16;
    FastRegion::CRegion::FreeMemory(this);
    *((_DWORD *)this + 2) = v20;
    result = 0LL;
    *(_QWORD *)this = v2;
  }
  return result;
}
