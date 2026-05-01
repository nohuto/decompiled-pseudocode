/*
 * XREFs of ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C130C
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806C27A0 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C7048 (--$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddAnimationOnlyOperationItem(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // esi
  __int64 v8; // rbx
  void *v9; // r8
  __int64 v10; // rdx
  __int64 *v11; // rdx
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  int v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int128 *v18; // [rsp+70h] [rbp-98h] BYREF
  __int128 *v19; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+80h] [rbp-88h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp-80h] BYREF
  _QWORD v22[4]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v26[3]; // [rsp+E0h] [rbp-28h]
  __int128 v27; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v28[3]; // [rsp+108h] [rbp+0h]

  v27 = 0LL;
  *(__m128i *)&v28[1] = _mm_load_si128((const __m128i *)&_xmm);
  v28[0] = 0LL;
  v13 = 0LL;
  v25 = 0LL;
  v26[0] = 0LL;
  *(_OWORD *)&v26[1] = *(_OWORD *)&v28[1];
  v23 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  v15 = a3;
  v18 = &v25;
  v16 = 0;
  v19 = &v27;
  LODWORD(v17) = 0;
  v22[0] = &v23;
  v20 = a2;
  v22[1] = &v23;
  v13 = 0LL;
  v22[2] = &v24;
  v22[3] = &v24;
  Microsoft::WRL::Details::Make<CAppLayoutOperationItem,IApplicationView * &,APPLICATION_VIEW_DATA * &,APPLICATION_VIEW_DATA * &,CAppLayoutOperationItem::CAppLayoutOperationItemConstructorRects &,int &,int &,enum APP_LAYOUT_ANIMATION_TYPE &>(
    (unsigned int)&v21,
    (unsigned int)&v20,
    (unsigned int)&v19,
    (unsigned int)&v18,
    (__int64)v22,
    (__int64)&v17,
    (__int64)&v16,
    (__int64)&v15);
  v6 = v21;
  if ( v21 )
    v7 = (**v21)(v21, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v13);
  else
    v7 = -2147024882;
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
  if ( v7 >= 0 )
  {
    v8 = v13;
    v14 = v13;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v14);
    v10 = a1[16];
    v7 = 0;
    if ( v10 != a1[18]
      || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)(a1 + 15),
                 v10 + 1,
                 v9),
          v7 >= 0) )
    {
      v11 = (__int64 *)(a1[15] + 8 * a1[16]++);
      if ( v11 )
      {
        *v11 = 0LL;
        if ( v11 != &v14 )
        {
          *v11 = v8;
          v14 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  return (unsigned int)v7;
}
