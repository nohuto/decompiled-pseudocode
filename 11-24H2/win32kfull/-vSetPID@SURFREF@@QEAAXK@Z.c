/*
 * XREFs of ?vSetPID@SURFREF@@QEAAXK@Z @ 0x14019DB4C
 * Callers:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x140013C4C (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401B8A30 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vSetPID(SURFREF *this, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 5;
  HmgSetOwner(*(_QWORD *)(*((_QWORD *)this + 4) + 32LL), a2, a3);
}
