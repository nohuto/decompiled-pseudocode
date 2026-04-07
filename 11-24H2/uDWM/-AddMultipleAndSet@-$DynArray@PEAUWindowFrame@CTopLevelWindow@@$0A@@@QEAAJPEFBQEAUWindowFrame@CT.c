/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAAJPEFBQEAUWindowFrame@CTopLevelWindow@@I@Z @ 0x18000AABC
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18000AA30 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CTopLevelWindow::WindowFrame *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  int v5; // eax

  v2 = dword_180126AE0 + 1;
  if ( dword_180126AE0 + 1 < (unsigned int)dword_180126AE0 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB3u, 0LL);
  }
  else
  {
    v3 = 0;
    if ( v2 > dword_180126ADC )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(&CTopLevelWindow::s_rgpwfWindowFrames, 8LL, 1LL, a2);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xBEu, 0LL);
    }
    else
    {
      *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_180126AE0) = *a2;
      dword_180126AE0 = v2;
    }
  }
  return v3;
}
