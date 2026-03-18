/*
 * XREFs of XmSetDataType @ 0x140469060
 * Callers:
 *     XmGroup2ByByte @ 0x1404681C0 (XmGroup2ByByte.c)
 *     XmGroup45General @ 0x140468620 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x1404686C0 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x140468C90 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140468D00 (XmGroup1General.c)
 *     XmPortDX @ 0x140468F80 (XmPortDX.c)
 *     XmAccumImmediate @ 0x140469000 (XmAccumImmediate.c)
 *     XmGroup2By1 @ 0x140575040 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x1405750A0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x140575100 (XmGroup3General.c)
 *     XmMoveImmediate @ 0x1405754F0 (XmMoveImmediate.c)
 *     XmPortImmediate @ 0x1405756B0 (XmPortImmediate.c)
 *     XmSegmentOffset @ 0x140575770 (XmSegmentOffset.c)
 *     XmStringOperands @ 0x1405758A0 (XmStringOperands.c)
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
