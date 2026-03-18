/*
 * XREFs of ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180186BB4
 * Callers:
 *     ?GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180185D90 (-GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180189140 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801EABE0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x180100570 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x180186AD0 (-GetPixelFormatInfo@CBitmapLock@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x180186B38 (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801872D0 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1801875C8 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180187A60 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x180188B00 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180188BB0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1801EAFDC (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEA.c)
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020D674 (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802E5E94 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CopyTexture2D(
        __int64 a1,
        struct ID3D11Texture2D *a2,
        int a3,
        struct PixelFormatInfo *a4,
        int *a5,
        CSystemMemoryBitmap *a6,
        INT a7,
        INT a8)
{
  CBitmap *v10; // rbx
  INT v12; // edx
  INT v13; // ecx
  unsigned __int8 PixelFormatSize; // al
  struct IWarpPalLockSubresourceExtension *v15; // rcx
  int v16; // r15d
  __int64 v17; // rdi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  struct PixelFormatInfo *v24; // rsi
  int v25; // eax
  __int64 (__fastcall *v26)(CSystemMemoryBitmap *__hidden, const struct WICRect *, enum WICBitmapLockFlags, struct IBitmapLock **); // rbx
  int v27; // eax
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  __int64 (__fastcall *v29)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // rax
  int DataPointer; // eax
  __int64 (__fastcall *v31)(CBitmapLock *__hidden, unsigned int *); // rax
  int Stride; // eax
  __int64 (__fastcall *v33)(CBitmap *__hidden, const struct WICRect *, unsigned int, unsigned int, unsigned __int8 *); // rax
  int v34; // eax
  unsigned int v35; // edi
  int v37; // r9d
  int v38; // eax
  struct IUnknown *v39; // rbx
  unsigned int v40; // edx
  int v41; // eax
  int v42; // eax
  struct IBitmapSource *v43; // rdx
  unsigned int v44; // [rsp+20h] [rbp-E0h]
  CBitmap *v45; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  struct IBitmapSource *v48; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapLock *v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v51; // [rsp+78h] [rbp-88h] BYREF
  int v52; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v53; // [rsp+88h] [rbp-78h] BYREF
  struct PixelFormatInfo *v54; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v55[2]; // [rsp+98h] [rbp-68h] BYREF
  struct WICRect v56; // [rsp+A8h] [rbp-58h] BYREF
  struct WICRect v57; // [rsp+B8h] [rbp-48h] BYREF
  enum DXGI_FORMAT v58[4]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v59[6]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v60[4]; // [rsp+F0h] [rbp-10h] BYREF
  enum DXGI_FORMAT v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+10Ch] [rbp+Ch]
  __int64 v63; // [rsp+114h] [rbp+14h]
  const char *v64; // [rsp+120h] [rbp+20h]
  unsigned int v65; // [rsp+128h] [rbp+28h]
  int v66; // [rsp+12Ch] [rbp+2Ch]

  v56.X = a7;
  v10 = 0LL;
  v12 = a5[2] - *a5;
  v13 = a5[3] - a5[1];
  v56.Y = a8;
  v64 = "DWM Temp Readback (bitmap1)";
  v54 = a4;
  LODWORD(v48) = a3;
  v45 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  *(_QWORD *)&v57.X = 0LL;
  v57.Width = v12;
  v57.Height = v13;
  v56.Width = v12;
  v56.Height = v13;
  v65 = 27;
  v66 = HIDWORD(v55[1]);
  LOBYTE(v52) = 0;
  if ( *(_DWORD *)(a1 + 1112) )
  {
    v19 = -2003304307;
    v44 = 2658;
LABEL_35:
    v37 = v19;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, v37, v44, 0LL);
    goto LABEL_27;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a2->lpVtbl->GetDesc)(a2, v60);
  if ( *(_DWORD *)a4 != v61 )
  {
    v19 = -2147024809;
    v44 = 2663;
    goto LABEL_35;
  }
  PixelFormatSize = GetPixelFormatSize(v61);
  v15 = *(struct IWarpPalLockSubresourceExtension **)(a1 + 600);
  v16 = PixelFormatSize >> 3;
  if ( !v15 )
  {
    v17 = *(_QWORD *)(a1 + 552);
    v60[0] = a5[2] - *a5;
    v60[1] = a5[3] - a5[1];
    v62 = 3LL;
    v63 = 0x20000LL;
    v51 = *(struct IUnknown **)(*(_QWORD *)v17 + 40LL);
    v18 = ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *))v51)(v17, v60, 0LL, &v50);
    v19 = v18;
    if ( v18 < 0 )
    {
      v44 = 2697;
    }
    else
    {
      (*(void (__fastcall **)(__int64, const GUID *, _QWORD, const char *))(*(_QWORD *)v50 + 40LL))(
        v50,
        &WKPDID_D3DDebugObjectName,
        v65,
        v64);
      v20 = *a5;
      v21 = *(__int64 **)(a1 + 560);
      v59[2] = 0;
      v59[0] = v20;
      v59[1] = a5[1];
      v59[3] = a5[2];
      v59[4] = a5[3];
      v59[5] = 1;
      v22 = *v21;
      v52 = 1;
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _DWORD, _DWORD, struct ID3D11Texture2D *, _DWORD, _DWORD *))(v22 + 368))(
        v21,
        v50,
        0LL,
        0LL,
        0,
        0,
        a2,
        (_DWORD)v48,
        v59);
      v23 = *(_QWORD *)(a1 + 560);
      *(_OWORD *)v55 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(*(_QWORD *)v23 + 112LL))(
              v23,
              v50,
              0LL,
              1LL,
              0,
              v55);
      v19 = v18;
      if ( v18 >= 0 )
      {
        v24 = v54;
        v25 = HrCreateBitmapFromMemoryEx(
                a5[2] - *a5,
                a5[3] - a5[1],
                v54,
                (unsigned int)v55[1],
                v16 * (a5[2] - *a5) + LODWORD(v55[1]) * (a5[3] - a5[1]),
                v55[0],
                0LL,
                &v45);
        v19 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, v25, 0xAB2u, 0LL);
          v10 = v45;
LABEL_26:
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 560) + 120LL))(
            *(_QWORD *)(a1 + 560),
            v50,
            0LL);
          goto LABEL_27;
        }
LABEL_7:
        v26 = *(__int64 (__fastcall **)(CSystemMemoryBitmap *__hidden, const struct WICRect *, enum WICBitmapLockFlags, struct IBitmapLock **))(*(_QWORD *)a6 + 24LL);
        if ( v49 )
          (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v49 + 16LL))(v49);
        if ( v26 == CSystemMemoryBitmap::Lock )
          v27 = CSystemMemoryBitmap::Lock(a6, &v56, WICBitmapLockWrite, &v49);
        else
          v27 = v26(a6, &v56, WICBitmapLockWrite, &v49);
        v19 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, v27, 0xAD2u, 0LL);
        }
        else
        {
          v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 24LL);
          if ( v28 == CBitmapLock::GetPixelFormatInfo )
            CBitmapLock::GetPixelFormatInfo((__int64)v49, (__int64)v58);
          else
            v28((__int64)v49, (__int64)v58);
          if ( !IsEqualPixelFormatInfo(v24, v58) )
          {
            v48 = 0LL;
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v48);
            v10 = v45;
            v42 = CFormatConverter::HrConvertBitmap(v45, (const struct PixelFormatInfo *)v58, &v48);
            v19 = v42;
            if ( v42 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, v42, 0xADDu, 0LL);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v48);
              goto LABEL_25;
            }
            v43 = v48;
            v48 = 0LL;
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
              (__int64 *)&v45,
              (__int64)v43);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v48);
          }
          v53 = 0LL;
          v46 = 0;
          v29 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(*(_QWORD *)v49 + 48LL);
          if ( v29 == CBitmapLock::GetDataPointer )
            DataPointer = CBitmapLock::GetDataPointer(v49, &v46, &v53);
          else
            DataPointer = v29(v49, &v46, &v53);
          v19 = DataPointer;
          if ( DataPointer < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, DataPointer, 0xAE4u, 0LL);
          }
          else
          {
            v47 = 0;
            v31 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)v49 + 40LL);
            if ( v31 == CBitmapLock::GetStride )
              Stride = CBitmapLock::GetStride(v49, &v47);
            else
              Stride = v31(v49, &v47);
            v19 = Stride;
            if ( Stride >= 0 )
            {
              v10 = v45;
              v33 = *(__int64 (__fastcall **)(CBitmap *__hidden, const struct WICRect *, unsigned int, unsigned int, unsigned __int8 *))(*(_QWORD *)v45 + 48LL);
              if ( v33 == CBitmap::CopyPixels )
                v34 = CBitmap::CopyPixels(v45, &v57, v47, v46, v53);
              else
                v34 = v33(v45, &v57, v47, v46, v53);
              v19 = v34;
              if ( v34 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, v34, 0xAF6u, 0LL);
LABEL_25:
              if ( !(_BYTE)v52 )
                goto LABEL_27;
              goto LABEL_26;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, Stride, 0xAE7u, 0LL);
          }
        }
        v10 = v45;
        goto LABEL_25;
      }
      v44 = 2724;
    }
    v37 = v18;
    goto LABEL_36;
  }
  v51 = 0LL;
  v38 = CWarpLockSubresource::Create(v15, a2, (unsigned int)v48, (struct CWarpLockSubresource **)&v51);
  v19 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, v38, 0xABAu, 0LL);
    if ( v51 )
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v51);
  }
  else
  {
    v39 = v51;
    v40 = a5[3] - a5[1];
    v24 = v54;
    v41 = HrCreateBitmapFromMemoryEx(
            a5[2] - *a5,
            v40,
            v54,
            (unsigned int)v51[6].lpVtbl,
            v16 * (a5[2] - *a5) + LODWORD(v51[6].lpVtbl) * v40,
            (unsigned __int8 *)v51[5].lpVtbl + LODWORD(v51[6].lpVtbl) * a5[1] + (unsigned int)(v16 * *a5),
            v51,
            &v45);
    v19 = v41;
    if ( v41 >= 0 )
    {
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CGlobalDrawingContext *)v39);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ED30, 0xAu, v41, 0xACCu, 0LL);
    wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>(&v51);
    v10 = v45;
  }
LABEL_27:
  v35 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v19, 0);
  if ( v49 )
    (*(void (__fastcall **)(struct IBitmapLock *))(*(_QWORD *)v49 + 16LL))(v49);
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  if ( v10 )
    (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v10 + 16LL))(v10);
  return v35;
}
