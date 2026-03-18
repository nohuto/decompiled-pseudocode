/*
 * XREFs of ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1801BA670
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18006522C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1802D2C70 (-GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::BeginIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  int v2; // eax
  char *v3; // r10
  char *v4; // rbx
  char *v5; // r8
  __int64 v6; // rcx
  char *v7; // r9
  char *v8; // rax
  __int64 v9; // rcx
  char *v10; // rcx
  __int64 v11; // r8

  *(_QWORD *)a2 = this;
  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v3 = (char *)this + 12;
    *((_QWORD *)a2 + 2) = (char *)this + 12;
    v4 = (char *)this + 8 * v2 + 4;
    *((_QWORD *)a2 + 1) = v4;
    v5 = (char *)this + *((int *)this + 4) + 12;
    *((_DWORD *)a2 + 8) = 0;
    *((_QWORD *)a2 + 3) = v5;
    v6 = ((__int64)this + *((int *)this + 6) - (_QWORD)v5 + 20) >> 3;
    *((_DWORD *)a2 + 9) = v6;
    if ( (int)v6 <= 0 )
    {
      *((_DWORD *)a2 + 8) = 1;
      while ( 1 )
      {
        v7 = v3 + 8;
        *((_QWORD *)a2 + 2) = v3 + 8;
        v8 = v3 + 16;
        v9 = *((int *)v3 + 3);
        v3 = v7;
        v10 = &v7[v9];
        *((_QWORD *)a2 + 3) = v10;
        v11 = (__int64)&v8[*((int *)v8 + 1) - (_QWORD)v10] >> 3;
        *((_DWORD *)a2 + 9) = v11;
        if ( (_DWORD)v11 )
          break;
        if ( v7 >= v4 )
          return;
      }
      *((_DWORD *)a2 + 8) = 0;
    }
  }
  else
  {
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
  }
}
