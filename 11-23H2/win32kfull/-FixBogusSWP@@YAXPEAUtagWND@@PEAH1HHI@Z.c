/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A55B4
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C00454F8 (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0045B40 (NtUserSetWindowPos.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00AE83C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     GetMonitorWorkRect @ 0x1C00D8B88 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00D8BCC (GetMonitorRect.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A5738 (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND **a1, int *a2, int *a3, int a4, int a5, char a6)
{
  struct tagMONITOR *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagWND *v14; // rdx
  int v15; // edi
  __int128 v16; // xmm0
  struct tagWND *v17; // rax
  __m128i v18; // xmm0
  unsigned __int64 v19; // xmm0_8
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v24[2]; // [rsp+30h] [rbp-28h] BYREF

  v10 = _MonitorFromWindowInternal(a1[15], 2LL, 0LL);
  if ( v10 != *(struct tagMONITOR **)(GetDispInfo(v12, v11, v13) + 96) )
  {
    if ( (a6 & 1) != 0 )
    {
      v14 = a1[5];
      a4 = *((_DWORD *)v14 + 24) - *((_DWORD *)v14 + 22);
      v15 = *((_DWORD *)v14 + 25) - *((_DWORD *)v14 + 23);
    }
    else
    {
      v15 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v15) )
    {
      v23 = 0LL;
      v16 = *(_OWORD *)GetMonitorRect((__int64 *)v24, (__int64)v10);
      v17 = a1[15];
      v24[0] = v16;
      IntersectRect(&v23, (int *)v24, (int *)(*((_QWORD *)v17 + 5) + 88LL));
      v24[0] = *GetMonitorWorkRect(v24, (__int64)v10);
      v18 = (__m128i)v24[0];
      *a2 = v23 + (DWORD2(v23) - (int)v23 - a4) / 2;
      v19 = _mm_srli_si128(v18, 8).m128i_u64[0];
      *a3 = DWORD1(v23) + (HIDWORD(v23) - DWORD1(v23) - v15) / 2;
      if ( a4 + *a2 > (int)v19 )
        *a2 = v19 - a4;
      if ( v15 + *a3 > SHIDWORD(v19) )
        *a3 = HIDWORD(v19) - v15;
      v20 = *(_QWORD *)&v24[0];
      if ( *a2 < SLODWORD(v24[0]) )
        *a2 = v24[0];
      v21 = *a3;
      v22 = HIDWORD(v20);
      if ( *a3 < (int)v22 )
        v21 = v22;
      *a3 = v21;
    }
  }
}
