/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0013074
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x1C0012F90 (NtUserRestoreWindowDpiChanges.c)
 * Callees:
 *     xxxNotifyMonitorChanged @ 0x1C00A4DDC (xxxNotifyMonitorChanged.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00B1B08 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(struct tagWND *a1)
{
  __int16 v2; // si
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 Prop; // rax
  int v7; // ecx

  v2 = *(_WORD *)(*((_QWORD *)a1 + 5) + 286LL);
  if ( !v2 )
    return 0LL;
  if ( !(unsigned int)IsTopLevelWindow() && *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 104) + 40LL) + 286LL) )
  {
    *((_DWORD *)a1 + 80) &= ~0x40u;
    return 1LL;
  }
  else
  {
    result = SetDeferredDpiStateForWindowAndChildren(a1);
    v5 = result;
    if ( v2 == *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL) )
    {
      *((_DWORD *)a1 + 80) &= ~0x40000u;
    }
    else
    {
      Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL);
      if ( Prop )
      {
        v7 = *(_DWORD *)(Prop + 48);
        if ( (v7 & 0x80u) != 0 )
          *(_DWORD *)(Prop + 48) = v7 & 0xFFFFFF7F;
      }
      xxxNotifyMonitorChanged(a1);
      return v5;
    }
  }
  return result;
}
