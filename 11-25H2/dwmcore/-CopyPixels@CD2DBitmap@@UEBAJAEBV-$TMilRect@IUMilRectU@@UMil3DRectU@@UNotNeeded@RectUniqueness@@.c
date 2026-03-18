/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180189140
 * Callers:
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180188FCC (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180186BB4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1801875C8 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x180188C98 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180189830 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1801EAEE0 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(__int64 a1, int *a2, unsigned int a3, unsigned int a4, unsigned __int8 *a5)
{
  unsigned int *v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  void *v13; // r9
  const struct PixelFormatInfo *v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  struct IBitmapSource *v17; // rbx
  int v18; // eax
  __int64 v19; // rsi
  CSystemMemoryBitmap *v20; // rdi
  struct PixelFormatInfo *v21; // rax
  int v22; // eax
  __int64 v23; // rax
  struct IBitmapSource *v24; // rcx
  unsigned __int8 PixelFormatSize; // al
  int v27; // r10d
  int v28; // eax
  struct IBitmapSource *v29; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v30[2]; // [rsp+58h] [rbp-29h] BYREF
  struct IUnknown *v31; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int8 *v32[2]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 *v33; // [rsp+78h] [rbp-9h] BYREF

  v33 = a5;
  v9 = (unsigned int *)(a2 + 2);
  v31 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2)
    && (*v9 > v10 || a2[3] > v12)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v11) )
  {
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xC3u, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 88) & 0x400000) != 0 )
    {
      v16 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024891, 0xC9u, v13);
      return v16;
    }
    v32[0] = (unsigned __int8 *)v13;
    LODWORD(v29) = (_DWORD)v13;
    v30[0] = (unsigned int)v13;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 88), v32, (unsigned int *)&v29, v30, &v31) )
    {
      PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
      v27 = (_DWORD)v29 * a2[1] + *a2 * (PixelFormatSize >> 3);
      v28 = CBitmap::CopyPixelsHelper(
              *(_DWORD *)(a1 + 72),
              *v9 - *a2,
              a2[3] - a2[1],
              (unsigned int)v29,
              v30[0] - v27,
              &v32[0][v27],
              a3,
              a4,
              a5);
      v16 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0xE7u, 0LL);
      goto LABEL_14;
    }
    v29 = 0LL;
    v14 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)(a1 - 8)
                                                                                                 + 24LL))(
                                            a1 - 8,
                                            v32);
    v15 = HrCreateBitmapFromMemoryEx(*v9 - *a2, a2[3] - a2[1], v14, a3, a4, v33, 0LL, &v29);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xF3u, 0LL);
      v24 = v29;
      if ( v29 )
      {
        v23 = *(_QWORD *)v29;
LABEL_13:
        (*(void (__fastcall **)(struct IBitmapSource *))(v23 + 16))(v24);
      }
    }
    else
    {
      v17 = v29;
      *(_QWORD *)v30 = 0LL;
      v18 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, unsigned int *))v29)(
              v29,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              v30);
      v16 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xF6u, 0LL);
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 88) + 40LL))(a1 - 88);
        v20 = *(CSystemMemoryBitmap **)v30;
        v21 = (struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)(a1 - 8)
                                                                                               + 24LL))(
                                          a1 - 8,
                                          &v33);
        v22 = CD3DDevice::CopyTexture2D(
                v19,
                *(struct ID3D11Texture2D **)(a1 + 16),
                *(_DWORD *)(a1 + 144),
                v21,
                a2,
                v20,
                0,
                0);
        v16 = v22;
        if ( v22 >= 0 )
        {
          if ( *(_QWORD *)v30 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v30 + 16LL))(*(_QWORD *)v30);
          v23 = *(_QWORD *)v17;
          v24 = v17;
          goto LABEL_13;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xFDu, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v30);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
    }
  }
LABEL_14:
  if ( v31 )
    ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
  return v16;
}
