/*
 * XREFs of ??$GetFirstNonNull@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x180008AAC
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18003B874 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetFirstNonNull<CSpriteVisual,CAccent,CSystemBackdropVisual>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD v6[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+18h] [rbp-10h] BYREF

  v6[0] = a2;
  v4 = v6;
  v6[1] = a3;
  v6[2] = a4;
  while ( !*v4 )
  {
    if ( ++v4 == &v7 )
      return 0LL;
  }
  return *v4;
}
