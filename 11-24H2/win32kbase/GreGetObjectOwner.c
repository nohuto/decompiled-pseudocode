/*
 * XREFs of GreGetObjectOwner @ 0x1400BA870
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140061204 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C256C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetObjectOwner(__int64 a1, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // r8d
  __int64 v7; // r11
  unsigned int v8; // r10d
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // r9

  v3 = a1;
  v4 = -2147483614;
  v5 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 5672LL);
  v6 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)v5 <= 0x10000u )
    {
      v6 = (unsigned __int16)v3;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_DWORD *)(v7 + 2056);
      if ( (unsigned __int16)v3 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      {
        v12 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v3 >= v8 )
          v9 = (((unsigned __int16)v3 - v8) >> 16) + 1;
        else
          v9 = 0LL;
        v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
        if ( (_DWORD)v9 )
          v11 = (unsigned __int16)v3 + ((1 - (_DWORD)v9) << 16) - v8;
        else
          v11 = (unsigned __int16)v3;
        v12 = 0LL;
        if ( (unsigned int)v11 < *(_DWORD *)(v10 + 20) )
          v12 = *(_QWORD *)v10 + 24 * v11;
      }
      if ( *(unsigned __int8 *)(v12 + 13) == HIWORD(v6) )
        v6 = (unsigned __int16)v3;
    }
  }
  v13 = *(_QWORD *)(v5 + 16);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v6 < v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
  {
    if ( v6 >= v14 )
      v15 = ((v6 - v14) >> 16) + 1;
    else
      v15 = 0LL;
    v16 = *(_QWORD *)(v13 + 8 * v15 + 8);
    if ( (_DWORD)v15 )
      v6 += ((1 - (_DWORD)v15) << 16) - v14;
    v17 = 0LL;
    if ( v6 < *(_DWORD *)(v16 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                   + 16LL * (unsigned __int8)v6
                   + 8) )
    {
      v17 = *(_QWORD *)v16 + 24LL * v6;
    }
    if ( v17 && *(unsigned __int8 *)(v17 + 14) == a2 && *(_WORD *)(v17 + 12) == HIWORD(v3) )
      return *(_DWORD *)(v17 + 8) & 0xFFFFFFFE;
  }
  return v4;
}
