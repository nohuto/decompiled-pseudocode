/*
 * XREFs of ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00E8394
 * Callers:
 *     NtUserHungWindowFromGhostWindow @ 0x1C0097C30 (NtUserHungWindowFromGhostWindow.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00E82C4 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

struct tagWND *__fastcall _HungWindowFromGhostWindow(const struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v4; // r9
  __int64 Prop; // rax
  __int64 v6; // r9
  __int64 v7; // rax

  v2 = 0LL;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL, v4);
    if ( Prop || (Prop = GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL, v6)) != 0 )
    {
      v7 = HMValidateHandleNoSecure(Prop, 1);
      v2 = v7;
      if ( v7 && (unsigned int)IsWindowBeingDestroyed(v7) )
        return 0LL;
    }
  }
  return (struct tagWND *)v2;
}
