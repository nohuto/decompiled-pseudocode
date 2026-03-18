/*
 * XREFs of ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801C07C0
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1801BF7C0 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1800C6B64 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1801C1A6C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?ConsumeDxFlipRect@CCompositionSurfaceInfo@@QEAA_NPEAUMilRectU@@@Z @ 0x1801FBBBC (-ConsumeDxFlipRect@CCompositionSurfaceInfo@@QEAA_NPEAUMilRectU@@@Z.c)
 *     ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x18021BD68 (-UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x18021D5CC (-UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     McTemplateU0xxqqqxxqqqq_EventWriteTransfer @ 0x180287D34 (McTemplateU0xxqqqxxqqqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::Present(
        CDirectFlipInfo *this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        __int128 *a4,
        __int64 a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int64 v11; // rax
  int v12; // eax
  __int128 v13; // xmm0
  unsigned int v14; // r15d
  __int64 v15; // r9
  int v16; // eax
  _DWORD *v17; // r13
  int v18; // edi
  char v19; // bl
  char v20; // al
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-81h]
  _QWORD *v24; // [rsp+70h] [rbp-31h] BYREF
  __int64 v25[2]; // [rsp+78h] [rbp-29h] BYREF
  __int128 v26; // [rsp+88h] [rbp-19h]
  _BYTE v27[16]; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = 0;
  v25[1] = a5;
  v6 = 0;
  if ( CDirectFlipInfo::PresentNeeded(this) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      v25,
      v11);
    if ( v25[0] )
    {
      v24 = 0LL;
      v26 = 0LL;
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))v25[0])(
              v25[0],
              &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
              &v24);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x207u, 0LL);
      }
      else
      {
        if ( *((_DWORD *)this + 13) == 1 )
        {
          (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, v27);
          v13 = *a4;
        }
        else
        {
          (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(v24[1] + 24LL))(v24 + 1, v27);
          v13 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v24 + 128LL))(v24);
        }
        v26 = v13;
        v14 = 1;
        if ( CDirectFlipInfo::UseSyncIntervalAndAllowTearing(this, a2) )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 192LL))(v24);
          if ( v14 )
          {
            v14 = 1;
          }
          else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v24 + 208LL))(v24) )
          {
            v5 = 512;
          }
        }
        CDirectFlipInfo::UpdateHDRMetaData(this);
        LOBYTE(v15) = *((_DWORD *)this + 13) == 2;
        v23 = a3;
        v16 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 384LL))(
                a2,
                v14,
                v5,
                v15);
        v6 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x236u, 0LL);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && *((int *)this + 13) >= 2 )
          {
            CCompositionSurfaceInfo::ConsumeDxFlipRect(*((CCompositionSurfaceInfo **)this + 2), (struct MilRectU *)v27);
            v17 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 32LL))(*(_QWORD *)this + 8LL);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v18 = *((_DWORD *)this + 13);
              v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 320LL))(*((_QWORD *)this + 2));
              v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
              McTemplateU0xxqqqxxqqqq_EventWriteTransfer(
                HIDWORD(*(_QWORD *)v17),
                *((_QWORD *)this + 2),
                *v17,
                v17[2],
                v17[4],
                v17[5],
                v17[6],
                *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
                v20,
                v19,
                v18,
                v5,
                v14);
            }
          }
          *((_BYTE *)this + 107) = 0;
          *((_BYTE *)this + 105) = 0;
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    }
    else
    {
      v6 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x253u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v25);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this) )
  {
    v6 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0x25Bu, 0LL);
  }
  if ( CDirectFlipInfo::IsIndependentFlip(this) )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 408LL))(
            *((_QWORD *)this + 2),
            *((_QWORD *)this + 3));
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x261,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\directflipinfo.cpp",
        (const char *)(unsigned int)v21,
        v23);
  }
  if ( v6 == -2003304442 )
    *((_BYTE *)this + 109) = 1;
  return v6;
}
