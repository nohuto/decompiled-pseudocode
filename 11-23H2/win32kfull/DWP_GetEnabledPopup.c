/*
 * XREFs of DWP_GetEnabledPopup @ 0x1C0156ABC
 * Callers:
 *     GetActiveTrackPwnd @ 0x1C01B60AC (GetActiveTrackPwnd.c)
 *     NtUserDWP_GetEnabledPopupOffset @ 0x1C01CDAA0 (NtUserDWP_GetEnabledPopupOffset.c)
 *     xxxActivateEnabledPopup @ 0x1C0222368 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C0222478 (xxxFlashEnabledPopup.c)
 * Callees:
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C002F20C (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

struct tagWND *__fastcall DWP_GetEnabledPopup(const struct tagWND *a1)
{
  const struct tagWND *v1; // rbx
  int v2; // r8d
  const struct tagWND *i; // rax
  struct tagWND *v5; // rax

  v1 = (const struct tagWND *)*((_QWORD *)a1 + 11);
  v2 = 0;
  while ( v1 != a1 )
  {
    if ( v1 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v1 + 2) + 432LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)
        && (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x18) == 0x10 )
      {
        for ( i = (const struct tagWND *)*((_QWORD *)v1 + 15); i; i = (const struct tagWND *)*((_QWORD *)i + 15) )
        {
          if ( i == a1 )
          {
            v5 = _GhostWindowFromHungWindow(v1);
            if ( v5 )
              return v5;
            return v1;
          }
        }
      }
      v1 = (const struct tagWND *)*((_QWORD *)v1 + 11);
    }
    else
    {
      if ( v2 )
        return 0LL;
      v2 = 1;
      v1 = *(const struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
    }
  }
  return 0LL;
}
