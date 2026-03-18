/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801EABE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801867E0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180186BB4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180188434 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1801884D4 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180189830 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1801EAEE0 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, int *a2, CBitmapLock **a3)
{
  unsigned int v6; // edx
  _DWORD *v7; // rcx
  unsigned int v8; // r8d
  unsigned __int8 PixelFormatSize; // al
  unsigned int v10; // r13d
  unsigned int v11; // edx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  CBitmapLock *v15; // rax
  CBitmapLock *v16; // rax
  CBitmapLock *v17; // rbx
  enum DXGI_FORMAT *v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  enum DXGI_FORMAT *v22; // rax
  int v23; // eax
  __int64 v24; // rdi
  CSystemMemoryBitmap *v25; // rbx
  struct PixelFormatInfo *v26; // rax
  int v27; // eax
  int v28; // eax
  struct IBitmapDest *v29; // [rsp+60h] [rbp-29h] BYREF
  void *v30; // [rsp+68h] [rbp-21h] BYREF
  CBitmapLock *v31; // [rsp+70h] [rbp-19h] BYREF
  struct IUnknown *v32; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int8 *v33; // [rsp+80h] [rbp-9h] BYREF
  __int64 v34; // [rsp+88h] [rbp-1h]
  _BYTE v35[16]; // [rsp+90h] [rbp+7h] BYREF

  v32 = 0LL;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) && (a2[2] > v6 || a2[3] > v8)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v20 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x113u, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 88) & 0x400000) != 0 )
    {
      v20 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024891, 0x119u, 0LL);
      return v20;
    }
    v33 = 0LL;
    LODWORD(v30) = 0;
    LODWORD(v29) = 0;
    if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 88), &v33, (unsigned int *)&v30, (unsigned int *)&v29, &v32) )
    {
      PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
      v10 = (unsigned int)v30;
      v11 = PixelFormatSize;
      v12 = a2[1] * (_DWORD)v30;
      v13 = *a2 * (v11 >> 3);
      v31 = 0LL;
      v14 = (unsigned int)(v13 + v12);
      LODWORD(v30) = v14;
      v34 = v14;
      v15 = (CBitmapLock *)MIDL_user_allocate(0x80uLL);
      if ( v15 )
        v16 = CBitmapLock::CBitmapLock(v15);
      else
        v16 = 0LL;
      wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)&v31, (__int64)v16);
      v17 = v31;
      if ( v31 )
      {
        v18 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 8) + 24LL))(
                                    a1 - 8,
                                    v35);
        v19 = CBitmapLock::HrInit(
                v17,
                (struct IBitmapUnlock *)((a1 + 8) & -(__int64)(a1 != 88)),
                a2[2] - *a2,
                a2[3] - a2[1],
                v18,
                v10,
                (int)v29 - (int)v30,
                &v33[v34],
                WICBitmapLockRead,
                0,
                v32);
        v20 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x139u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v31);
        }
        else
        {
          *a3 = v17;
        }
      }
      else
      {
        v20 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x12Du, 0LL);
      }
    }
    else
    {
      v29 = 0LL;
      v22 = (enum DXGI_FORMAT *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 8) + 24LL))(a1 - 8, v35);
      v23 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], v22, &v29);
      v20 = v23;
      if ( v23 >= 0 )
      {
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 88) + 40LL))(a1 - 88);
        v25 = v29;
        v26 = (struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 8) + 24LL))(
                                          a1 - 8,
                                          v35);
        v27 = CD3DDevice::CopyTexture2D(
                v24,
                *(struct ID3D11Texture2D **)(a1 + 16),
                *(_DWORD *)(a1 + 144),
                v26,
                a2,
                v25,
                0,
                0);
        v20 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x14Bu, 0LL);
        }
        else
        {
          v28 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, CBitmapLock **))(*(_QWORD *)v29 + 24LL))(
                  v29,
                  0LL,
                  1LL,
                  a3);
          v20 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x150u, 0LL);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x144u, 0LL);
        if ( v29 )
          (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
  }
  if ( v32 )
    ((void (__fastcall *)(struct IUnknown *))v32->lpVtbl->Release)(v32);
  return v20;
}
