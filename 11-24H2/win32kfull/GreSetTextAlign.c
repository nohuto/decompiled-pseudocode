/*
 * XREFs of GreSetTextAlign @ 0x140038C8C
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

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v11[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v7 = v11[0];
  if ( v11[0] )
  {
    if ( *(_WORD *)(v11[0] + 12LL) != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      v7 = v11[0];
      if ( *(_WORD *)(v11[0] + 12LL) != 1 )
      {
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
        v7 = 0LL;
        v11[0] = 0LL;
      }
    }
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 976);
      v3 = *(_DWORD *)(v8 + 276);
      *(_DWORD *)(v8 + 276) = a2;
      v9 = *(_QWORD *)(v11[0] + 976LL);
      if ( (*(_DWORD *)(v9 + 108) & 1) != 0 && (a2 & 6) != 6 )
        LOBYTE(a2) = a2 ^ 2;
      *(_DWORD *)(v9 + 272) = a2 & 0x1F;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v3;
}
