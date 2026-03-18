/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C1054
 * Callers:
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00BA8D0 (DrvDxgkLogCodePointPacket.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C015F764 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C015F7A8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v6; // r12d
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // edi
  int v16; // ebx
  unsigned int v17; // eax
  _DWORD *v18; // [rsp+60h] [rbp+30h] BYREF
  _DWORD *v19; // [rsp+68h] [rbp+38h] BYREF

  v18 = a2;
  v3 = 1;
  v19 = a1;
  if ( a1[519] == 1 || a2[519] == 1 )
    v3 = 0;
  v6 = 0;
  v7 = (unsigned int)(a2[448] ^ a1[448]);
  if ( (v7 & 0x840000) == 0 )
    v6 = v3;
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 1284LL) )
  {
    v8 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
    if ( v8 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v19)
      || (v9 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18), v9 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v19)) )
    {
      v10 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18);
      v11 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
      v12 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v19);
      v13 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v19);
      WdLogSingleEntry4(2LL, v13, v12, v11, v10);
      v14 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
      v15 = v14 + (PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18) << 16);
      v16 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v19);
      v17 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v19);
      DrvDxgkLogCodePointPacket(95LL, v16 + (v17 << 16), v15, 0);
    }
  }
  if ( *((_QWORD *)a2 + 359)
    || *((_QWORD *)a2 + 377)
    || *((_QWORD *)a2 + 378)
    || *((_QWORD *)a2 + 384)
    || *((_QWORD *)a2 + 370) )
  {
    v6 = 0;
  }
  if ( *((_QWORD *)a1 + 359)
    || *((_QWORD *)a1 + 377)
    || *((_QWORD *)a1 + 378)
    || *((_QWORD *)a1 + 384)
    || *((_QWORD *)a1 + 370) )
  {
    return 0;
  }
  return v6;
}
