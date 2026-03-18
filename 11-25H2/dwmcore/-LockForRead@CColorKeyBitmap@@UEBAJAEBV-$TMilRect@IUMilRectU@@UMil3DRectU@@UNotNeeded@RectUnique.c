/*
 * XREFs of ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180186500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1801862C4 (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801867E0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180189830 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorKeyBitmap::LockForRead(CColorKeyBitmap *this, _DWORD *a2, __int64 a3)
{
  _DWORD *v6; // rsi
  __int64 v7; // rax
  const struct PixelFormatInfo *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  struct IBitmapDest *v22; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int8 *v25; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-30h] BYREF
  struct WICRect v27; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v28[16]; // [rsp+68h] [rbp-18h] BYREF

  (*(void (__fastcall **)(CColorKeyBitmap *, _DWORD *))(*(_QWORD *)this + 32LL))(this, v26);
  v6 = a2 + 2;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2)
    && (*v6 > v26[0] || a2[3] > v26[1]) )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xB9u, 0LL);
    return v10;
  }
  v7 = *(_QWORD *)this;
  v22 = 0LL;
  v8 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(CColorKeyBitmap *, _BYTE *))(v7 + 24))(this, v28);
  v9 = HrCreateDestBitmap(*v6 - *a2, a2[3] - a2[1], v8, &v22);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x96u, 0LL);
    goto LABEL_27;
  }
  v27.Width = *v6 - *a2;
  v27.Height = a2[3] - a2[1];
  *(_QWORD *)&v27.X = 0LL;
  v11 = *(_QWORD *)v22;
  v21 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IBitmapDest *, struct WICRect *, __int64, __int64 *))(v11 + 24))(
          v22,
          &v27,
          2LL,
          &v21);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x9Cu, 0LL);
  }
  else
  {
    v23 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 40LL))(v21, &v23);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x9Fu, 0LL);
    }
    else
    {
      v25 = 0LL;
      v24 = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v21 + 48LL))(
              v21,
              &v24,
              &v25);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xA3u, 0LL);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 4)
                                                                                             + 64LL))(
                *((_QWORD *)this + 4),
                a2,
                v23,
                v24,
                v25);
        v10 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xA9u, 0LL);
        }
        else
        {
          v17 = CColorKeyBitmap::ApplyColorKeyToBuffer(this, &v27, v23, v16, v25);
          v10 = v17;
          if ( v17 >= 0 )
          {
            v18 = v21;
            v21 = 0LL;
            if ( v18 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            v19 = (*(__int64 (__fastcall **)(struct IBitmapDest *, struct WICRect *, __int64, __int64))(*(_QWORD *)v22 + 24LL))(
                    v22,
                    &v27,
                    1LL,
                    a3);
            v10 = v19;
            if ( v19 >= 0 )
              goto LABEL_13;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xB5u, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
LABEL_27:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
            return v10;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xAFu, 0LL);
        }
      }
    }
  }
LABEL_13:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v22 + 16LL))(v22);
  return v10;
}
