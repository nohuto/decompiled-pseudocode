/*
 * XREFs of ?GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z @ 0x1402DA178
 * Callers:
 *     NtUserGetDwmCursorShape @ 0x140295E40 (NtUserGetDwmCursorShape.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402D9F3C (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 *     GreGetBitmapBits @ 0x14030DA38 (GreGetBitmapBits.c)
 */

void __fastcall CursorApiRouter::GetTelemetryInfo(CursorApiRouter *this, struct CursorTelemetryInfo *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 UserSessionState; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  Gre::Base *v21; // rcx
  __int128 v22; // xmm1
  __int16 v23; // ax
  __int64 v24; // rcx
  unsigned int BitmapBits; // eax
  unsigned int v26; // esi
  __int64 v27; // rax
  void *v28; // r14
  Gre::Base *v29; // rcx
  __m128i v30; // xmm2
  __int128 v31; // xmm0
  __m128i v32; // xmm1
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rsi
  unsigned int *v35; // rax
  unsigned int *v36; // r15
  struct tagBITMAP v37; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  _OWORD v42[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  _OWORD v46[6]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v47; // [rsp+120h] [rbp+20h]
  int v48; // [rsp+160h] [rbp+60h] BYREF

  memset(v46, 0, sizeof(v46));
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  *(_OWORD *)a2 = 0u;
  v3 = v42[0];
  *((_OWORD *)a2 + 1) = 0u;
  v4 = v42[1];
  *((_OWORD *)a2 + 2) = v3;
  v5 = v42[2];
  *((_OWORD *)a2 + 3) = v4;
  v6 = v43;
  *((_OWORD *)a2 + 4) = v5;
  v7 = v44;
  *((_OWORD *)a2 + 5) = v6;
  *((_OWORD *)a2 + 6) = v7;
  v8 = v46[0];
  *((_OWORD *)a2 + 7) = v45;
  v9 = v46[1];
  *((_OWORD *)a2 + 8) = v8;
  v10 = v46[2];
  *((_OWORD *)a2 + 9) = v9;
  v11 = v46[3];
  *((_OWORD *)a2 + 10) = v10;
  v12 = v46[4];
  *((_OWORD *)a2 + 11) = v11;
  v13 = v46[5];
  v14 = v47;
  *((_OWORD *)a2 + 12) = v12;
  *((_OWORD *)a2 + 13) = v13;
  *((_QWORD *)a2 + 28) = v14;
  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  *((_BYTE *)a2 + 4) = *((_BYTE *)this + 12);
  *((_BYTE *)a2 + 5) = *((_BYTE *)this + 13);
  *((_BYTE *)a2 + 6) = *((_BYTE *)this + 14);
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 7);
  *((_BYTE *)a2 + 24) = *((_DWORD *)this + 8) == 1;
  *(_OWORD *)((char *)a2 + 28) = *(_OWORD *)((char *)this + 72);
  *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)((char *)this + 88);
  *(_OWORD *)((char *)a2 + 60) = *(_OWORD *)((char *)this + 104);
  *((_DWORD *)a2 + 19) = *((_DWORD *)this + 30);
  UserSessionState = W32GetUserSessionState((char *)a2 + 128, 128LL);
  v16 = *(_DWORD *)(UserSessionState + 67060) >> 14;
  LOBYTE(v16) = (*(_DWORD *)(UserSessionState + 67060) & 0x4000) != 0;
  *((_BYTE *)a2 + 25) = v16;
  if ( *(_QWORD *)(W32GetUserSessionState(v16, v17) + 36384) )
  {
    v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 36384);
    *((_OWORD *)a2 + 5) = *(_OWORD *)(v20 + 80);
    *((_OWORD *)a2 + 6) = *(_OWORD *)(v20 + 96);
    *((_OWORD *)a2 + 7) = *(_OWORD *)(v20 + 112);
    *((_QWORD *)a2 + 16) = *(_QWORD *)(v20 + 128);
    v21 = *(Gre::Base **)(v20 + 88);
    if ( v21 )
    {
      memset(&v37, 0, sizeof(v37));
      if ( (unsigned int)GreExtGetObjectW(v21, 32LL, &v37) )
      {
        v22 = *(_OWORD *)&v37.bmPlanes;
        v23 = _mm_cvtsi128_si32(*(__m128i *)&v37.bmPlanes);
        *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)&v37.bmType;
        *(_OWORD *)((char *)a2 + 152) = v22;
        if ( v23 == 1 && v37.bmBitsPixel == 1 )
        {
          v24 = *(_QWORD *)(v20 + 88);
          v48 = 0;
          BitmapBits = GreGetBitmapBits(v24, 0LL, 0LL, &v48);
          v26 = BitmapBits;
          if ( BitmapBits )
          {
            v27 = Win32AllocPoolZInit(BitmapBits, 1129607282LL);
            v28 = (void *)v27;
            if ( v27 )
            {
              if ( (unsigned int)GreGetBitmapBits(*(_QWORD *)(v20 + 88), v26, v27, &v48) == v26 )
              {
                *((_QWORD *)a2 + 21) = v28;
                *((_DWORD *)a2 + 44) = v26;
              }
              else
              {
                Win32FreePool(v28);
              }
            }
          }
        }
      }
    }
    v29 = *(Gre::Base **)(v20 + 96);
    if ( v29 )
    {
      memset(&v37, 0, sizeof(v37));
      if ( (unsigned int)GreExtGetObjectW(v29, 32LL, &v37) )
      {
        v30 = *(__m128i *)&v37.bmType;
        v31 = *(_OWORD *)&v37.bmPlanes;
        v32 = *(__m128i *)&v37.bmType;
        *(_OWORD *)((char *)a2 + 184) = *(_OWORD *)&v37.bmType;
        *(_OWORD *)((char *)a2 + 200) = v31;
        v33 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v30, 8))
            * (unsigned __int64)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v32, 4));
        if ( v33 <= 0xFFFFFFFF )
        {
          v34 = 4LL * (unsigned int)v33;
          if ( v34 <= 0xFFFFFFFF )
          {
            v35 = (unsigned int *)Win32AllocPoolZInit((unsigned int)v34, 1129607282LL);
            v36 = v35;
            if ( v35 )
            {
              if ( CursorApiRouter::GetCursorColorPixels(*(HSURF *)(v20 + 96), &v37, v33, v35) )
              {
                *((_QWORD *)a2 + 27) = v36;
                *((_DWORD *)a2 + 56) = v34;
              }
              else
              {
                Win32FreePool(v36);
              }
            }
          }
        }
      }
    }
  }
}
