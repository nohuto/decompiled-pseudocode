/*
 * XREFs of ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18054AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800298D4 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800C9E90 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E5480 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804E6D10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1804E6D10.c)
 *     ??$?0VCPlaceModeButtonAcc@@@?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCPlaceModeButtonAcc@@@12@PEAPEAX@Z @ 0x180549CB4 (--$-0VCPlaceModeButtonAcc@@@-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV-$ComPtr@VCP.c)
 *     ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUCRect@Geometry@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUCRect@Geometry@@@Z @ 0x180549E8C (--$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV-$NativeString@V-$CoTaskMemPolicy@G@In.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18054B368 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EEB4 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisualAcc::InitPlaceMode(
        IRawElementProviderSimple *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IAppLayout *a3)
{
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rcx
  struct IAppLayout *v6; // rdi
  int v7; // r15d
  __int128 *v8; // rax
  unsigned __int16 **v9; // r8
  unsigned __int16 *v10; // r13
  int v11; // esi
  __int64 *v12; // rdx
  ImmersiveApplicationLayout *v13; // rbx
  void *v14; // r8
  struct IRawElementProviderSimpleVtbl *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  enum DEVICE_SCALE_FACTOR v18; // r8d
  int v19; // eax
  __int64 v20; // rdx
  int v21; // r12d
  int v22; // esi
  __int64 v23; // rdx
  int (__fastcall *v24)(struct IAppLayout *, __int128 **); // rbx
  unsigned __int16 **v25; // r8
  int ViewTitle; // ebx
  __int64 *v27; // rdx
  ImmersiveApplicationLayout *v28; // rsi
  void *v29; // r8
  struct IRawElementProviderSimpleVtbl *v30; // rdx
  __int64 *v31; // rcx
  __int64 v32; // rax
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  ImmersiveApplicationLayout *v34; // [rsp+38h] [rbp-C8h] BYREF
  __int128 *v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-B8h] BYREF
  IRawElementProviderSimple *v37; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  struct IAppLayout *v42; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  IRawElementProviderSimple *v46; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v47[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v48[16]; // [rsp+C0h] [rbp-40h] BYREF
  ApplicationViewHelpers *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+F8h] [rbp-8h]
  __int64 v53; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+108h] [rbp+8h]
  __int128 v55; // [rsp+110h] [rbp+10h] BYREF
  struct tagSIZE v56[2]; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+30h]
  __int128 v58; // [rsp+138h] [rbp+38h] BYREF

  v42 = a3;
  lpVtbl = this[4].lpVtbl;
  v6 = a3;
  v33 = 0;
  v7 = 0;
  v8 = (__int128 *)(*((__int64 (__fastcall **)(struct IRawElementProviderSimpleVtbl *, __int64 *))lpVtbl->QueryInterface
                    + 15))(
                     lpVtbl,
                     &v53);
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v58 = *v8;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v43);
  v44 = -1LL;
  v45 = -1LL;
  if ( (int)ApplicationViewHelpers::GetViewTitle(a2, &v43, v9) >= 0 )
  {
    v10 = v43;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
            &v38,
            (__int64)&_ImageBase,
            2101LL,
            v43);
    if ( v11 >= 0 )
    {
      v35 = &v58;
      v37 = this - 4;
      Microsoft::WRL::Details::Make<CPlaceModeButtonAcc,CDragVisualAcc *,unsigned int &,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,Geometry::CRect *>(
        &v34,
        &v37,
        &v33,
        (int)&v38,
        (__int64 *)&v35);
      v13 = v34;
      if ( v34 )
      {
        Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>(&v41, &v34);
        v15 = this[23].lpVtbl;
        v11 = 0;
        if ( v15 == this[25].lpVtbl
          && (v11 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)&this[22],
                      (unsigned __int64)&v15->QueryInterface + 1,
                      v14),
              v11 < 0)
          || (++this[23].lpVtbl,
              (v12 = (__int64 *)(&this[22].lpVtbl->QueryInterface
                               + (__int64)&this[23].lpVtbl[-1].get_HostRawElementProvider
                               + 7)) == 0LL)
          || (*v12 = 0LL, v12 == &v41) )
        {
          v16 = v41;
        }
        else
        {
          v16 = 0LL;
          *v12 = v41;
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v6 = v42;
        v7 = 1;
        v33 = 1;
      }
      else
      {
        v11 = -2147024882;
      }
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
          (__int64)v13,
          (volatile int *)v12);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v38);
    if ( v11 >= 0 )
    {
      v57 = 0LL;
      v17 = *(_QWORD *)v6;
      v55 = 0LL;
      *(_OWORD *)&v56[0].cx = 0LL;
      (*(void (__fastcall **)(struct IAppLayout *, __int128 *))(v17 + 24))(v6, &v55);
      LODWORD(v34) = DWORD2(v55) - v55;
      HIDWORD(v34) = HIDWORD(v55) - DWORD1(v55);
      v19 = ImmersiveApplicationLayout::ComputeGutterWidth(v34, (struct tagSIZE)(unsigned int)v56[0].cx, v18);
      v20 = (unsigned int)(v19 >> 31);
      LODWORD(v20) = v19 % 2;
      v21 = v19 / 2;
      LODWORD(v37) = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)v6 + 72LL))(v6, v20);
      v22 = (int)v37;
      memset_0(v48, 0, 0x40uLL);
      v23 = *(_QWORD *)v6;
      v35 = 0LL;
      v24 = *(int (__fastcall **)(struct IAppLayout *, __int128 **))(v23 + 128);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v35);
      if ( v24(v6, &v35) >= 0 )
      {
        do
        {
          if ( (*(int (__fastcall **)(__int128 *, __int64, _BYTE *))(*(_QWORD *)v35 + 24LL))(v35, 1LL, v48) < 0 )
            break;
          v53 = v50;
          v54 = v51;
          if ( v52 )
            LODWORD(v53) = v50 - v21;
          if ( v52 != v22 - 1 )
            LODWORD(v54) = v51 + v21;
          v38 = 0LL;
          v39 = 0LL;
          v40 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v38);
          v39 = -1LL;
          v40 = -1LL;
          ViewTitle = ApplicationViewHelpers::GetViewTitle(
                        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v49,
                        &v38,
                        v25);
          if ( ViewTitle >= 0 )
          {
            memset(v47, 0, 24);
            ViewTitle = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                          v47,
                          &_ImageBase,
                          2102LL,
                          v38,
                          v10);
            if ( ViewTitle >= 0 )
            {
              v42 = (struct IAppLayout *)&v53;
              v46 = this - 4;
              Microsoft::WRL::Details::Make<CPlaceModeButtonAcc,CDragVisualAcc *,unsigned int &,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,Geometry::CRect *>(
                &v34,
                &v46,
                &v33,
                (int)v47,
                (__int64 *)&v42);
              v28 = v34;
              if ( v34 )
              {
                Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v36, &v34);
                v30 = this[23].lpVtbl;
                ViewTitle = 0;
                if ( v30 == this[25].lpVtbl
                  && (ViewTitle = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                                    (__int64)&this[22],
                                    (unsigned __int64)&v30->QueryInterface + 1,
                                    v29),
                      ViewTitle < 0)
                  || (++this[23].lpVtbl,
                      (v27 = (__int64 *)(&this[22].lpVtbl->QueryInterface
                                       + (__int64)&this[23].lpVtbl[-1].get_HostRawElementProvider
                                       + 7)) == 0LL)
                  || (*v27 = 0LL, v27 == (__int64 *)&v36) )
                {
                  v31 = v36;
                }
                else
                {
                  v31 = 0LL;
                  *v27 = (__int64)v36;
                  v36 = 0LL;
                }
                if ( v31 )
                {
                  v32 = *v31;
                  v36 = 0LL;
                  (*(void (__fastcall **)(__int64 *))(v32 + 16))(v31);
                }
                v33 = ++v7;
              }
              else
              {
                ViewTitle = -2147024882;
              }
              if ( v28 )
              {
                v34 = 0LL;
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
                  (__int64)v28,
                  (volatile int *)v27);
              }
              v22 = (int)v37;
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v47);
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v38);
        }
        while ( ViewTitle >= 0 );
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v35);
    }
  }
  LODWORD(this[2].lpVtbl) = 2;
  UiaRaiseStructureChangedEvent(this - 4, StructureChangeType_ChildrenBulkAdded, 0LL, 0);
  UiaRaiseAutomationEvent(this - 4, 20002);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v43);
}
