/*
 * XREFs of ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180217880
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___ @ 0x1802A4948 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802C4FF4 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetChromeOptions(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r9d
  __int64 v7; // rbx
  char v8; // dl
  char v9; // cl
  int v10; // ecx
  bool v11; // si
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp+8h]
  __int64 v17; // [rsp+78h] [rbp+10h]

  v16 = a2;
  *(_DWORD *)(a1 + 576) |= a2;
  *(_DWORD *)(a1 + 580) = a2 & HIDWORD(a2) | *(_DWORD *)(a1 + 580) & ~(_DWORD)a2;
  v3 = 1LL;
  if ( (*(_BYTE *)(a1 + 604) & 2) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 584) & a2;
    if ( (v4 & 1) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 588) & 1) != 0 )
      {
        v5 = HIDWORD(a2) | 1;
        HIDWORD(v16) = HIDWORD(a2) | 1;
      }
      else
      {
        v5 = HIDWORD(a2) & 0xFFFFFFFE;
        HIDWORD(v16) = HIDWORD(a2) & 0xFFFFFFFE;
      }
    }
    else
    {
      v5 = HIDWORD(a2);
    }
    if ( (v4 & 0x80u) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 588) & 0x80) != 0 )
        v6 = v5 | 0x80;
      else
        v6 = v5 & 0xFFFFFF7F;
      HIDWORD(v16) = v6;
    }
  }
  v7 = v16;
  v8 = 0;
  LODWORD(v17) = v16;
  if ( (v16 & 4) != 0 && (*(_BYTE *)(a1 + 575) = (v16 & 0x400000000LL) != 0, *(_BYTE *)(a1 + 574)) )
  {
    v9 = BYTE4(v16) | 4;
    HIDWORD(v17) = HIDWORD(v16) | 4;
    v7 = v17;
  }
  else
  {
    v9 = BYTE4(v16);
  }
  if ( (v16 & 0x20) != 0 )
    *(_BYTE *)(a1 + 608) = (v9 & 0x20) != 0;
  if ( (v16 & 0x40) != 0 )
  {
    v10 = v9 & 0x40;
    v11 = v10 != 0;
    if ( *(_DWORD *)(a1 + 220) == 1 && !v10 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 216, 3LL);
      v8 = *(_BYTE *)(a1 + 52);
    }
    *(_BYTE *)(a1 + 572) = v11;
  }
  BYTE8(v13) = v8;
  *(_QWORD *)&v13 = v7;
  v14 = v13;
  v15 = a1;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___(a1, &v14, v3);
}
