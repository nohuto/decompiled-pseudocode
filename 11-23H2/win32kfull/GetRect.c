/*
 * XREFs of GetRect @ 0x1C00E1ED0
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ParkIcon @ 0x1C005FEC8 (ParkIcon.c)
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     UT_GetParentDCClipBox @ 0x1C0082E44 (UT_GetParentDCClipBox.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00B134C (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxGetScrollBarInfo @ 0x1C00E16CC (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C00E1B78 (CalcSBStuff.c)
 *     UpdateCheckpoint @ 0x1C00E1CF4 (UpdateCheckpoint.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00E28A0 (xxxDrawWindowFrame.c)
 *     InternalGetRealClientRect @ 0x1C00ECAE8 (InternalGetRealClientRect.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C01246F0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     SBCtlSetup @ 0x1C0229654 (SBCtlSetup.c)
 *     xxxScrollWindowEx @ 0x1C022E570 (xxxScrollWindowEx.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B054 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00B1464 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00B14A8 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall GetRect(const struct tagWND *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v6; // esi
  __int128 *v7; // rax
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned int *v13; // rdx
  unsigned int v14; // ecx
  const struct tagWND *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
    v19 = *(_OWORD *)(v3 + 88);
  else
    v18 = *(_OWORD *)(v3 + 104);
  v7 = &v18;
  if ( (a3 & 2) != 0 )
    v7 = &v19;
  *(_OWORD *)a2 = *v7;
  v8 = *((_QWORD *)a1 + 5);
  result = *(_WORD *)(v8 + 42) & 0x2FFF;
  if ( (_DWORD)result == 669 )
    return result;
  v10 = a3 & 0x70;
  switch ( v10 )
  {
    case 32:
      v13 = (unsigned int *)(v8 + 88);
LABEL_13:
      v14 = v13[1];
      result = *v13;
      *(_DWORD *)a2 -= result;
      *(_DWORD *)(a2 + 8) -= result;
      *(_DWORD *)(a2 + 12) -= v14;
      *(_DWORD *)(a2 + 4) -= v14;
      return result;
    case 16:
      v13 = (unsigned int *)(v8 + 104);
      goto LABEL_13;
    case 64:
      v11 = *((_QWORD *)a1 + 13);
      v12 = *(_QWORD *)(v11 + 40);
      result = *(_WORD *)(v12 + 42) & 0x2FFF;
      if ( (_DWORD)result != 669 )
      {
        v13 = (unsigned int *)(v12 + 104);
        if ( (((unsigned __int16)(*(_DWORD *)(v8 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v12 + 288) >> 8)) & 0x1FF) != 0 )
        {
          v15 = (const struct tagWND *)*((_QWORD *)a1 + 13);
          v18 = *(_OWORD *)v13;
          LogicalToPhysicalInPlaceRectWithSubpixel(v15, (int *)&v18, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, (int *)&v18, 0LL);
          v13 = (unsigned int *)&v18;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 26LL) & 0x40) != 0
          && v6
          && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
        {
          v16 = v13[1];
          v17 = v13[2];
          *(_DWORD *)(a2 + 12) -= v16;
          *(_DWORD *)(a2 + 4) -= v16;
          result = v17 - *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v17 - *(_DWORD *)a2;
          *(_DWORD *)a2 = result;
          return result;
        }
        goto LABEL_13;
      }
      break;
  }
  return result;
}
