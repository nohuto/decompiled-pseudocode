/*
 * XREFs of ReadPointerDeviceSettingsFull @ 0x14024DD74
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x14012C34C (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x140153570 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1401536DC (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x140153880 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x140212D1C (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1402AC4F8 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 */

__int64 __fastcall ReadPointerDeviceSettingsFull(__int64 a1, __int64 a2)
{
  int v3; // esi
  unsigned int v4; // edi
  __int64 UserSessionState; // rax
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 *v8; // r8
  __int64 v9; // rbp
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // esi
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  _DWORD *v27; // rsi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __m128i *v35; // rsi
  __m128i v36; // xmm6
  bool v37; // zf
  __int32 v38; // eax
  int v39; // ecx
  __int32 v40; // eax
  __int32 v41; // eax
  __int32 v42; // eax
  __int32 v43; // eax
  __int32 v44; // eax
  int v45; // eax
  __int32 v46; // eax
  __int32 v47; // eax
  __int32 v48; // eax

  v3 = a1;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = UserSessionState;
  v10 = v3 - 148;
  if ( !v10 )
  {
    if ( !*(_DWORD *)(UserSessionState + 18256) )
      LoadPointerDevicePenSettings(v7, (__int64)v6);
    v35 = *(__m128i **)(v9 + 18264);
    v36 = v35[6];
    v37 = (unsigned int)IsFlicksDisabledByGroupPolicy(v7) == 0;
    v38 = v35->m128i_i32[3];
    v39 = _mm_cvtsi128_si32(_mm_srli_si128(v36, 12));
    if ( !v37 )
      v39 = 0;
    if ( v38 == -1 )
      v38 = v35->m128i_i32[2];
    *(_DWORD *)a2 = v38;
    v40 = v35[1].m128i_i32[3];
    if ( v40 == -1 )
      v40 = v35[1].m128i_i32[2];
    *(_DWORD *)(a2 + 4) = v40;
    v41 = v35[2].m128i_i32[3];
    if ( v41 == -1 )
      v41 = v35[2].m128i_i32[2];
    *(_DWORD *)(a2 + 8) = v41;
    v42 = v35[3].m128i_i32[3];
    if ( v42 == -1 )
      v42 = v35[3].m128i_i32[2];
    *(_DWORD *)(a2 + 12) = v42;
    v43 = v35[4].m128i_i32[3];
    if ( v43 == -1 )
      v43 = v35[4].m128i_i32[2];
    *(_DWORD *)(a2 + 16) = v43;
    v44 = v35[5].m128i_i32[3];
    if ( v44 == -1 )
      v44 = v35[5].m128i_i32[2];
    *(_DWORD *)(a2 + 20) = v44;
    v45 = v36.m128i_i32[2];
    if ( v39 != -1 )
      v45 = v39;
    *(_DWORD *)(a2 + 24) = v45;
    v46 = v35[7].m128i_i32[3];
    if ( v46 == -1 )
      v46 = v35[7].m128i_i32[2];
    *(_DWORD *)(a2 + 28) = v46;
    v47 = v35[8].m128i_i32[3];
    if ( v47 == -1 )
      v47 = v35[8].m128i_i32[2];
    *(_DWORD *)(a2 + 32) = v47;
    v48 = v35[9].m128i_i32[3];
    if ( v48 == -1 )
      v48 = v35[9].m128i_i32[2];
    *(_DWORD *)(a2 + 36) = v48;
    return 1;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    v27 = *(_DWORD **)(UserSessionState + 18088);
    if ( !*(_DWORD *)(UserSessionState + 18080) )
      GetDWORDSettingValues(7LL, *(_QWORD *)(UserSessionState + 18088), 7LL);
    v28 = v27[3];
    if ( v28 == -1 )
      v28 = v27[2];
    *(_DWORD *)a2 = v28;
    v29 = v27[7];
    if ( v29 == -1 )
      v29 = v27[6];
    *(_DWORD *)(a2 + 4) = v29;
    v30 = v27[11];
    if ( v30 == -1 )
      v30 = v27[10];
    *(_DWORD *)(a2 + 8) = v30;
    v31 = v27[15];
    if ( v31 == -1 )
      v31 = v27[14];
    *(_DWORD *)(a2 + 12) = v31;
    v32 = v27[19];
    if ( v32 == -1 )
      v32 = v27[18];
    *(_DWORD *)(a2 + 16) = v32;
    v33 = v27[23];
    if ( v33 == -1 )
      v33 = v27[22];
    *(_DWORD *)(a2 + 20) = v33;
    v34 = v27[27];
    if ( v34 == -1 )
      v34 = v27[26];
    *(_DWORD *)(a2 + 24) = v34;
    return 1;
  }
  v12 = v11 - 2;
  if ( !v12 )
    return GetFlickMap((struct tagFLICK_MAP *)a2, (__int64)v6);
  v13 = v12 - 2;
  if ( !v13 )
    return (unsigned int)GetCustomFlick((struct tagCUSTOM_FLICK *)a2);
  if ( v13 == 2 )
  {
    if ( !*(_DWORD *)(UserSessionState + 18528)
      && (int)CreatePredictionSettings(*(struct tagDEVICECONFIG_SETTING **)(UserSessionState + 18536), v6, v8) >= 0 )
    {
      *(_DWORD *)(v9 + 18528) = 1;
    }
    if ( *(_DWORD *)(v9 + 18528) == 1 )
    {
      v14 = *(_QWORD *)(v9 + 18536);
      GetPredictionSettings((struct tagDEVICECONFIG_SETTING *)v14, v6, v8);
      v17 = *(_DWORD *)(v14 + 12);
      v18 = 60;
      if ( v17 == -1 )
      {
        v19 = *(_DWORD *)(v14 + 8);
      }
      else
      {
        v19 = 60;
        if ( v17 <= 0x3C )
          v19 = *(_DWORD *)(v14 + 12);
      }
      *(_DWORD *)(a2 + 4) = v19;
      *(_DWORD *)(W32GetUserSessionState(v16, v15) + 18984) = v19;
      v22 = *(_DWORD *)(v14 + 28);
      if ( v22 == -1 )
      {
        v18 = *(_DWORD *)(v14 + 24);
      }
      else if ( v22 <= 0x3C )
      {
        v18 = *(_DWORD *)(v14 + 28);
      }
      *(_DWORD *)(a2 + 8) = v18;
      *(_DWORD *)(W32GetUserSessionState(v21, v20) + 18988) = v18;
      v25 = *(_DWORD *)(v14 + 44);
      if ( v25 == -1 )
        v25 = *(_DWORD *)(v14 + 40);
      *(_DWORD *)(a2 + 12) = v25;
      *(_DWORD *)(W32GetUserSessionState(v24, v23) + 18992) = v25;
      return 1;
    }
  }
  return v4;
}
