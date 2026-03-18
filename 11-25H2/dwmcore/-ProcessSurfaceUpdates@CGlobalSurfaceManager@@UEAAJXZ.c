/*
 * XREFs of ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800AEC80
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180061AA0 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800699C0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessSurfaceUpdates(CGlobalSurfaceManager *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // r15d
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rcx
  int FrameSurfaceUpdates; // eax
  __int64 v10; // r8
  int v11; // ebx
  unsigned int v12; // esi
  __int64 v13; // r14
  PVOID v14; // rax
  CGlobalCompositionSurfaceInfo *v15; // rdi
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 (__fastcall *v22)(CGlobalCompositionSurfaceInfo *, const struct CSM_SURFACE_UPDATE_ *, __int64); // rax
  int v23; // eax
  int v24; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-41h] BYREF
  int v26; // [rsp+40h] [rbp-39h] BYREF
  int v27; // [rsp+48h] [rbp-31h] BYREF
  __int64 v28; // [rsp+50h] [rbp-29h] BYREF
  __int64 v29; // [rsp+58h] [rbp-21h] BYREF
  _QWORD Buffer[2]; // [rsp+60h] [rbp-19h] BYREF
  char v31[16]; // [rsp+70h] [rbp-9h] BYREF
  int *v32; // [rsp+80h] [rbp+7h]
  __int64 v33; // [rsp+88h] [rbp+Fh]
  int *v34; // [rsp+90h] [rbp+17h]
  __int64 v35; // [rsp+98h] [rbp+1Fh]

  v25 = 0;
  v3 = 0;
  v27 = 0;
  v4 = 0;
  v26 = 0;
  v6 = CGlobalSurfaceManager::ProcessLegacyTokens(this, a2, a3);
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA1u, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start,
      v7,
      1LL,
      Buffer);
  v8 = 0LL;
  if ( g_pComposition )
    v8 = *((_QWORD *)g_pComposition + 111);
  v28 = v8;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&v28, &v25, &v27);
  if ( FrameSurfaceUpdates >= 0 )
  {
    v11 = 0;
    v24 = 0;
    goto LABEL_9;
  }
  v11 = FrameSurfaceUpdates | 0x10000000;
  v24 = FrameSurfaceUpdates | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180336B18, 3u, FrameSurfaceUpdates | 0x10000000, 0x91u, 0LL);
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
LABEL_9:
      v12 = 0;
      if ( v25 )
      {
        do
        {
          Buffer[1] = 0LL;
          v13 = *((_QWORD *)this + 13) + 376LL * v12;
          Buffer[0] = *(_QWORD *)(v13 + 4);
          v14 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 24), Buffer);
          if ( v14 )
          {
            v15 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)v14 + 1);
            if ( v15 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*((_QWORD *)v14 + 1));
              v22 = *(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *, const struct CSM_SURFACE_UPDATE_ *, __int64))(*(_QWORD *)v15 + 128LL);
              if ( v22 == CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdate )
                v23 = CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdate(
                        v15,
                        (const struct CSM_SURFACE_UPDATE_ *)v13,
                        v21);
              else
                v23 = ((__int64 (__fastcall *)(CGlobalCompositionSurfaceInfo *, __int64))v22)(v15, v13);
              if ( v23 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xBCu, 0LL);
              ++v4;
              (*(void (__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v15 + 16LL))(v15);
            }
          }
          ++v12;
        }
        while ( v12 < v25 );
        v11 = v24;
        v3 = v26;
      }
      if ( !v27 )
        break;
      v26 = ++v3;
      v19 = 0LL;
      if ( g_pComposition )
        v19 = *((_QWORD *)g_pComposition + 111);
      v29 = v19;
      v20 = NtDCompositionGetFrameSurfaceUpdates(&v29, &v25, &v27);
      if ( v20 < 0 )
      {
        v11 = v20 | 0x10000000;
        v24 = v20 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180336B18, 3u, v20 | 0x10000000, 0x91u, 0LL);
        if ( v11 < 0 )
          break;
      }
      else
      {
        v11 = 0;
        v24 = 0;
      }
    }
  }
  v16 = *(_QWORD *)(*((_QWORD *)g_pComposition + 709) + 24LL);
  if ( v16 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v24 = v3;
    v32 = &v26;
    v26 = v4;
    v34 = &v24;
    v33 = 4LL;
    v35 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
      v10,
      3LL,
      v31);
  }
  dword_18040685C += v4;
  return (unsigned int)v11;
}
