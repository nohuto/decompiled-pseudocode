/*
 * XREFs of GrePolyPatBlt @ 0x1C0046320
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00065F8 (-UT_InvertCaret@@YAXXZ.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0041B04 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     _DrawIconEx @ 0x1C0042310 (_DrawIconEx.c)
 *     FillRect @ 0x1C004579C (FillRect.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C008D198 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     DrawFrameControl @ 0x1C011A100 (DrawFrameControl.c)
 *     DrawSize @ 0x1C0229518 (DrawSize.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0232E58 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0233030 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C02343FC (xxxDrawMenuItem.c)
 *     xxxMenuBarDraw @ 0x1C0235598 (xxxMenuBarDraw.c)
 *     xxxDrawState @ 0x1C023EE40 (xxxDrawState.c)
 *     ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C024B8D4 (-DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z.c)
 *     ClientFrame @ 0x1C024BC6C (ClientFrame.c)
 *     DrawFrame @ 0x1C024BD88 (DrawFrame.c)
 * Callees:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0049090 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011D240 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GrePolyPatBlt(HDC a1, unsigned int a2, struct _POLYPATBLT *a3, unsigned int a4, int a5)
{
  DC *v9; // rcx
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v11; // ebx
  DC *v12; // r9
  struct _DC_ATTR *v13; // rax
  __int64 v14; // rdi
  DC *v16; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+58h] [rbp-28h]
  unsigned int v18; // [rsp+5Ch] [rbp-24h]
  _BYTE v19[32]; // [rsp+60h] [rbp-20h] BYREF

  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v19);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v16, a1);
  v9 = v16;
  if ( v16 )
  {
    if ( (*((_DWORD *)v16 + 11) & 2) == 0 )
    {
      if ( !v18 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v16);
        if ( UserAttr && !DC::SaveAttributes(v16, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v16 + 3);
          v16 = 0LL;
          v11 = 0;
LABEL_12:
          EngSetLastError(6u);
          goto LABEL_14;
        }
        v9 = v16;
      }
      *((_DWORD *)v9 + 11) |= 2u;
      v9 = v16;
      v17 = 1;
    }
    if ( (*((_DWORD *)v9 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v9);
      v9 = v16;
    }
  }
  v11 = 0;
  if ( !v9 )
    goto LABEL_12;
  v11 = GrePolyPatBltInternal(
          (struct XDCOBJ *)&v16,
          a2,
          a3,
          a4,
          0,
          *(_DWORD *)(*((_QWORD *)v9 + 122) + 184LL),
          *(_DWORD *)(*((_QWORD *)v9 + 122) + 176LL),
          *(_DWORD *)(*((_QWORD *)v9 + 122) + 188LL),
          *(_DWORD *)(*((_QWORD *)v9 + 122) + 180LL));
LABEL_14:
  v12 = v16;
  if ( v16 )
  {
    if ( v17 && (*((_DWORD *)v16 + 11) & 2) != 0 )
    {
      if ( !v18 )
      {
        v13 = XDCOBJ::GetUserAttr((XDCOBJ *)&v16);
        if ( v13 )
          DC::RestoreAttributes(v16, v13);
        v12 = v16;
      }
      *((_DWORD *)v12 + 11) &= ~2u;
      v17 = 0;
      v12 = v16;
    }
    a5 = 0;
    v14 = *(_QWORD *)v12;
    HmgDecrementExclusiveReferenceCountEx(v12, v18, &a5);
    if ( a5 )
      GrepDeleteDC(v14, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
  return v11;
}
