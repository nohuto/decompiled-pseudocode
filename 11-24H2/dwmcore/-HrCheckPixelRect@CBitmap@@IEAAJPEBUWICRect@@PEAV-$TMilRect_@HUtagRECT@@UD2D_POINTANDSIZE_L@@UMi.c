/*
 * XREFs of ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180024CB4
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180024010 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800247F0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmap::HrCheckPixelRect(__int64 a1, int *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // r10d
  int v5; // r9d
  int v7; // edx
  int v8; // r9d
  int v10; // eax
  signed int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // r11d
  signed int v16; // esi
  signed int v17; // edi

  v3 = *(_DWORD *)(a1 + 88);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 92);
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 8) = v3;
  *(_DWORD *)(a3 + 12) = v5;
  if ( !a2 )
    return v4;
  v7 = *a2;
  v8 = a2[1];
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x173u, 0LL);
    return (unsigned int)-2147024362;
  }
  v10 = a2[2];
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x174u, 0LL);
    return (unsigned int)-2147024362;
  }
  v11 = v10 + v7;
  if ( v10 + v7 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x175u, 0LL);
    return (unsigned int)-2147024362;
  }
  if ( (unsigned int)v11 > 0x7FFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x176u, 0LL);
    return (unsigned int)-2147024362;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x178u, 0LL);
    return (unsigned int)-2147024362;
  }
  v12 = a2[3];
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x179u, 0LL);
    return (unsigned int)-2147024362;
  }
  v13 = v8 + v12;
  if ( v13 < v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x17Au, 0LL);
    return (unsigned int)-2147024362;
  }
  if ( v13 > 0x7FFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x17Bu, 0LL);
    return (unsigned int)-2147024362;
  }
  v14 = 0;
  if ( v7 > 0 )
  {
    *(_DWORD *)a3 = v7;
    v14 = v7;
  }
  v15 = 0;
  if ( v8 > 0 )
  {
    *(_DWORD *)(a3 + 4) = v8;
    v15 = v8;
  }
  v16 = *(_DWORD *)(a3 + 8);
  if ( v11 < v16 )
  {
    *(_DWORD *)(a3 + 8) = v11;
    v16 = v11;
  }
  v17 = *(_DWORD *)(a3 + 12);
  if ( (int)v13 < v17 )
  {
    *(_DWORD *)(a3 + 12) = v13;
    v17 = v13;
  }
  if ( v16 <= v14 || v17 <= v15 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
    v14 = 0;
    *(_QWORD *)a3 = 0LL;
    v15 = 0;
  }
  if ( v8 == v15 && v11 > v7 && (int)v13 > v8 && v7 == v14 && v11 == *(_DWORD *)(a3 + 8) && v13 == *(_DWORD *)(a3 + 12) )
    return v4;
  return 2147942487LL;
}
