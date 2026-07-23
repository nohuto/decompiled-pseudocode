/*
 * XREFs of XmSetDataType @ 0x140461A10
 * Callers:
 *     XmGroup2ByByte @ 0x140460B70 (XmGroup2ByByte.c)
 *     XmGroup45General @ 0x140460FD0 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x140461070 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x140461640 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404616B0 (XmGroup1General.c)
 *     XmPortDX @ 0x140461930 (XmPortDX.c)
 *     XmAccumImmediate @ 0x1404619B0 (XmAccumImmediate.c)
 *     XmGroup2By1 @ 0x1405724D0 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x140572530 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x140572590 (XmGroup3General.c)
 *     XmMoveImmediate @ 0x140572980 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x140572B40 (XmPortImmediate.c)
 *     XmSegmentOffset @ 0x140572C00 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x140572D30 (XmStringOperands.c)
 * Callees:
 *     <none>
 */

char __fastcall XmSetDataType(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 112);
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = -*(_BYTE *)(a1 + 138);
    *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 0;
  }
  return v1;
}
