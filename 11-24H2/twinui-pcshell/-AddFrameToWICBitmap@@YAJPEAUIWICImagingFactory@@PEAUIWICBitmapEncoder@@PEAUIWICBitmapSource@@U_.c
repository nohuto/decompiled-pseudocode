/*
 * XREFs of ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1803F02FC
 * Callers:
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1803F08C4 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1801358F8 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x180135BC8 (-ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitm.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AddFrameToWICBitmap(
        struct IWICImagingFactory *a1,
        __int64 a2,
        struct IWICBitmapSource *a3,
        struct _GUID *a4)
{
  __int64 (__fastcall *v8)(__int64, __int64 *, __int64 *); // rbx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  enum WICBitmapDitherType v12; // r9d
  __int64 v14; // [rsp+30h] [rbp-71h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-65h] BYREF
  struct IWICBitmapSource *v17; // [rsp+40h] [rbp-61h] BYREF
  __int64 v18; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v19[3]; // [rsp+50h] [rbp-51h] BYREF
  __int128 v20; // [rsp+68h] [rbp-39h]
  struct _GUID v21; // [rsp+80h] [rbp-21h] BYREF
  struct _GUID v22; // [rsp+90h] [rbp-11h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-1h]
  __int128 v24; // [rsp+A8h] [rbp+7h] BYREF

  v14 = 0LL;
  v18 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v14);
  v9 = v8(a2, &v14, &v18);
  if ( v9 >= 0 )
  {
    v24 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 32LL))(a2, &v24);
    if ( v9 >= 0 )
    {
      v10 = v24 - *(_QWORD *)&GUID_ContainerFormatBmp.Data1;
      if ( (_QWORD)v24 == *(_QWORD *)&GUID_ContainerFormatBmp.Data1 )
        v10 = *((_QWORD *)&v24 + 1) - *(_QWORD *)GUID_ContainerFormatBmp.Data4;
      if ( v10 )
        goto LABEL_23;
      v22 = 0LL;
      v23 = 0LL;
      v19[0] = 0LL;
      v19[1] = 0LL;
      v20 = 0LL;
      LOWORD(v22.Data1) = 11;
      *(_WORD *)v22.Data4 = -1;
      v19[2] = L"EnableV5Header32bppBGRA";
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, struct _GUID *))(*(_QWORD *)v18 + 32LL))(
             v18,
             1LL,
             v19,
             &v22);
      if ( v9 >= 0 )
      {
LABEL_23:
        v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v18);
        if ( v9 >= 0 )
        {
          v15 = 0;
          v16 = 0;
          v9 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, unsigned int *, unsigned int *))a3->lpVtbl->GetSize)(
                 a3,
                 &v15,
                 &v16);
          if ( v9 >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, v15, v16);
            if ( v9 >= 0 )
            {
              v22 = *a4;
              v9 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v14 + 48LL))(v14, &v22);
              if ( v9 >= 0 )
              {
                v17 = 0LL;
                v11 = *(_QWORD *)&v22.Data1 - *(_QWORD *)&a4->Data1;
                if ( *(_QWORD *)&v22.Data1 == *(_QWORD *)&a4->Data1 )
                  v11 = *(_QWORD *)v22.Data4 - *(_QWORD *)a4->Data4;
                if ( v11 )
                {
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v17);
                  v21 = *a4;
                  v9 = ConvertWICBitmapPixelFormat(a1, a3, &v21, v12, &v17);
                  if ( v9 < 0 )
                  {
LABEL_19:
                    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v17);
                    goto LABEL_20;
                  }
                }
                else
                {
                  *(_QWORD *)&v21.Data1 = a3;
                  Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef((__int64 *)&v21);
                  *(_QWORD *)&v21.Data1 = v17;
                  v17 = a3;
                  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
                }
                v21.Data1 = 0;
                *(_DWORD *)&v21.Data2 = 0;
                *(_DWORD *)v21.Data4 = v15;
                *(_DWORD *)&v21.Data4[4] = v16;
                v9 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, struct _GUID *))(*(_QWORD *)v14 + 88LL))(
                       v14,
                       v17,
                       &v21);
                if ( v9 >= 0 )
                  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 96LL))(v14);
                goto LABEL_19;
              }
            }
          }
        }
      }
    }
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v14);
  return (unsigned int)v9;
}
