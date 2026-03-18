/*
 * XREFs of GreGetTextAlign @ 0x1401F1C90
 * Callers:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x14007A904 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     DrawTextExWorker @ 0x14007C800 (DrawTextExWorker.c)
 *     _ServerFixupMenuDC @ 0x14015A1FC (_ServerFixupMenuDC.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1401EA0E8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     CreateCompatiblePublicDC @ 0x1401EE788 (CreateCompatiblePublicDC.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB398 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _QWORD v4[11]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = v4[0];
  if ( !v4[0] )
    goto LABEL_6;
  if ( *(_WORD *)(v4[0] + 12LL) != 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v1 = v4[0];
    if ( *(_WORD *)(v4[0] + 12LL) != 1 )
    {
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v4);
      v1 = 0LL;
      v4[0] = 0LL;
    }
  }
  if ( v1 )
    v2 = *(_DWORD *)(*(_QWORD *)(v1 + 976) + 276LL);
  else
LABEL_6:
    v2 = 0;
  DCOBJ::~DCOBJ((DCOBJ *)v4);
  return v2;
}
