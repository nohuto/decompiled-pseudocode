/*
 * XREFs of ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x14022ABC8
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     SelectWindowRgn @ 0x140030A9C (SelectWindowRgn.c)
 *     IsSmallerThanScreen @ 0x1400F7364 (IsSmallerThanScreen.c)
 *     Feature_FixMaxWindowClipWhenMoved__private_IsEnabledDeviceUsageNoInline @ 0x14026FB38 (Feature_FixMaxWindowClipWhenMoved__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall FixupMonitorRgn(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx

  v3 = (unsigned __int8)a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 8) != 0 )
  {
    if ( ***(_DWORD ***)(W32GetUserSessionState(a1, a2) + 57008) <= 1u || IsSmallerThanScreen(a1) )
    {
      v4 = 0LL;
      goto LABEL_8;
    }
    if ( (unsigned int)Feature_FixMaxWindowClipWhenMoved__private_IsEnabledDeviceUsageNoInline()
      || !*(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) )
    {
      v4 = 2LL;
LABEL_8:
      SelectWindowRgn(a1, v4, v3);
    }
  }
}
