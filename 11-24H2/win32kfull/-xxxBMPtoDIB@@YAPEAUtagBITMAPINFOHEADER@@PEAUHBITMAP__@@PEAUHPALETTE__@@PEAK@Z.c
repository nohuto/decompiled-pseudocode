/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14021D99C
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B2678 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B281C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetDIBitsInternal @ 0x140180F68 (GreGetDIBitsInternal.c)
 *     _SelectPalette @ 0x140186450 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1401D6620 (xxxRealizePalette.c)
 */

struct tagBITMAPINFOHEADER *__fastcall xxxBMPtoDIB(Gre::Base *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // cx
  unsigned int v8; // r12d
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r14
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *v15; // rbx
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  HDC CompatibleDC; // rsi
  __int64 v22; // r15
  struct tagTHREADINFO *v23; // rax
  int DIBitsInternal; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  int v29; // [rsp+38h] [rbp-39h]
  _QWORD v30[5]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v31; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v32; // [rsp+90h] [rbp+1Fh]

  v31 = 0LL;
  v32 = 0LL;
  v5 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 32LL, &v31) )
  {
    v6 = v32 * WORD1(v32);
    if ( (unsigned __int16)(v32 * WORD1(v32)) > 1u )
    {
      v7 = 4;
      if ( v6 > 4u )
      {
        if ( v6 > 8u )
        {
          if ( *((_WORD *)PtiCurrent(4LL, 8LL) + 336) < 0x400u )
          {
            v7 = 24;
          }
          else if ( v6 > 0x10u )
          {
            v7 = 24;
            if ( v6 > 0x18u )
              v7 = 32;
          }
          else
          {
            v7 = 16;
          }
        }
        else
        {
          v7 = 8;
        }
      }
    }
    else
    {
      v7 = 1;
    }
    v8 = DWORD2(v31);
    *(_QWORD *)((char *)v30 + 4) = *(_QWORD *)((char *)&v31 + 4);
    v9 = v7 * (unsigned __int64)DWORD1(v31);
    LODWORD(v30[0]) = 40;
    WORD2(v30[1]) = 1;
    HIWORD(v30[1]) = v7;
    memset(&v30[2], 0, 24);
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = DWORD2(v31) * (unsigned __int64)(((unsigned int)(v9 + 31) >> 3) & 0x1FFFFFFC);
      if ( v10 <= 0xFFFFFFFF )
      {
        if ( v7 > 8u )
        {
          if ( ((v7 - 16) & 0xFFEF) == 0 )
          {
            v5 = 12;
            LODWORD(v30[2]) = 3;
          }
        }
        else
        {
          v5 = 4 * (1 << v7);
        }
        v11 = v5 + 40 + v10;
        if ( v11 >= v5 + 40 )
        {
          v12 = Win32AllocPoolZInit(v11, 1650684757LL);
          v15 = (unsigned int *)v12;
          if ( v12 )
          {
            if ( a3 )
              *a3 = v11;
            v16 = *(_OWORD *)&v30[2];
            *(_OWORD *)v12 = *(_OWORD *)v30;
            v17 = v30[4];
            *(_OWORD *)(v12 + 16) = v16;
            *(_QWORD *)(v12 + 32) = v17;
            UserSessionState = W32GetUserSessionState(v14, v13);
            CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 64LL));
            if ( CompatibleDC )
            {
              v22 = 0LL;
              v23 = PtiCurrent(v20, v19);
              v30[0] = *((_QWORD *)v23 + 48);
              *((_QWORD *)v23 + 48) = v30;
              v30[2] = Win32FreePool;
              v30[1] = v15;
              if ( a2 )
              {
                v22 = SelectPalette((__int64)CompatibleDC, a2, 0);
                xxxRealizePalette(CompatibleDC);
              }
              DIBitsInternal = GreGetDIBitsInternal(
                                 CompatibleDC,
                                 (HSURF)a1,
                                 (__int64)v15 + *v15 + v5,
                                 v8,
                                 (__int64)v15 + *v15 + v5,
                                 v15,
                                 v29,
                                 v10,
                                 *v15 + v5);
              if ( v22 )
              {
                SelectPalette((__int64)CompatibleDC, v22, 0);
                xxxRealizePalette(CompatibleDC);
              }
              GreDeleteDC(CompatibleDC);
              v27 = PtiCurrent(v26, v25);
              *((_QWORD *)v27 + 48) = v30[0];
              if ( DIBitsInternal )
                return (struct tagBITMAPINFOHEADER *)v15;
            }
            Win32FreePool(v15);
          }
        }
      }
    }
  }
  return 0LL;
}
