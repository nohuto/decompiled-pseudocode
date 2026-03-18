/*
 * XREFs of ChangeRedirectionParentInDCEs @ 0x1C002292C
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00229DC (RecreateRedirectionBitmap.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnredirectDCEs @ 0x1C00B300C (UnredirectDCEs.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01BC170 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 * Callees:
 *     UpdateRedirectedDCE @ 0x1C00224B0 (UpdateRedirectedDCE.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C00B30D4 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 */

__int64 __fastcall ChangeRedirectionParentInDCEs(struct tagWND *a1, int a2)
{
  __int64 i; // rbx
  int v5; // ecx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
  {
    v5 = *(_DWORD *)(i + 64);
    if ( (v5 & 0x4404800) == 0x4000
      && *(_QWORD *)(i + 16)
      && (v5 & 0x1000) != 0
      && (unsigned int)WindowMatchesDCE(a1, (const struct tagDCE *)i) )
    {
      UpdateRedirectedDCE(i, a2);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
