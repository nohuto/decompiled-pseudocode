/*
 * XREFs of UnredirectDCEs @ 0x1C00B300C
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C0026E50 (UnsetRedirectedWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00F4184 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     UpdateRedirectedDCE @ 0x1C00224B0 (UpdateRedirectedDCE.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C002292C (ChangeRedirectionParentInDCEs.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00B30D4 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     GetStyleWindow @ 0x1C01199B0 (GetStyleWindow.c)
 */

__int64 __fastcall UnredirectDCEs(struct tagWND *a1)
{
  __int64 i; // rbx
  __int16 v3; // r11

  if ( GetStyleWindow(a1, 2848LL) )
    return ChangeRedirectionParentInDCEs(a1, 0);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 64) & 0x4400800) == 0
      && *(_QWORD *)(i + 16)
      && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i)
      && (v3 & 0x1002) != 2 )
    {
      UpdateRedirectedDCE(i, 0);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
