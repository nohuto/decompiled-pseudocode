/*
 * XREFs of DrvCollectDriverFailureData @ 0x1401C9950
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1401B1EA4 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DrvCollectDriverFailureData(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  const wchar_t *v9; // r8
  __int64 Pool2; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r11
  _OWORD *v17; // rcx
  __int64 v18; // rdi
  __int128 v19; // xmm1
  __int16 *v20; // rcx
  __int64 v21; // rsi
  __int16 v22; // di

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  result = ExAllocatePool2(64LL, 312LL, 1936876615LL);
  v6 = result;
  if ( result )
  {
    *(_DWORD *)result = *(_DWORD *)(v4 + 1060);
    *(_DWORD *)(result + 12) = *(_DWORD *)(v4 + 1064);
    v7 = *(unsigned __int16 *)(v4 + 1080);
    *(_WORD *)(result + 16) = v7;
    *(_QWORD *)(result + 304) = a2;
    *a1 = result;
    *(_QWORD *)(result + 4) = 0LL;
    *(_DWORD *)(result + 20) = *(_DWORD *)(v4 + 1084);
    *(_DWORD *)(result + 24) = *(_DWORD *)(v4 + 1088);
    *(_DWORD *)(result + 28) = *(_DWORD *)(v4 + 1092);
    *(_QWORD *)(result + 32) = *(_QWORD *)(v4 + 1096);
    *(_QWORD *)(result + 40) = *(_QWORD *)(v4 + 1104);
    *(_DWORD *)(result + 48) = *(_DWORD *)(v4 + 1164);
    *(_DWORD *)(result + 52) = *(_DWORD *)(v4 + 1176);
    *(_DWORD *)(result + 56) = *(_DWORD *)(v4 + 1180);
    *(_QWORD *)(result + 64) = *(_QWORD *)(v4 + 1184);
    *(_QWORD *)(result + 72) = *(_QWORD *)(v4 + 1192);
    *(_QWORD *)(result + 80) = *(_QWORD *)(v4 + 1200);
    *(_QWORD *)(result + 88) = *(_QWORD *)(v4 + 1208);
    *(_QWORD *)(result + 96) = *(_QWORD *)(v4 + 1216);
    *(_QWORD *)(result + 104) = *(_QWORD *)(v4 + 1224);
    *(_QWORD *)(result + 112) = *(_QWORD *)(v4 + 1232);
    *(_DWORD *)(result + 120) = *(_DWORD *)(v4 + 1240);
    *(_DWORD *)(result + 124) = *(_DWORD *)(v4 + 1244);
    *(_DWORD *)(result + 128) = *(_DWORD *)(v4 + 1248);
    *(_DWORD *)(result + 132) = *(_DWORD *)(v4 + 1252);
    UserSessionState = W32GetUserSessionState(v7);
    v9 = *(const wchar_t **)(v4 + 2896);
    *(_WORD *)(v6 + 136) = *(_WORD *)(UserSessionState + 69008);
    if ( v9 )
      wcsncpy_s((wchar_t *)(v6 + 138), 0x50uLL, v9, 0xFFFFFFFFFFFFFFFFuLL);
    Pool2 = ExAllocatePool2(64LL, 4096LL, 1936876615LL);
    v11 = Pool2;
    if ( Pool2 )
      a1[1] = Pool2;
    result = ExAllocatePool2(64LL, 4096LL, 1936876615LL);
    v12 = result;
    if ( result )
      a1[2] = result;
    v13 = *(_QWORD *)(v4 + 1096);
    v14 = 0;
    if ( v13 )
    {
      v15 = 0LL;
      v16 = 0LL;
      do
      {
        if ( v15 >= 512 )
          break;
        result = v11;
        v17 = (_OWORD *)v13;
        v18 = 2LL;
        do
        {
          *(_OWORD *)result = *v17;
          *(_OWORD *)(result + 16) = v17[1];
          *(_OWORD *)(result + 32) = v17[2];
          *(_OWORD *)(result + 48) = v17[3];
          *(_OWORD *)(result + 64) = v17[4];
          *(_OWORD *)(result + 80) = v17[5];
          *(_OWORD *)(result + 96) = v17[6];
          result += 128LL;
          v19 = v17[7];
          v17 += 8;
          *(_OWORD *)(result - 16) = v19;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)result = *v17;
        *(_OWORD *)(result + 16) = v17[1];
        *(_OWORD *)(result + 32) = v17[2];
        if ( v12 )
        {
          if ( v14 < 4096 )
          {
            v20 = *(__int16 **)(v13 + 200);
            if ( v20 )
            {
              v21 = v14;
              v22 = 32;
              for ( result = v14 + 2LL; result < 0x1000; result = v14 + 2LL )
              {
                v14 += 2;
                *(_WORD *)(v16 + v12) = *v20;
                v16 += 2LL;
                result = (unsigned __int16)*v20;
                if ( !(_WORD)result && !v22 )
                  break;
                v22 = *v20++;
              }
              if ( v20 != *(__int16 **)(v13 + 200) )
              {
                result = v12 + 2 * v21;
                *(_QWORD *)(v11 + 200) = result;
              }
            }
          }
        }
        v13 = *(_QWORD *)(v13 + 128);
        ++v15;
        v11 += 304LL;
      }
      while ( v13 );
    }
  }
  return result;
}
