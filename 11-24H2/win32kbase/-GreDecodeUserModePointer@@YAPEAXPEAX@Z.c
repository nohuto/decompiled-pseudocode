/*
 * XREFs of ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x14000D050
 * Callers:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x14000D8C0 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x140034BE0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C577C (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GreDecodeUserModePointer(void *a1)
{
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rdx

  if ( !a1 )
    return 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
  {
    if ( PsGetProcessWow64Process(*CurrentProcessWin32Process) )
    {
      return *((unsigned int *)v3 + 70) ^ (unsigned __int64)(unsigned int)__ROR4__((_DWORD)a1, 32 - (v3[35] & 0x1F));
    }
    else
    {
      if ( (*((_DWORD *)v3 + 69) & 0x20) != 0 )
        v4 = *((unsigned int *)v3 + 70);
      else
        v4 = v3[35];
      return v4 ^ __ROR8__(a1, 64 - ((unsigned __int8)v4 & 0x3Fu));
    }
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    return 0LL;
  }
}
