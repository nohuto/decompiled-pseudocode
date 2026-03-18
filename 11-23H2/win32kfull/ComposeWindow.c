/*
 * XREFs of ComposeWindow @ 0x1C0026348
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C00206F8 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C00243EC (DecomposeWindowIfNeeded.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     UpdateWindowMonitor @ 0x1C00B0F70 (UpdateWindowMonitor.c)
 *     ComposeWindowIfNeeded @ 0x1C00B4A8C (ComposeWindowIfNeeded.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C00264A8 (UnsetLayeredWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     IsDesktopWindow @ 0x1C00B3188 (IsDesktopWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00B32C0 (UpdateWindowSpriteMonitor.c)
 *     _SetLayeredWindowAttributes @ 0x1C00B4BD0 (_SetLayeredWindowAttributes.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // esi
  void *v6; // rax
  __int64 v8; // rax
  char v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v10 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(a1) && *((_QWORD *)a1 + 3) != grpdeskRitInput )
      return 0;
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v4 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
      return (*(_BYTE *)(v4 + 26) & 8) == 0 ? 0x3E0001u : 0;
    if ( (*(_BYTE *)(v4 + 26) & 8) != 0 )
    {
      v8 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
      UpdateWindowSpriteMonitor(a1, v8);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9);
      }
      return 0;
    }
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
    v5 = xxxSetLayeredWindow(a1);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9);
    if ( v5 >= 0 )
    {
      v5 = SetLayeredWindowAttributes(a1);
      if ( v5 < 0 )
      {
        UnsetLayeredWindow(a1, 3LL);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
        v6 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v6);
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0 )
      v5 = UnsetLayeredWindow(a1, (a2 & 0x10 | 8u) >> 3);
    else
      v5 = 0;
    *((_DWORD *)a1 + 80) &= ~0x8000u;
  }
  return (unsigned int)v5;
}
