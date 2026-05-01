/*
 * XREFs of ??$CreateRefCountedObj@ULauncherTipMenuCommand@CLauncherTipContextMenu@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@XZ @ 0x18018EBAC
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180067CFC (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ @ 0x180602AB8 (-_AddSeparator@CLauncherTipContextMenu@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall CreateRefCountedObj<CLauncherTipContextMenu::LauncherTipMenuCommand,>(__int64 *a1)
{
  _BYTE *v2; // rax

  v2 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[8] = 0;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    *((_QWORD *)v2 + 7) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
    *((_QWORD *)v2 + 9) = 0LL;
    *((_QWORD *)v2 + 10) = 0LL;
    *((_QWORD *)v2 + 11) = 0LL;
    *((_QWORD *)v2 + 12) = 0LL;
    *((_QWORD *)v2 + 13) = 0LL;
    *((_DWORD *)v2 + 28) = 2;
    *(_QWORD *)v2 = &CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>::`vftable';
    *((_DWORD *)v2 + 30) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = (__int64)v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
