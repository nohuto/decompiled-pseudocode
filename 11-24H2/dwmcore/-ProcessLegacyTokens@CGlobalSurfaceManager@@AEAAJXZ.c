/*
 * XREFs of ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003FA40
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18007CC40 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002F5A0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18003FF68 (-_Tidy@-$vector@V-$com_ptr_t@V-$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z @ 0x1800F42EC (-RemoveAt@-$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z.c)
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180208670 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessLegacyTokens(CGlobalSurfaceManager *this, __int64 a2, __int64 a3)
{
  int v4; // r14d
  int v5; // r13d
  __int64 **v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  unsigned int *v9; // r8
  int v10; // ebx
  int v11; // edi
  __int64 v12; // rcx
  int FrameLegacyTokens; // eax
  unsigned int *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r12
  unsigned int j; // edi
  int v19; // eax
  char *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int i; // edi
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // edx
  void *v27; // rax
  int v28; // eax
  bool v29; // r12
  int v30; // eax
  int v31; // eax
  CGdiSpriteBitmap *TargetResource; // rax
  bool v33[4]; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-95h] BYREF
  int v35; // [rsp+38h] [rbp-91h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-89h] BYREF
  int v37; // [rsp+48h] [rbp-81h] BYREF
  void *v38; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-71h] BYREF
  __int128 v40; // [rsp+60h] [rbp-69h] BYREF
  __int64 v41; // [rsp+70h] [rbp-59h]
  _BYTE v42[16]; // [rsp+78h] [rbp-51h] BYREF
  void **v43; // [rsp+88h] [rbp-41h]
  __int64 v44; // [rsp+90h] [rbp-39h]
  void **v45; // [rsp+98h] [rbp-31h]
  __int64 v46; // [rsp+A0h] [rbp-29h]
  _QWORD v47[2]; // [rsp+A8h] [rbp-21h] BYREF
  _QWORD v48[2]; // [rsp+B8h] [rbp-11h] BYREF
  char v49; // [rsp+C8h] [rbp-1h] BYREF
  unsigned int *v50; // [rsp+D8h] [rbp+Fh]
  __int64 v51; // [rsp+E0h] [rbp+17h]
  int *v52; // [rsp+E8h] [rbp+1Fh]
  __int64 v53; // [rsp+F0h] [rbp+27h]

  v4 = 0;
  v5 = 0;
  v34 = 0;
  v35 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, "?", a3, 1LL, v47);
  v6 = (__int64 **)((char *)this + 384);
  v41 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v40 = 0LL;
  if ( &v40 != (__int128 *)((char *)this + 384) )
  {
    v7 = *v6;
    *v6 = 0LL;
    v8 = (__int64 *)*((_QWORD *)this + 49);
    *((_QWORD *)this + 49) = 0LL;
    v41 = *((_QWORD *)this + 50);
    *(_QWORD *)&v40 = v7;
    *((_QWORD *)&v40 + 1) = v8;
    *((_QWORD *)this + 50) = 0LL;
  }
  for ( ; v7 != v8; ++v7 )
  {
    TargetResource = (CGdiSpriteBitmap *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*v7);
    if ( TargetResource )
    {
      *((_BYTE *)TargetResource + 153) = 1;
      CGdiSpriteBitmap::EnsureBitmapRealization(TargetResource);
    }
  }
  std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::_Tidy(&v40);
  v10 = 0;
  if ( !*((_DWORD *)this + 70) )
    goto LABEL_7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start,
      v9,
      1LL,
      v47);
  for ( i = 0; i < *((_DWORD *)this + 70); ++i )
  {
    v24 = *((_QWORD *)this + 32);
    v33[0] = 0;
    ++*(_DWORD *)(v24 + 16LL * i);
    v25 = *((_QWORD *)this + 32);
    v26 = *(_DWORD *)(v25 + 16LL * i);
    v27 = *(void **)(v25 + 16LL * i + 8);
    v36 = v26;
    v38 = v27;
    v28 = CLegacySurfaceManager::ProcessToken(
            (CGlobalSurfaceManager *)((char *)this + 152),
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v27,
            v9,
            v33);
    v10 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x110u, 0LL);
      break;
    }
    v29 = v33[0];
    if ( v33[0] || v36 > 0x64 )
    {
      v30 = DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((char *)this + 256, i);
      v10 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x118u, 0LL);
        break;
      }
      operator delete(v38);
      if ( !v29 )
        ++*((_DWORD *)this + 63);
      --i;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop,
      v9,
      1LL,
      v48);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xF0u, 0LL);
  }
  else
  {
LABEL_7:
    v11 = 0;
    v12 = 0LL;
    if ( g_pComposition )
      v12 = *((_QWORD *)g_pComposition + 111);
    v48[0] = v12;
    FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(v48, &v34, &v35);
    if ( FrameLegacyTokens < 0 )
    {
      v11 = FrameLegacyTokens | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x1Du, 0LL);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v39 = v34;
      v50 = &v36;
      v52 = (int *)&v39;
      v20 = &v49;
      v36 = v11;
      v51 = 4LL;
      v53 = 4LL;
LABEL_23:
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
        v14,
        3LL,
        v20);
    }
    while ( 1 )
    {
      *((_DWORD *)this + 62) = v11;
      if ( v11 < 0 )
        break;
      v15 = v34;
      v4 += v34;
      v16 = *((_QWORD *)this + 13);
      for ( j = 0; j < v15; ++j )
      {
        v33[0] = 0;
        v19 = CLegacySurfaceManager::ProcessToken(
                (CGlobalSurfaceManager *)((char *)this + 152),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v16,
                v14,
                v33);
        v10 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x103u, 0LL);
          goto LABEL_16;
        }
        if ( !v33[0] )
        {
          v31 = CLegacySurfaceManager::AddUnclaimedToken(
                  (CGlobalSurfaceManager *)((char *)this + 152),
                  (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v16);
          v10 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x108u, 0LL);
            goto LABEL_16;
          }
        }
        v16 += *(unsigned int *)(v16 + 4);
        v15 = v34;
      }
      if ( !v35 )
        break;
      ++v5;
      v11 = 0;
      v21 = 0LL;
      if ( g_pComposition )
        v21 = *((_QWORD *)g_pComposition + 111);
      v47[0] = v21;
      v22 = NtDCompositionGetFrameLegacyTokens(v47, &v34, &v35);
      if ( v22 < 0 )
      {
        v11 = v22 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22 | 0x10000000, 0x1Du, 0LL);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        LODWORD(v38) = v34;
        v43 = (void **)&v37;
        v45 = &v38;
        v20 = v42;
        v37 = v11;
        v44 = 4LL;
        v46 = 4LL;
        goto LABEL_23;
      }
    }
  }
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v37 = v5;
    v43 = &v38;
    LODWORD(v38) = v4;
    v45 = (void **)&v37;
    v44 = 4LL;
    v46 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v14,
      3LL,
      v42);
  }
  dword_1803FA7FC += v4;
  return (unsigned int)v10;
}
