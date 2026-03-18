/*
 * XREFs of ?GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180185D90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180186BB4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBits(
        CRenderTargetBitmap *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  char *v5; // rsi
  LONG left; // r8d
  unsigned int right; // ecx
  unsigned int bottom; // edx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 (__fastcall *v16)(char *, __int64, __int64 *); // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-41h]
  __int64 v24; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v25[2]; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v26[4]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v27[24]; // [rsp+60h] [rbp-1h] BYREF

  v24 = 0LL;
  v5 = (char *)this + 8;
  (*(void (__fastcall **)(char *, _DWORD *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, v25);
  left = a2->left;
  if ( a2->left < 0 || a2->top < 0 || (right = a2->right, right > v25[0]) || (bottom = a2->bottom, bottom > v25[1]) )
  {
    v15 = -2147024809;
    v23 = 346;
    goto LABEL_16;
  }
  v26[1] = a2->top;
  v13 = *(_QWORD *)this;
  v26[2] = right;
  v26[0] = left;
  v26[3] = bottom;
  v14 = (*(__int64 (__fastcall **)(CRenderTargetBitmap *))(v13 + 24))(this);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)this + 56LL))(this) )
    {
      v16 = *(__int64 (__fastcall **)(char *, __int64, __int64 *))(*(_QWORD *)v5 + 96LL);
      v17 = (*(__int64 (__fastcall **)(CRenderTargetBitmap *, _BYTE *))(*(_QWORD *)this + 88LL))(this, v27);
      v14 = v16(v5, v17, &v24);
      v15 = v14;
      if ( v14 < 0 )
      {
        v23 = 334;
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)this + 40LL))(this);
        v19 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v5 + 24LL))(v5, v27);
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 120LL))(v24);
        v14 = CD3DDevice::CopyTexture2D(v18, v20, 0LL, v19, v26, a3, a4, a5);
        v15 = v14;
        if ( v14 >= 0 )
          goto LABEL_9;
        v23 = 342;
      }
      goto LABEL_13;
    }
    v15 = -2147024891;
    v23 = 331;
LABEL_16:
    v22 = v15;
    goto LABEL_14;
  }
  v23 = 327;
LABEL_13:
  v22 = v14;
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, v23, 0LL);
LABEL_9:
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return v15;
}
