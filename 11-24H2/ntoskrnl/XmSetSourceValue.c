/*
 * XREFs of XmSetSourceValue @ 0x140461CF8
 * Callers:
 *     XmPopStack @ 0x140460AD8 (XmPopStack.c)
 *     XmFlagsRegister @ 0x140460DD0 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x140460E10 (XmOpcodeRegister.c)
 *     XmStosOp @ 0x140460EA0 (XmStosOp.c)
 *     XmGroup45General @ 0x140460FD0 (XmGroup45General.c)
 *     XmOutOp @ 0x140461300 (XmOutOp.c)
 *     XmMoveGeneral @ 0x140461640 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x1404616B0 (XmGroup1General.c)
 *     XmAccumRegister @ 0x140572240 (XmAccumRegister.c)
 *     XmBitScanGeneral @ 0x140572290 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x1405723A0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140572450 (XmGeneralRegister.c)
 *     XmGroup3General @ 0x140572590 (XmGroup3General.c)
 *     XmLoadSegment @ 0x140572860 (XmLoadSegment.c)
 *     XmMoveSegment @ 0x1405729D0 (XmMoveSegment.c)
 *     XmMoveXxGeneral @ 0x140572A40 (XmMoveXxGeneral.c)
 *     XmPushPopSegment @ 0x140572BC0 (XmPushPopSegment.c)
 *     XmSegmentOffset @ 0x140572C00 (XmSegmentOffset.c)
 *     XmShiftDouble @ 0x140572CB0 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x140572D50 (XmXlatOpcode.c)
 *     XmPushaOp @ 0x140573960 (XmPushaOp.c)
 *     XmOutsOp @ 0x140573B20 (XmOutsOp.c)
 *     XmCmpsOp @ 0x140573E70 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140574090 (XmLodsOp.c)
 *     XmMovsOp @ 0x140574110 (XmMovsOp.c)
 *     XmScasOp @ 0x1405741A0 (XmScasOp.c)
 *     XmBoundOp @ 0x140574480 (XmBoundOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetSourceValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 96) = a2;
  if ( v2 )
  {
    if ( v2 == 1 )
      result = *a2;
    else
      result = *(unsigned int *)a2;
  }
  else
  {
    result = *(unsigned __int8 *)a2;
  }
  *(_DWORD *)(a1 + 108) = result;
  return result;
}
