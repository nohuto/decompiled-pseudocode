/*
 * XREFs of InvalidateGDIWindows @ 0x14026C3C4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     InvalidateGDIWindows @ 0x14026C3C4 (InvalidateGDIWindows.c)
 * Callees:
 *     CalcVisRgn @ 0x1400437F0 (CalcVisRgn.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     InvalidateGDIWindows @ 0x14026C3C4 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1403018D8 (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(const struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  struct EWNDOBJ *v5; // rdi
  unsigned int v6; // r9d
  __int64 i; // rbx
  HRGN v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41406), 1u);
    v5 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v8 = 0LL;
      if ( (*(_DWORD *)(Prop + 184) & 0x20) != 0 )
        v6 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 1;
      else
        v6 = 24;
      CalcVisRgn(&v8, (__int64)a1, a1, v6);
      GreSetClientRgn(v5);
    }
    for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      InvalidateGDIWindows(i);
  }
}
