/*
 * XREFs of XmSetDestinationValue @ 0x14046908C
 * Callers:
 *     XmGroup2ByByte @ 0x1404681C0 (XmGroup2ByByte.c)
 *     XmFlagsRegister @ 0x140468420 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x140468460 (XmOpcodeRegister.c)
 *     XmGroup45General @ 0x140468620 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x1404686C0 (XmGroup1Immediate.c)
 *     XmGroup1General @ 0x140468D00 (XmGroup1General.c)
 *     XmAccumImmediate @ 0x140469000 (XmAccumImmediate.c)
 *     XmAccumRegister @ 0x140574DB0 (XmAccumRegister.c)
 *     XmGeneralBitOffset @ 0x140574F10 (XmGeneralBitOffset.c)
 *     XmGroup2By1 @ 0x140575040 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x1405750A0 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x140575100 (XmGroup3General.c)
 *     XmGroup7General @ 0x1405751A0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140575200 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x140575350 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1405753D0 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x140575660 (XmPopGeneral.c)
 *     XmPushPopSegment @ 0x140575730 (XmPushPopSegment.c)
 *     XmShiftDouble @ 0x140575820 (XmShiftDouble.c)
 *     XmPopaOp @ 0x140576460 (XmPopaOp.c)
 *     XmCmpsOp @ 0x1405769E0 (XmCmpsOp.c)
 *     XmScasOp @ 0x140576D10 (XmScasOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmSetDestinationValue(__int64 a1, unsigned __int16 *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = a2;
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
  *(_DWORD *)(a1 + 104) = result;
  return result;
}
