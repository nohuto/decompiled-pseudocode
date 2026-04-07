/*
 * XREFs of ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z @ 0x18001F250
 * Callers:
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x18001F1B0 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 * Callees:
 *     McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer @ 0x18001F340 (McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer.c)
 */

void __fastcall CAnimatedTransitionVisual::_LogVisualBeginAndEndValues(CAnimatedTransitionVisual *this, int a2)
{
  __int64 v2; // r8
  int v3; // eax

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v2 = *((_QWORD *)this + 3);
    LOBYTE(v3) = 0;
    if ( v2 )
      v3 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 24LL);
    McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer(
      (_DWORD)this,
      a2,
      *((_DWORD *)this + 184),
      *((_DWORD *)this + 185),
      *((_DWORD *)this + 214),
      *((_DWORD *)this + 215),
      *((_DWORD *)this + 216),
      *((_DWORD *)this + 217),
      *((_DWORD *)this + 218),
      *((_DWORD *)this + 219),
      *((_DWORD *)this + 220),
      *((_DWORD *)this + 221),
      *((_DWORD *)this + 232),
      *((_DWORD *)this + 233),
      *((_DWORD *)this + 230),
      *((_DWORD *)this + 231),
      v3,
      *((_DWORD *)this + 240),
      a2);
  }
}
