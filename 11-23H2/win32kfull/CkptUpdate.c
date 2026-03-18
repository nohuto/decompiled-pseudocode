/*
 * XREFs of CkptUpdate @ 0x1C00E1E24
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C00E1D4C (CkptRestore.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00B04A0 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00E82C4 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 */

char __fastcall CkptUpdate(struct tagWND *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // cl
  int v7; // eax
  _OWORD *v8; // r8
  __int128 *v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rdx
  int v12; // edx
  __int64 v13; // r8
  struct tagMONITOR *v14; // rax
  struct tagRECT *MonitorMaxArea; // rax
  struct tagRECT v16; // xmm0
  struct tagRECT v18; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v6 & 0x20) != 0 )
  {
    a3[12] |= 0x20u;
    a3[8] = *a2;
    v7 = a2[1];
    a3[9] = v7;
  }
  else if ( (v6 & 1) != 0 )
  {
    v11 = a3[12] | 0x40u;
    a3[12] = v11;
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, v11) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x40) != 0 )
      {
        v7 = -1;
        *(_DWORD *)(v13 + 48) = v12 & 0xFFFFFFBF;
        *(_DWORD *)(v13 + 40) = -1;
      }
      else
      {
        v14 = (struct tagMONITOR *)MonitorFromRect((__int64)a2, 1LL, 0LL);
        MonitorMaxArea = GetMonitorMaxArea(&v18, a1, v14);
        v16 = *MonitorMaxArea;
        a3[10] = *a2 - *(_OWORD *)MonitorMaxArea;
        v7 = a2[1] - v16.top;
      }
    }
    else
    {
      *(_DWORD *)(v13 + 40) = *a2;
      v7 = a2[1];
    }
    a3[11] = v7;
  }
  else
  {
    LOBYTE(v7) = IsSemiMaximized(a1);
    v10 = *v9;
    if ( (_BYTE)v7 )
      v8[1] = v10;
    else
      *v8 = v10;
  }
  return v7;
}
