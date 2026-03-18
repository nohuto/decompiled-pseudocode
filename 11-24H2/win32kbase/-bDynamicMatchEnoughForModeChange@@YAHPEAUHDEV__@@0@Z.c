/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x140140CFC
 * Callers:
 *     bDynamicModeChange @ 0x140175A68 (bDynamicModeChange.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E5480 (DrvDxgkLogCodePointPacket.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140129460 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x140129DC8 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v4; // edx
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // ebx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // ebx
  int v25; // eax
  _DWORD *v26; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v27; // [rsp+68h] [rbp+10h] BYREF

  v26 = a2;
  v4 = 1;
  v27 = a1;
  if ( a1[523] == 1 || a2[523] == 1 )
    v4 = 0;
  v5 = 0;
  v6 = (unsigned int)(a2[452] ^ a1[452]);
  if ( (v6 & 0x840000) == 0 )
    v5 = v4;
  v7 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  if ( *(_DWORD *)(v7 + 1116) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    v10 = (unsigned int)a2[10];
    if ( (v10 & 1) != 0 && (v10 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v10 > 1) )
      v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    else
      v11 = a2[540];
    v12 = W32GetCurrentThreadDpiAwarenessContext(v10);
    v13 = (unsigned int)a1[10];
    if ( (v13 & 1) != 0 && (v13 = (v12 & 0xF) - 1, (unsigned int)v13 > 1) )
      v14 = (v12 >> 8) & 0x1FF;
    else
      v14 = a1[540];
    if ( v11 != v14
      || ((v15 = W32GetCurrentThreadDpiAwarenessContext(v13), v16 = (unsigned int)a2[10], (v16 & 1) != 0)
       && (v16 = (v15 & 0xF) - 1, (unsigned int)v16 > 1)
        ? (v17 = (v15 >> 8) & 0x1FF)
        : (v17 = a2[541]),
          (v18 = W32GetCurrentThreadDpiAwarenessContext(v16), (a1[10] & 1) != 0) && (v18 & 0xF) - 1 > 1
        ? (v19 = (v18 >> 8) & 0x1FF)
        : (v19 = a1[541]),
          v17 != v19) )
    {
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v26);
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v26);
      v20 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v27);
      v21 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v27);
      WdLogSingleEntry4(2LL, v21, v20);
      WdLogGlobalForLineNumber = 857;
      v22 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v26);
      v23 = v22 + ((unsigned int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v26) << 16);
      v24 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v27);
      v25 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v27);
      DrvDxgkLogCodePointPacket(95LL, v24 + (v25 << 16), v23, 0);
    }
  }
  if ( *((_QWORD *)a2 + 361)
    || *((_QWORD *)a2 + 379)
    || *((_QWORD *)a2 + 380)
    || *((_QWORD *)a2 + 386)
    || *((_QWORD *)a2 + 372) )
  {
    v5 = 0;
  }
  if ( *((_QWORD *)a1 + 361)
    || *((_QWORD *)a1 + 379)
    || *((_QWORD *)a1 + 380)
    || *((_QWORD *)a1 + 386)
    || *((_QWORD *)a1 + 372) )
  {
    return 0;
  }
  return v5;
}
