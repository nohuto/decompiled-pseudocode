/*
 * XREFs of ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1C01BBF08
 * Callers:
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C73BC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 * Callees:
 *     IsMotherDesktopWindow @ 0x1C002149C (IsMotherDesktopWindow.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 */

void DwmNotifyWindowsMarginsChangeByTheme(void)
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rdi
  __int64 *v2; // rsi
  struct tagWND *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  v0 = gSharedInfo[1];
  v1 = v0 + 32LL * giheLast;
  v2 = (__int64 *)gpKernelHandleTable;
  while ( v0 <= v1 )
  {
    if ( *v2 && *(_BYTE *)(v0 + 24) == 1 && (*(_BYTE *)(v0 + 25) & 1) == 0 && !(unsigned int)IsMotherDesktopWindow(*v2) )
    {
      v4 = *((_QWORD *)v3 + 3);
      v5 = 0LL;
      if ( v4 )
        v5 = *(_QWORD *)(v4 + 104);
      if ( *((_QWORD *)v3 + 13) != v5 )
        WindowMargins::CheckForChanges(v3, 2);
    }
    v0 += 32LL;
    v2 += 3;
  }
}
