/*
 * XREFs of GreDPtoLP @ 0x140095424
 * Callers:
 *     xxxGetUpdateRect @ 0x140033B40 (xxxGetUpdateRect.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140096308 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z @ 0x14009565C (-GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z.c)
 */

__int64 __fastcall GreDPtoLP(HDC a1, struct tagPOINT *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+30h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepTransformPoints((struct XDCOBJ *)v5, a2, a2, 2, 0);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
