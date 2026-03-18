/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C003B99C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 * Callees:
 *     SpbCheckPwnd @ 0x1C00138FC (SpbCheckPwnd.c)
 *     SetRedrawProp @ 0x1C003BD1C (SetRedrawProp.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a1 + 5);
  if ( a2 )
  {
    if ( (*(_BYTE *)(v2 + 31) & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0LL);
      SetVisible(a1);
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckPwnd(a1);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
      SetOrClrWF(1LL, a1, 264LL, 1LL);
    }
  }
  else if ( (*(_BYTE *)(v2 + 31) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheckPwnd(a1);
    SetRedrawProp(a1, 1LL);
    SetVisible(a1);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
}
