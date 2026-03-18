/*
 * XREFs of ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@@Z @ 0x1801B9F30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1801BA258 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     _anonymous_namespace_::StoreIfChanged_D2DVector3_ @ 0x1801BA2C8 (_anonymous_namespace_--StoreIfChanged_D2DVector3_.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801BA300 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 *     _anonymous_namespace_::StoreIfChanged_float_ @ 0x1801BA31C (_anonymous_namespace_--StoreIfChanged_float_.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801BA33C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThread(
        CManipulation *this,
        const struct UpdateOnManipulationThreadArgs *a2,
        const struct ManipulationThreadTelemetryData *a3,
        struct IDCompositionInteractionStats *a4)
{
  CManipulation *v4; // r13
  unsigned int v6; // edi
  unsigned int *v7; // r11
  char v8; // si
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r11
  const struct D2DVector3 *v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  const struct D2DVector3 *v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // r11
  char v18; // si
  __int64 v19; // r10
  __int64 v20; // r10
  char v21; // si
  __int64 v22; // r11
  __int64 v23; // r10
  char v24; // si
  __int64 v25; // r11
  __int64 v26; // r10
  char v27; // si
  __int64 v28; // r11
  char v29; // si
  __int64 v30; // r10
  __int64 v31; // r11
  __int64 *QuadPart; // rdi
  char v33; // cl
  int v34; // eax
  unsigned __int8 v36; // dl
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h]
  CManipulation *v50; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v51; // [rsp+58h] [rbp-A8h]
  __int128 v52; // [rsp+68h] [rbp-98h]
  __int128 v53; // [rsp+78h] [rbp-88h]
  __int128 v54; // [rsp+88h] [rbp-78h]
  __int128 v55; // [rsp+98h] [rbp-68h]
  __int128 v56; // [rsp+A8h] [rbp-58h]
  __int128 v57; // [rsp+B8h] [rbp-48h]
  __int128 v58; // [rsp+C8h] [rbp-38h]
  __int128 v59; // [rsp+D8h] [rbp-28h]
  LARGE_INTEGER v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+108h] [rbp+8h]
  __int16 v62; // [rsp+10Ch] [rbp+Ch]
  int v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+114h] [rbp+14h]
  int v65; // [rsp+118h] [rbp+18h]
  int v66; // [rsp+120h] [rbp+20h]

  PerformanceCount.QuadPart = (LONGLONG)a4;
  v4 = (CManipulation *)((char *)this - 80);
  v6 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 80), (*((_BYTE *)a2 + 16) & 4) != 0);
  v8 = 0;
  CManipulation::_ResetManipulationThreadDataIfNecessary(v9, *v7);
  v12 = (const struct D2DVector3 *)(v11 + 32);
  v13 = *(_QWORD *)(v11 + 32);
  v49 = 0x3F8000003F800000LL;
  v14 = v13 - 0x3F8000003F800000LL;
  if ( !v14 )
    v14 = *(unsigned int *)(v11 + 40)
        - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
  if ( v14 )
  {
    v8 = 1;
    *(float *)(v10 + 32) = *(float *)v12 * *(float *)(v10 + 32);
    *(float *)(v10 + 36) = *(float *)(v11 + 36) * *(float *)(v10 + 36);
    *(float *)(v10 + 40) = *(float *)(v11 + 40) * *(float *)(v10 + 40);
  }
  v49 = 0LL;
  v15 = (const struct D2DVector3 *)(v11 + 20);
  v16 = *(_QWORD *)(v11 + 20);
  if ( !v16 )
    v16 = *(unsigned int *)(v11 + 28) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
  if ( v16 )
  {
    v8 = 1;
    *(float *)(v10 + 8) = *(float *)v15 + *(float *)(v10 + 8);
    *(float *)(v10 + 12) = *(float *)(v11 + 24) + *(float *)(v10 + 12);
    *(float *)(v10 + 16) = *(float *)(v11 + 28) + *(float *)(v10 + 16);
  }
  *(_QWORD *)(v10 + 44) = *(_QWORD *)v12;
  *(_DWORD *)(v10 + 52) = *(_DWORD *)(v11 + 40);
  *(_QWORD *)(v10 + 20) = *(_QWORD *)v15;
  *(_DWORD *)(v10 + 28) = *(_DWORD *)(v11 + 28);
  v18 = anonymous_namespace_::StoreIfChanged_D2DVector3_(v11 + 48, v10 + 136) | v8;
  v21 = anonymous_namespace_::StoreIfChanged_D2DVector3_(v17 + 60, v19 + 148) | v18;
  v24 = anonymous_namespace_::StoreIfChanged_D2DVector3_(v22 + 76, v20 + 60) | v21;
  v27 = anonymous_namespace_::StoreIfChanged_float_(v25 + 44, v23 + 56) | v24;
  v29 = anonymous_namespace_::StoreIfChanged_float_(v28 + 72, v26 + 160) | v27;
  if ( *(_DWORD *)v31 != *(_DWORD *)(v30 + 164)
    || v29
    || *(_DWORD *)(v30 + 168) != *(_DWORD *)(v31 + 88)
    || *(_DWORD *)(v30 + 176) != *(_DWORD *)(v31 + 4)
    || *(_DWORD *)(v30 + 180) != *(_DWORD *)(v31 + 8)
    || *(_DWORD *)(v30 + 184) != *(_DWORD *)(v31 + 12)
    || (v36 = *(_BYTE *)(v30 + 188), ((v36 ^ *(_BYTE *)(v31 + 16)) & 1) != 0)
    || ((v36 ^ *(_BYTE *)(v31 + 16)) & 2) != 0 )
  {
    QuadPart = (__int64 *)PerformanceCount.QuadPart;
    *(_DWORD *)(v30 + 164) = *(_DWORD *)v31;
    *(_DWORD *)(v30 + 176) = *(_DWORD *)(v31 + 4);
    *(_DWORD *)(v30 + 180) = *(_DWORD *)(v31 + 8);
    *(_DWORD *)(v30 + 184) = *(_DWORD *)(v31 + 12);
    *(_DWORD *)(v30 + 168) = *(_DWORD *)(v31 + 88);
    v33 = *(_BYTE *)(v30 + 188) ^ (*(_BYTE *)(v31 + 16) ^ *(_BYTE *)(v30 + 188)) & 1;
    *(_BYTE *)(v30 + 188) = v33;
    *(_BYTE *)(v30 + 188) = v33 ^ (*(_BYTE *)(v31 + 16) ^ v33) & 2;
    *(_DWORD *)(v30 + 172) = *(_DWORD *)(v31 + 92);
    if ( QuadPart )
    {
      v49 = 0LL;
      v37 = *(_QWORD *)(v31 + 48);
      if ( !v37 )
        v37 = *(unsigned int *)(v31 + 56) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
      if ( v37 )
        goto LABEL_28;
      v49 = 0LL;
      v38 = *(_QWORD *)(v31 + 60);
      if ( !v38 )
        v38 = *(unsigned int *)(v31 + 68) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32((__m128i)0LL);
      if ( v38 )
      {
LABEL_28:
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(&v50, 0, 0xD8uLL);
        v39 = *((_OWORD *)a3 + 1);
        v50 = v4;
        v40 = *((_OWORD *)a3 + 2);
        v51 = v39;
        v41 = *((_OWORD *)a3 + 3);
        v52 = v40;
        v42 = *((_OWORD *)a3 + 4);
        v53 = v41;
        v43 = *((_OWORD *)a3 + 5);
        v54 = v42;
        v44 = *((_OWORD *)a3 + 6);
        v55 = v43;
        v45 = *((_OWORD *)a3 + 7);
        v56 = v44;
        v46 = *((_OWORD *)a3 + 9);
        v57 = v45;
        v58 = *((_OWORD *)a3 + 8);
        v59 = v46;
        v60 = PerformanceCount;
        v61 = *(_DWORD *)a3;
        v62 = *((_WORD *)a3 + 90);
        v63 = *((_DWORD *)a3 + 2);
        v64 = *((_DWORD *)a3 + 1);
        v66 = *((_DWORD *)a3 + 44);
        v47 = *QuadPart;
        v65 = 1;
        (*(void (__fastcall **)(__int64 *, CManipulation **))(v47 + 208))(QuadPart, &v50);
      }
    }
    v34 = CManipulation::_SendUpdateToRenderThread(v4, v29, v15, v12);
    v6 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x82u, 0LL);
  }
  return v6;
}
