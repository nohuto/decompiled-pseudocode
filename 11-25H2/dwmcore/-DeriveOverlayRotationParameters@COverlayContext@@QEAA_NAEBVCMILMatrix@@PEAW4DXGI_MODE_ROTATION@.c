/*
 * XREFs of ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801E530C
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1801215D0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall COverlayContext::DeriveOverlayRotationParameters(
        COverlayContext *this,
        const struct CMILMatrix *a2,
        enum DXGI_MODE_ROTATION *a3,
        unsigned int *a4,
        bool *a5)
{
  int v5; // r14d
  int v8; // r12d
  enum DXGI_MODE_ROTATION v10; // edi
  char v11; // si
  float *v12; // rcx
  int v13; // r9d
  unsigned int v14; // r10d
  int v15; // r11d
  float v16; // xmm1_4
  float *v17; // rcx
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  __int128 v22; // xmm1
  float v23; // xmm0_4
  __int128 v24; // xmm1
  float v25; // xmm0_4
  int v26; // xmm0_4
  float v27; // xmm2_4
  unsigned int v28; // eax
  unsigned int v29; // eax
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39[5]; // [rsp+20h] [rbp-50h] BYREF
  float v40; // [rsp+34h] [rbp-3Ch]
  __int128 v41; // [rsp+38h] [rbp-38h]
  __int128 v42; // [rsp+48h] [rbp-28h]
  int v43; // [rsp+58h] [rbp-18h]
  int v44; // [rsp+5Ch] [rbp-14h]
  unsigned int v45; // [rsp+60h] [rbp-10h]

  v5 = *((_DWORD *)this + 13);
  v8 = v5 & 6;
  v10 = DXGI_MODE_ROTATION_IDENTITY;
  v11 = 0;
  if ( CMILMatrix::IsTranslateAndScale<1>((__int64)a2) )
  {
    v16 = *v12;
    v17 = v12 + 5;
    if ( v16 >= 0.0 && *v17 >= 0.0 )
    {
      v11 = v15;
      goto LABEL_14;
    }
    if ( v8 == 6 )
    {
      v11 = v15;
      if ( v16 < 0.0 )
        v14 = 2;
      v29 = v14;
      v14 |= v15;
      if ( *v17 >= 0.0 )
        v14 = v29;
      goto LABEL_14;
    }
    if ( v13 && v16 < 0.0 && *v17 < 0.0 )
    {
      if ( *((_BYTE *)this + 19771) == (_BYTE)v14
        || (v16 <= 1.0 ? (v30 = 1.0 - v16) : (v30 = v16 - 1.0),
            v30 <= 0.0000011920929 || (v16 <= -1.0 ? (v32 = -1.0 - v16) : (v32 = v16 - -1.0), v32 <= 0.0000011920929))
        && ((v33 = *((float *)a2 + 5), v33 <= 1.0) ? (v34 = 1.0 - v33) : (v34 = v33 - 1.0),
            v34 <= 0.0000011920929 || (v33 <= -1.0 ? (v35 = -1.0 - v33) : (v35 = v33 - -1.0), v35 <= 0.0000011920929)) )
      {
        v10 = DXGI_MODE_ROTATION_ROTATE180;
LABEL_10:
        v11 = v15;
        LOBYTE(v15) = ((unsigned __int8)v15 & (unsigned __int8)v5) != 0 ? v15 : 0;
LABEL_14:
        *a4 = v14;
        *a3 = v10;
        *a5 = v15;
      }
    }
  }
  else if ( v13 )
  {
    v19 = *((float *)a2 + 1);
    v39[1] = *(float *)a2;
    v20 = *((float *)a2 + 3);
    v39[0] = v19;
    v21 = *((float *)a2 + 2);
    v39[3] = v20;
    v22 = *(_OWORD *)((char *)a2 + 24);
    v45 = v14;
    v39[2] = v21;
    v23 = *((float *)a2 + 5);
    v41 = v22;
    v24 = *(_OWORD *)((char *)a2 + 40);
    v39[4] = v23;
    v25 = *((float *)a2 + 4);
    v42 = v24;
    LODWORD(v24) = *((_DWORD *)a2 + 14);
    v40 = v25;
    v26 = *((_DWORD *)a2 + 15);
    v43 = v24;
    v44 = v26;
    if ( CMILMatrix::IsTranslateAndScale<1>((__int64)v39) )
    {
      if ( *((_BYTE *)this + 19771) == (_BYTE)v14
        || (v39[0] <= 1.0 ? (v31 = 1.0 - v39[0]) : (v31 = v39[0] - 1.0),
            v31 <= 0.0000011920929
         || (v39[0] <= -1.0 ? (v36 = -1.0 - v39[0]) : (v36 = v39[0] - -1.0), v36 <= 0.0000011920929))
        && (v40 <= 1.0 ? (v37 = 1.0 - v40) : (v37 = v40 - 1.0),
            v37 <= 0.0000011920929 || (v40 <= -1.0 ? (v38 = -1.0 - v40) : (v38 = v40 - -1.0), v38 <= 0.0000011920929)) )
      {
        v27 = *((float *)a2 + 4);
        if ( v8 == 6 )
        {
          v10 = DXGI_MODE_ROTATION_ROTATE90;
          if ( v27 > 0.0 )
            v14 = 2;
          v28 = v14;
          v14 |= v15;
          if ( *((float *)a2 + 1) >= 0.0 )
            v14 = v28;
          goto LABEL_10;
        }
        if ( v27 > 0.0 && *((float *)a2 + 1) < 0.0 )
        {
          v10 = DXGI_MODE_ROTATION_ROTATE270;
          goto LABEL_10;
        }
        if ( v27 < 0.0 && *((float *)a2 + 1) > 0.0 )
        {
          v10 = DXGI_MODE_ROTATION_ROTATE90;
          goto LABEL_10;
        }
      }
    }
  }
  return v11;
}
