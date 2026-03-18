/*
 * XREFs of ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x18023FED8
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802C27F4 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x18019ECB0 (-IsOOM@@YA_NJ@Z.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801E8D90 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?EnsureDevice@CDDisplayManager@@AEAAJAEBU_LUID@@PEAUIDisplayAdapter@Core@Display@Devices@Windows@@PEAPEAUIDisplayDevice@4567@@Z @ 0x180205488 (-EnsureDevice@CDDisplayManager@@AEAAJAEBU_LUID@@PEAUIDisplayAdapter@Core@Display@Devices@Windows.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x18023EFE4 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x18026D328 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo_ea_18026D328.c)
 *     ??4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x1802C187C (--4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::GetDisplayDeviceAndTarget(
        CDDisplayManager *this,
        struct _LUID a2,
        void *a3,
        int a4,
        struct DDisplayTargetResources *a5)
{
  DWORD LowPart; // ebx
  __int64 v8; // rax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // esi
  LONG HighPart; // r14d
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  CDDisplayManager *v19; // rcx
  int v20; // eax
  struct Windows::Devices::Display::Core::IDisplayDevice *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64, void *, GUID *, char *); // rdi
  int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v35; // [rsp+28h] [rbp-A1h]
  unsigned int v36; // [rsp+28h] [rbp-A1h]
  __int64 *v37; // [rsp+38h] [rbp-91h] BYREF
  struct Windows::Devices::Display::Core::IDisplayAdapter *v38; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v39[4]; // [rsp+48h] [rbp-81h] BYREF
  struct Windows::Devices::Display::Core::IDisplayDevice *v40[2]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v41; // [rsp+68h] [rbp-61h] BYREF
  __int128 v42; // [rsp+78h] [rbp-51h] BYREF
  __int128 v43; // [rsp+88h] [rbp-41h] BYREF
  __int128 v44; // [rsp+98h] [rbp-31h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-21h] BYREF
  int v46; // [rsp+B0h] [rbp-19h] BYREF
  int v47; // [rsp+B4h] [rbp-15h]
  __int64 *v48; // [rsp+B8h] [rbp-11h] BYREF
  _QWORD v49[3]; // [rsp+C0h] [rbp-9h] BYREF
  GUID v50; // [rsp+D8h] [rbp+Fh] BYREF
  unsigned int v51; // [rsp+128h] [rbp+5Fh] BYREF
  int v52; // [rsp+12Ch] [rbp+63h]
  struct _LUID v53; // [rsp+130h] [rbp+67h] BYREF

  v53 = a2;
  v52 = HIDWORD(this);
  v51 = 0;
  LowPart = a2.LowPart;
  v8 = *g_DDisplayManager;
  v48 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(v8 + 48))(g_DDisplayManager, &v48);
  v10 = v9;
  if ( v9 < 0 )
  {
    v36 = 312;
    goto LABEL_74;
  }
  v9 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v48 + 56))(v48, &v51);
  v10 = v9;
  if ( v9 < 0 )
  {
    v36 = 313;
LABEL_74:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v36, 0LL);
    goto LABEL_75;
  }
  v11 = 0;
  if ( v51 )
  {
    HighPart = v53.HighPart;
    while ( 1 )
    {
      v39[0] = 0;
      v13 = *v48;
      v37 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v13 + 48))(v48, v11, &v37);
      v10 = v14;
      if ( v14 < 0 )
        break;
      v15 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*v37 + 64))(v37, v39);
      v10 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x143u, 0LL);
        goto LABEL_71;
      }
      if ( a4 == v39[0] )
      {
        v49[0] = 0LL;
        v16 = *v37;
        v38 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Devices::Display::Core::IDisplayAdapter **))(v16 + 48))(
                v37,
                &v38);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x14Cu, 0LL);
          goto LABEL_68;
        }
        v18 = (*(__int64 (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayAdapter *, _QWORD *))(*(_QWORD *)v38 + 48LL))(
                v38,
                v49);
        v10 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x14Du, 0LL);
          goto LABEL_68;
        }
        v49[1] = v49[0];
        *(_QWORD *)&v50.Data1 = __PAIR64__(HighPart, LowPart);
        if ( __PAIR64__(HighPart, LowPart) == v49[0] )
        {
          v45 = 0LL;
          *(_OWORD *)v40 = 0LL;
          v41 = 0LL;
          v42 = 0LL;
          v43 = 0LL;
          v44 = 0LL;
          v46 = -1;
          v47 = -1;
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            (__int64 *)&v43,
            (__int64 *)&v37);
          v19 = v40[0];
          v40[0] = 0LL;
          if ( v19 )
            (*(void (__fastcall **)(CDDisplayManager *))(*(_QWORD *)v19 + 16LL))(v19);
          v20 = CDDisplayManager::EnsureDevice(v19, &v53, v38, v40);
          v10 = v20;
          if ( v20 < 0 )
          {
            v35 = 341;
            goto LABEL_63;
          }
          v21 = v40[1];
          v40[1] = 0LL;
          if ( v21 )
            (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayDevice *))(*(_QWORD *)v21 + 16LL))(v21);
          v20 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, struct Windows::Devices::Display::Core::IDisplayDevice **))v40[0])(
                  v40[0],
                  &GUID_3fefe50c_0940_54bd_a02f_f9c7a536ad60,
                  &v40[1]);
          v10 = v20;
          if ( v20 < 0 )
          {
            v35 = 342;
            goto LABEL_63;
          }
          v22 = v41;
          *(_QWORD *)&v41 = 0LL;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v20 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, __int128 *))v40[0])(
                  v40[0],
                  &GUID_54e1a93c_3c52_5efb_957e_4bf25c4bd20e,
                  &v41);
          v10 = v20;
          if ( v20 < 0 )
          {
            v35 = 343;
            goto LABEL_63;
          }
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetImpl'::`2'::impl) )
          {
            v23 = *((_QWORD *)&v41 + 1);
            *((_QWORD *)&v41 + 1) = 0LL;
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            v20 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, char *))v40[0])(
                    v40[0],
                    &GUID_133df343_ab0a_5e58_8649_6468822ba8af,
                    (char *)&v41 + 8);
            v10 = v20;
            if ( v20 < 0 )
            {
              v35 = 347;
              goto LABEL_63;
            }
          }
          v24 = v42;
          *(_QWORD *)&v42 = 0LL;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          v20 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, __int128 *))v40[0])(
                  v40[0],
                  &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
                  &v42);
          v10 = v20;
          if ( v20 < 0 )
          {
            v35 = 350;
            goto LABEL_63;
          }
          v25 = *((_QWORD *)&v42 + 1);
          *((_QWORD *)&v42 + 1) = 0LL;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          v20 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, char *))v40[0])(
                  v40[0],
                  &GUID_4824eb1d_6525_4522_bae1_f7bad7168a94,
                  (char *)&v42 + 8);
          v10 = v20;
          if ( v20 < 0 )
          {
            v35 = 351;
            goto LABEL_63;
          }
          v26 = v45;
          v45 = 0LL;
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          v20 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayDevice *, GUID *, __int64 *))v40[0])(
                  v40[0],
                  &GUID_89887184_7ca9_4645_b0ce_5b51a741fc80,
                  &v45);
          v10 = v20;
          if ( v20 < 0 )
          {
            v35 = 352;
            goto LABEL_63;
          }
          v27 = *((_QWORD *)&v43 + 1);
          v28 = v42;
          v29 = *(_QWORD *)v42;
          *((_QWORD *)&v43 + 1) = 0LL;
          v30 = *(__int64 (__fastcall **)(__int64, void *, GUID *, char *))(v29 + 32);
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          v50 = GUID_ecd15fc1_eadc_51bc_971d_3bc628db2dd4;
          v10 = v30(v28, a3, &v50, (char *)&v43 + 8);
          if ( IsOOM(v10) )
            __fastfail(0xABACADAB);
          if ( v10 == -2005270516 )
          {
            v10 = -2003304309;
            v35 = 373;
            goto LABEL_43;
          }
          if ( v10 < 0 )
          {
            v35 = 375;
LABEL_43:
            v31 = v10;
          }
          else
          {
            v32 = v44;
            *(_QWORD *)&v44 = 0LL;
            if ( v32 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            v20 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int128 *))&v43 + 1))(
                    *((_QWORD *)&v43 + 1),
                    &GUID_71e18952_b321_5af4_bfe8_03fbea31e40d,
                    &v44);
            v10 = v20;
            if ( v20 < 0 )
            {
              v35 = 378;
            }
            else
            {
              v33 = *((_QWORD *)&v44 + 1);
              *((_QWORD *)&v44 + 1) = 0LL;
              if ( v33 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
              v20 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))&v43 + 1))(
                      *((_QWORD *)&v43 + 1),
                      &GUID_64d820de_7b83_5d29_8729_243a0c9bedf5,
                      (char *)&v44 + 8);
              v10 = v20;
              if ( v20 < 0 )
              {
                v35 = 381;
              }
              else
              {
                v20 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)&v43 + 1) + 56LL))(
                        *((_QWORD *)&v43 + 1),
                        &v46);
                v10 = v20;
                if ( v20 >= 0 )
                {
                  v47 = a4;
                  DDisplayTargetResources::operator=(a5, v40);
                  goto LABEL_65;
                }
                v35 = 384;
              }
            }
LABEL_63:
            v31 = v20;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, v35, 0LL);
LABEL_65:
          DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)v40);
LABEL_68:
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
          goto LABEL_71;
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
      if ( ++v11 >= v51 )
        goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x142u, 0LL);
LABEL_71:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
  }
  else
  {
LABEL_13:
    v10 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x190u, 0LL);
  }
LABEL_75:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v48);
  return (unsigned int)v10;
}
