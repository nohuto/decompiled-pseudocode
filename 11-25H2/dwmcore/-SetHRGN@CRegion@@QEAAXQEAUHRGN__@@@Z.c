/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800615B8
 * Callers:
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z @ 0x1800614F4 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180068FBC (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180105228 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800630A0 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN hrgn)
{
  void *v4; // rdi
  DWORD RegionData; // eax
  DWORD v6; // esi
  void *v7; // rsi
  signed int LastError; // eax
  signed int v9; // ebx
  unsigned int v10; // eax
  int v11; // ebp
  HANDLE v12; // rax
  HANDLE ProcessHeap; // rax
  signed int v14; // eax
  _DWORD *v15; // rdx
  LPVOID lpMem; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v17[18]; // [rsp+38h] [rbp-70h] BYREF

  **(_DWORD **)this = 0;
  if ( !hrgn )
    return;
  if ( hrgn == (HRGN)1 )
  {
LABEL_27:
    v15 = *(_DWORD **)this;
    *v15 = 2;
    v15[1] = 0x80000000;
    v15[2] = 0x7FFFFFFF;
    v15[3] = 0x80000000;
    v15[4] = 16;
    v15[7] = 0x80000000;
    v15[8] = 0x7FFFFFFF;
    v15[5] = 0x7FFFFFFF;
    v15[6] = 16;
    return;
  }
  lpMem = v17;
  v4 = 0LL;
  v17[0] = 0;
  SetLastError(0);
  RegionData = GetRegionData(hrgn, 0, 0LL);
  v6 = RegionData;
  if ( !RegionData )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      v9 = -2003304445;
    v10 = 130;
    goto LABEL_12;
  }
  v4 = MIDL_user_allocate(RegionData);
  if ( !v4 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x85u, 0LL);
    v7 = 0LL;
    v11 = -2147024882;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1Eu, 0LL);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
    goto LABEL_20;
  }
  SetLastError(0);
  if ( !GetRegionData(hrgn, v6, (LPRGNDATA)v4) )
  {
    v14 = GetLastError();
    v9 = v14;
    if ( v14 > 0 )
      v9 = (unsigned __int16)v14 | 0x80070000;
    if ( v9 >= 0 )
      v9 = -2003304445;
    v10 = 136;
LABEL_12:
    v7 = v4;
    v11 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v10, 0LL);
    if ( v4 )
    {
      operator delete(v4);
      v7 = 0LL;
    }
    goto LABEL_14;
  }
  v7 = v4;
  v11 = CRegion::TryAddRectangles(this, (const struct tagRECT *)v4 + 2, *((_DWORD *)v4 + 2));
  if ( v17 != lpMem )
  {
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    v17[0] = 0;
    lpMem = v17;
  }
LABEL_20:
  if ( v7 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, v7);
  }
  if ( v11 < 0 )
    goto LABEL_27;
}
