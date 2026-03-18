/*
 * XREFs of GreGetTextAlign @ 0x1C02D7170
 * Callers:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C003CBAC (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     DrawFrameControl @ 0x1C011A100 (DrawFrameControl.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0224F44 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022B7E4 (xxxDrawCaptionTemp.c)
 *     _ServerFixupMenuDC @ 0x1C023424C (_ServerFixupMenuDC.c)
 *     xxxMNInvertItem @ 0x1C0234DB0 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C0235944 (xxxMenuDraw.c)
 *     CreateCompatiblePublicDC @ 0x1C023EC2C (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x1C023EE40 (xxxDrawState.c)
 *     DrawTextExWorker @ 0x1C024C94C (DrawTextExWorker.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 276LL);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return v1;
  }
  else
  {
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v4);
    return 0LL;
  }
}
