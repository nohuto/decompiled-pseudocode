/*
 * XREFs of XmSetSourceValue @ 0x140469348
 * Callers:
 *     XmPopStack @ 0x140468128 (XmPopStack.c)
 *     XmFlagsRegister @ 0x140468420 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x140468460 (XmOpcodeRegister.c)
 *     XmStosOp @ 0x1404684F0 (XmStosOp.c)
 *     XmGroup45General @ 0x140468620 (XmGroup45General.c)
 *     XmOutOp @ 0x140468950 (XmOutOp.c)
 *     XmMoveGeneral @ 0x140468C90 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140468D00 (XmGroup1General.c)
 *     XmAccumRegister @ 0x140574DB0 (XmAccumRegister.c)
 *     XmBitScanGeneral @ 0x140574E00 (XmBitScanGeneral.c)
 *     XmGeneralBitOffset @ 0x140574F10 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140574FC0 (XmGeneralRegister.c)
 *     XmGroup3General @ 0x140575100 (XmGroup3General.c)
 *     XmLoadSegment @ 0x1405753D0 (XmLoadSegment.c)
 *     XmMoveSegment @ 0x140575540 (XmMoveSegment.c)
 *     XmMoveXxGeneral @ 0x1405755B0 (XmMoveXxGeneral.c)
 *     XmPushPopSegment @ 0x140575730 (XmPushPopSegment.c)
 *     XmSegmentOffset @ 0x140575770 (XmSegmentOffset.c)
 *     XmShiftDouble @ 0x140575820 (XmShiftDouble.c)
 *     XmXlatOpcode @ 0x1405758C0 (XmXlatOpcode.c)
 *     XmPushaOp @ 0x1405764D0 (XmPushaOp.c)
 *     XmOutsOp @ 0x140576690 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1405769E0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x140576C00 (XmLodsOp.c)
 *     XmMovsOp @ 0x140576C80 (XmMovsOp.c)
 *     XmScasOp @ 0x140576D10 (XmScasOp.c)
 *     XmBoundOp @ 0x140576FF0 (XmBoundOp.c)
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
