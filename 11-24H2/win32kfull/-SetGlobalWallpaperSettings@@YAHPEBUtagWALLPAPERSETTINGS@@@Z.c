/*
 * XREFs of ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x14012B07C
 * Callers:
 *     xxxSetDeskWallpaper @ 0x14012AE2C (xxxSetDeskWallpaper.c)
 * Callees:
 *     ReleaseWallpaperSettings @ 0x14021DCC0 (ReleaseWallpaperSettings.c)
 */

__int64 __fastcall SetGlobalWallpaperSettings(const struct tagWALLPAPERSETTINGS *a1, __int64 a2)
{
  const struct tagWALLPAPERSETTINGS *v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _OWORD *v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 UserSessionState; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rbx
  _OWORD *v37; // rcx
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  _BYTE v54[528]; // [rsp+20h] [rbp-218h] BYREF

  v2 = a1;
  v3 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 62832) )
  {
    v6 = *(_DWORD **)(W32GetUserSessionState(v5, v4) + 62832);
    if ( *v6 == 1 )
    {
      v8 = 4LL;
      v9 = 4LL;
      v10 = v54;
      do
      {
        v11 = *((_OWORD *)v2 + 1);
        *v10 = *(_OWORD *)v2;
        v12 = *((_OWORD *)v2 + 2);
        v10[1] = v11;
        v13 = *((_OWORD *)v2 + 3);
        v10[2] = v12;
        v14 = *((_OWORD *)v2 + 4);
        v10[3] = v13;
        v15 = *((_OWORD *)v2 + 5);
        v10[4] = v14;
        v16 = *((_OWORD *)v2 + 6);
        v10[5] = v15;
        v17 = *((_OWORD *)v2 + 7);
        v2 = (const struct tagWALLPAPERSETTINGS *)((char *)v2 + 128);
        v10[6] = v16;
        v10 += 8;
        *(v10 - 1) = v17;
        --v9;
      }
      while ( v9 );
      *(_DWORD *)v10 = *(_DWORD *)v2;
      v18 = *(_OWORD **)(W32GetUserSessionState(v10, v6) + 62832);
      v19 = v54;
      do
      {
        v20 = v19[1];
        *v18 = *v19;
        v21 = v19[2];
        v18[1] = v20;
        v22 = v19[3];
        v18[2] = v21;
        v23 = v19[4];
        v18[3] = v22;
        v24 = v19[5];
        v18[4] = v23;
        v25 = v19[6];
        v18[5] = v24;
        v26 = v19[7];
        v19 += 8;
        v18[6] = v25;
        v18 += 8;
        *(v18 - 1) = v26;
        --v8;
      }
      while ( v8 );
LABEL_14:
      v3 = 1;
      *(_DWORD *)v18 = *(_DWORD *)v19;
      return v3;
    }
    UserSessionState = W32GetUserSessionState(v7, v6);
    ReleaseWallpaperSettings(*(_QWORD *)(UserSessionState + 62832));
    *(_QWORD *)(W32GetUserSessionState(v29, v28) + 62832) = 0LL;
  }
  v30 = Win32AllocPoolZInit(516LL, 1347908437LL);
  *(_QWORD *)(W32GetUserSessionState(v32, v31) + 62832) = v30;
  if ( *(_QWORD *)(W32GetUserSessionState(v34, v33) + 62832) )
  {
    v36 = 4LL;
    v37 = v54;
    v38 = 4LL;
    do
    {
      v39 = *((_OWORD *)v2 + 1);
      *v37 = *(_OWORD *)v2;
      v40 = *((_OWORD *)v2 + 2);
      v37[1] = v39;
      v41 = *((_OWORD *)v2 + 3);
      v37[2] = v40;
      v42 = *((_OWORD *)v2 + 4);
      v37[3] = v41;
      v43 = *((_OWORD *)v2 + 5);
      v37[4] = v42;
      v44 = *((_OWORD *)v2 + 6);
      v37[5] = v43;
      v45 = *((_OWORD *)v2 + 7);
      v2 = (const struct tagWALLPAPERSETTINGS *)((char *)v2 + 128);
      v37[6] = v44;
      v37 += 8;
      *(v37 - 1) = v45;
      --v38;
    }
    while ( v38 );
    *(_DWORD *)v37 = *(_DWORD *)v2;
    v18 = *(_OWORD **)(W32GetUserSessionState(v37, v35) + 62832);
    v19 = v54;
    do
    {
      v46 = v19[1];
      *v18 = *v19;
      v47 = v19[2];
      v18[1] = v46;
      v48 = v19[3];
      v18[2] = v47;
      v49 = v19[4];
      v18[3] = v48;
      v50 = v19[5];
      v18[4] = v49;
      v51 = v19[6];
      v18[5] = v50;
      v52 = v19[7];
      v19 += 8;
      v18[6] = v51;
      v18 += 8;
      *(v18 - 1) = v52;
      --v36;
    }
    while ( v36 );
    goto LABEL_14;
  }
  return v3;
}
