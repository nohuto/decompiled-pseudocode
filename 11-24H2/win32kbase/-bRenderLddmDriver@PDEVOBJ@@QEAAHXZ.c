/*
 * XREFs of ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x140015580
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x14012FFF0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x140101DE0 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 */

__int64 __fastcall PDEVOBJ::bRenderLddmDriver(PDEVOBJ *this)
{
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v8; // rsi
  __int64 v9; // rax

  v2 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( ((v2 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
  {
    v3 = *(_DWORD *)(v2 + 160);
    v4 = 0;
    v5 = v3 & 0x800000;
    if ( (v3 & 0x4000000) == 0 )
    {
      v6 = (_DWORD)v5 == 0;
LABEL_4:
      LOBYTE(v4) = !v6;
      return v4;
    }
    v6 = (_DWORD)v5 == 0;
    if ( (_DWORD)v5 )
      goto LABEL_4;
    v8 = *(_QWORD *)(W32GetSessionState(this, v5) + 88);
    if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() )
    {
      v9 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
      if ( (*(_DWORD *)(v9 + 160) & 0x4000000) != 0 || *(_DWORD *)(v8 + 1052) )
      {
        v6 = *(_QWORD *)(v9 + 272) == 0LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
