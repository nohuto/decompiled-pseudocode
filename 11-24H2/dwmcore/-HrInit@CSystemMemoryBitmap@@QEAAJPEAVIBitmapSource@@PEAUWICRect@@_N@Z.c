/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802B66B8
 * Callers:
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x1802B3754 (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE_U@@@Z @ 0x1802B39BC (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@AEBUD2D_SIZE.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802D9DD8 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x18018D8B4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1801967E0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180255A30 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  void *v16; // rcx
  _DWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h]

  if ( a2 )
  {
    v19 = 0LL;
    inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
    v6 = inited;
    if ( inited >= 0 )
    {
      v7 = (_DWORD *)((char *)this + 144);
      v8 = HrCalcDWordAlignedScanlineStride(
             *((unsigned int *)this + 22),
             *((_DWORD *)this + 26),
             (unsigned int *)this + 36);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = HrMalloc((unsigned int)*v7, *((unsigned int *)this + 23), (void **)this + 17);
        v6 = v9;
        if ( v9 >= 0 )
        {
          v10 = *((_DWORD *)this + 22);
          v11 = *((_DWORD *)this + 23);
          v12 = *((_QWORD *)this + 17);
          v13 = (unsigned int)*v7;
          v18[0] = 0;
          v18[1] = 0;
          v18[2] = v10;
          v14 = *(_QWORD *)a2;
          v18[3] = v11;
          v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, __int64))(v14 + 48))(
                  a2,
                  v18,
                  v13,
                  (unsigned int)(*v7 * v11),
                  v12);
          v6 = v15;
          if ( v15 >= 0 )
            return v6;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x19Cu, 0LL);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x189u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x181u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x17Au, 0LL);
    }
  }
  else
  {
    v6 = -2147024809;
  }
  v16 = (void *)*((_QWORD *)this + 17);
  if ( v16 )
  {
    operator delete(v16);
    *((_QWORD *)this + 17) = 0LL;
  }
  return v6;
}
