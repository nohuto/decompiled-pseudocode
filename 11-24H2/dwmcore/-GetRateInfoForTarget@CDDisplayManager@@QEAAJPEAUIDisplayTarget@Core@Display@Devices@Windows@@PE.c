/*
 * XREFs of ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x18022506C
 * Callers:
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x1802BF9B0 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802C27F4 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBVRenderTargetInfo@@I.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0RefreshRateInfo@@QEAA@URational@Numerics@Foundation@Windows@@00I@Z @ 0x18022ED48 (--0RefreshRateInfo@@QEAA@URational@Numerics@Foundation@Windows@@00I@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::GetRateInfoForTarget(
        CDDisplayManager *this,
        struct Windows::Devices::Display::Core::IDisplayTarget *a2,
        struct RefreshRateInfo *a3)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  unsigned int v9; // eax
  void (__fastcall ***v10)(_QWORD, GUID *, __int64 **); // rcx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rbx
  void (__fastcall **v14)(_QWORD, GUID *, __int64 **); // rax
  void (__fastcall *v15)(_QWORD, GUID *, __int64 **); // rdi
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64 *, __int64 *); // rdi
  __int64 *v20; // rcx
  void (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // rbx
  void (__fastcall **v22)(_QWORD, GUID *, __int64 **); // rax
  void (__fastcall *v23)(_QWORD, GUID *, __int64 **); // rdi
  __int64 v24; // rcx
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64 *, __int128 *, __int64 *); // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 (__fastcall *v32)(__int64 *, __int128 *, __int64 *); // rdi
  __int64 v33; // rcx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  void (__fastcall ***v37)(_QWORD, GUID *, __int64 **); // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v38; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int128 v50; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v51[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-30h] BYREF
  int v53; // [rsp+D8h] [rbp-28h]
  __int64 v54; // [rsp+E0h] [rbp-20h] BYREF
  int v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h] BYREF
  int v57; // [rsp+F8h] [rbp-8h]

  v37 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v38 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v40 = 0;
  v39 = 0;
  v5 = *g_DDisplayManager;
  v49 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v5 + 80))(g_DDisplayManager, &v49);
  if ( v6 < 0 )
  {
    v9 = 231;
    goto LABEL_53;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 48LL))(v49, &v39);
  if ( v6 < 0 )
  {
    v9 = 234;
    goto LABEL_53;
  }
  if ( v39 )
    goto LABEL_10;
  v7 = v49;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 64LL);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  v6 = v8(v7, &v48);
  if ( v6 < 0 )
  {
    v9 = 237;
    goto LABEL_53;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayTarget *, _QWORD *))(*(_QWORD *)v48 + 120LL))(
         v48,
         a2,
         &v37);
  if ( v6 >= 0 )
  {
LABEL_10:
    v10 = v37;
    if ( !v37 )
    {
      v6 = -2003304309;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0xF7u, 0LL);
      goto LABEL_54;
    }
    v11 = v47;
    v47 = 0LL;
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
      v10 = v37;
    }
    (**v10)(v10, &GUID_f32459c5_e994_570b_9ec8_ef42c35a8547, &v47);
    v12 = v46;
    v13 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))v37;
    v14 = *v37;
    v46 = 0LL;
    v15 = v14[17];
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))v15)(v13, &v46);
    if ( v6 < 0 )
    {
      v9 = 252;
    }
    else
    {
      v52 = 0LL;
      v53 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 48LL))(v46, &v52);
      if ( v6 < 0 )
      {
        v9 = 254;
      }
      else
      {
        v16 = v45;
        v17 = v47;
        v18 = *v47;
        v45 = 0LL;
        v19 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v18 + 48);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v6 = v19(v17, &v45);
        if ( v6 < 0 )
        {
          v9 = 257;
        }
        else
        {
          v54 = 0LL;
          v55 = 0;
          v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v45 + 48LL))(v45, &v54);
          if ( v6 < 0 )
          {
            v9 = 259;
          }
          else
          {
            v20 = v38;
            v21 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))v37;
            v22 = *v37;
            v38 = 0LL;
            v23 = v22[29];
            if ( v20 )
              (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
            v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 **))v23)(v21, &v38);
            if ( v6 < 0 )
            {
              v9 = 264;
            }
            else
            {
              v24 = v44;
              v25 = v38;
              v26 = *v38;
              v44 = 0LL;
              v27 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v26 + 48);
              if ( v24 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
              v50 = DisplayPath_MinPresentationRate;
              v6 = v27(v25, &v50, &v44);
              if ( v6 < 0 )
              {
                v9 = 267;
              }
              else
              {
                v28 = v43;
                v43 = 0LL;
                if ( v28 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v44)(
                       v44,
                       &GUID_08882ddb_a981_5887_b751_106993d66229,
                       &v43);
                if ( v6 < 0 )
                {
                  v9 = 268;
                }
                else
                {
                  v56 = 0LL;
                  v57 = 0;
                  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 48LL))(v43, &v56);
                  if ( v6 < 0 )
                  {
                    v9 = 270;
                  }
                  else
                  {
                    v29 = v42;
                    v30 = v38;
                    v31 = *v38;
                    v42 = 0LL;
                    v32 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v31 + 48);
                    if ( v29 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                    v50 = DisplayPath_PresentationRateMultiplier;
                    v6 = v32(v30, &v50, &v42);
                    if ( v6 < 0 )
                    {
                      v9 = 275;
                    }
                    else
                    {
                      v33 = v41;
                      v41 = 0LL;
                      if ( v33 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                      v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v42)(
                             v42,
                             &GUID_513ef3af_e784_5325_a91e_97c2b8111cf3,
                             &v41);
                      if ( v6 < 0 )
                      {
                        v9 = 276;
                      }
                      else
                      {
                        v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 48LL))(v41, &v40);
                        if ( v6 >= 0 )
                        {
                          LODWORD(v50) = v52;
                          DWORD1(v50) = v53 * HIDWORD(v52);
                          RefreshRateInfo::RefreshRateInfo(v51, v50, v56, v54, v40);
                          v34 = v51[1];
                          *(_OWORD *)a3 = v51[0];
                          v35 = v51[2];
                          *((_OWORD *)a3 + 1) = v34;
                          *((_OWORD *)a3 + 2) = v35;
                          goto LABEL_54;
                        }
                        v9 = 277;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v9 = 240;
  }
LABEL_53:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v9, 0LL);
LABEL_54:
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v38 )
    (*(void (__fastcall **)(__int64 *))(*v38 + 16))(v38);
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  if ( v47 )
    (*(void (__fastcall **)(__int64 *))(*v47 + 16))(v47);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v37 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 **)))(*v37)[2])(v37);
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  return (unsigned int)v6;
}
