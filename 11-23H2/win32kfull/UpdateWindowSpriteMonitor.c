/*
 * XREFs of UpdateWindowSpriteMonitor @ 0x1C00B32C0
 * Callers:
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C00161D4 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     ComposeWindow @ 0x1C0026348 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     UpdateWindowMonitor @ 0x1C00B0F70 (UpdateWindowMonitor.c)
 *     SetRedirectedWindow @ 0x1C00B4DF0 (SetRedirectedWindow.c)
 * Callees:
 *     GreDwmNotifySpriteMonitorChange @ 0x1C00B3334 (GreDwmNotifySpriteMonitorChange.c)
 *     InitializeMonitorInfo @ 0x1C00B44FC (InitializeMonitorInfo.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall UpdateWindowSpriteMonitor(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE v7[80]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 )
  {
    v2 = a1[5];
    if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    {
      memset_0(v7, 0, 0x48uLL);
      InitializeMonitorInfo(v7, *(unsigned int *)(v2 + 288), a2, a1);
      return GreDwmNotifySpriteMonitorChange(v5, *a1, 0LL, v7);
    }
  }
  return result;
}
