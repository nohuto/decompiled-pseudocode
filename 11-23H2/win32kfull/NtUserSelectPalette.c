/*
 * XREFs of NtUserSelectPalette @ 0x1C00763A0
 * Callers:
 *     <none>
 * Callees:
 *     _IsChild @ 0x1C0016C3C (_IsChild.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     GetThreadDesktopWindow @ 0x1C00E9600 (GetThreadDesktopWindow.c)
 *     WindowFromCacheDC @ 0x1C01BD6CC (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0214474 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserSelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct tagWND *v10; // rsi
  _QWORD *NonChildAncestor; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  EnterCrit(0LL, 0LL);
  v6 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v10 = (struct tagWND *)v7;
    if ( v7 )
    {
      NonChildAncestor = (_QWORD *)GetNonChildAncestor(v7, v8, v9);
      if ( (*(_BYTE *)(NonChildAncestor[5] + 18LL) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (_QWORD *)GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(NonChildAncestor[2] + 488LL) |= 0x800u;
        SetOrClrWF(1LL, NonChildAncestor, 544LL, 1LL);
      }
      if ( gpqForeground )
        v12 = *(_QWORD *)(gpqForeground + 128LL);
      else
        v12 = 0LL;
      v13 = *(_QWORD *)(NonChildAncestor[3] + 8LL);
      if ( NonChildAncestor != *(_QWORD **)(v13 + 24)
        && NonChildAncestor != *(_QWORD **)(v13 + 168)
        && v12
        && ((struct tagWND *)v12 == v10
         || (unsigned int)IsChild(v12, (__int64)v10)
         || (unsigned int)IsTopmostRealApp(v10))
        && *(char *)(*((_QWORD *)v10 + 5) + 24LL) >= 0 )
      {
        v6 = 0;
      }
    }
  }
  v14 = GreSelectPalette(a1, a2, v6);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v14;
}
