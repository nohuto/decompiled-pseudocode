/*
 * XREFs of ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180255A30
 * Callers:
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802B66B8 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1802B6820 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x18018D8B4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmap::HrInitDataFromIBitmapSource(CBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  unsigned int *v3; // r15
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int8 PixelFormatSize; // al
  int v11; // r9d
  int v12; // edx
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // rax
  int v17; // eax
  float v18; // xmm1_4
  unsigned int v20; // [rsp+20h] [rbp-58h]
  unsigned int v21[2]; // [rsp+30h] [rbp-48h] BYREF
  double v22[2]; // [rsp+38h] [rbp-40h] BYREF

  v3 = (unsigned int *)((char *)this + 88);
  v7 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 32LL))(
         a2,
         (char *)this + 88,
         (char *)this + 92);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x23Bu, 0LL);
  if ( a3 )
  {
    *v3 = a3->Width;
    *((_DWORD *)this + 23) = a3->Height;
  }
  v9 = (*(__int64 (__fastcall **)(struct IBitmapSource *, double *))(*(_QWORD *)a2 + 24LL))(a2, v22);
  *((_QWORD *)this + 13) = *(_QWORD *)v9;
  *((_DWORD *)this + 28) = *(_DWORD *)(v9 + 8);
  if ( (v8 & 0x80000000) == 0 )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 26));
    if ( !PixelFormatSize )
    {
      v8 = -2003292409;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292409, 0x251u, 0LL);
      return v8;
    }
    if ( *v3 >= 0x7FFFFFFFu / PixelFormatSize )
    {
      v11 = -2147024362;
      v8 = -2147024362;
      v20 = 597;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v20, 0LL);
      return v8;
    }
    v12 = *((_DWORD *)this + 26);
    v13 = *((unsigned int *)this + 22);
    v21[0] = 0;
    v14 = HrCalcDWordAlignedScanlineStride(v13, v12, v21);
    v8 = v14;
    if ( v14 < 0 )
    {
      v11 = v14;
      v20 = 610;
      goto LABEL_12;
    }
    if ( *((_DWORD *)this + 23) && v21[0] >= v15 / *((_DWORD *)this + 23) )
    {
      v11 = -2147024362;
      v8 = -2147024362;
      v20 = 616;
      goto LABEL_12;
    }
    v16 = *(_QWORD *)a2;
    *(double *)v21 = 0.0;
    v22[0] = 0.0;
    v17 = (*(__int64 (__fastcall **)(struct IBitmapSource *, unsigned int *, double *))(v16 + 40))(a2, v21, v22);
    v8 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x272u, 0LL);
    v18 = v22[0];
    *((float *)this + 24) = *(double *)v21;
    *((float *)this + 25) = v18;
  }
  return v8;
}
