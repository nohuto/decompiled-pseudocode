/*
 * XREFs of ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C002F20C
 * Callers:
 *     _VisrgnFromWindow @ 0x1C00209E8 (_VisrgnFromWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002E5BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C002EF98 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1C002F1B0 (NtUserGhostWindowFromHungWindow.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00EA148 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     DWP_GetEnabledPopup @ 0x1C0156ABC (DWP_GetEnabledPopup.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

struct tagWND *__fastcall _GhostWindowFromHungWindow(const struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 Prop; // rax
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v7; // rax

  v2 = 0LL;
  if ( **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL);
    if ( Prop )
    {
      v5 = Prop == -1;
    }
    else
    {
      Prop = GetProp(a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL);
      v5 = Prop == 0;
    }
    if ( !v5 )
    {
      LOBYTE(v4) = 1;
      v7 = HMValidateHandleNoSecure(Prop, v4);
      v2 = v7;
      if ( v7 )
      {
        if ( (unsigned int)IsWindowBeingDestroyed(v7) )
          return 0LL;
      }
    }
  }
  return (struct tagWND *)v2;
}
