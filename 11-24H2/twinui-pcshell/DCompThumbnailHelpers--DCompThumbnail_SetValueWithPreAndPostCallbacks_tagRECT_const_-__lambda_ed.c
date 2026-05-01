/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180547250
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x1805471A4 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802E0970 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_____lambda_ed8ffcce05179564df35e7d067b53c30__&__lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb__&_IDCompBatchAnimationCallback___&_ @ 0x180547494 (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_ed8ffcce0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 v8; // rsi
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // rbx
  int v12; // edi
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  int v15; // [rsp+28h] [rbp-18h]
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v8 = (__int64)a6;
  v14 = *a6;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v14);
  v9 = *(_DWORD *)(v8 + 8);
  v17 = 0LL;
  v15 = v9;
  v10 = *a5;
  a6 = a7;
  v16 = v10;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_____lambda_ed8ffcce05179564df35e7d067b53c30_____lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb____IDCompBatchAnimationCallback_____(
    &a5,
    &v16,
    &v14,
    &a6);
  v11 = (__int64)a5;
  if ( a5 )
    v12 = (**(__int64 (__fastcall ***)(__int128 *, GUID *, __int64 *))a5)(
            a5,
            &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6,
            &v17);
  else
    v12 = -2147024882;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  if ( v12 >= 0 )
    v12 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v8);
  return (unsigned int)v12;
}
