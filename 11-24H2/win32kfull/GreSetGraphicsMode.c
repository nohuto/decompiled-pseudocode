/*
 * XREFs of GreSetGraphicsMode @ 0x140038D44
 * Callers:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x14007A904 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetGraphicsMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[15]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_QWORD *)(v6[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 208);
    if ( (unsigned int)(a2 - 1) <= 1 )
      *(_DWORD *)(v4 + 208) = a2;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v3;
}
