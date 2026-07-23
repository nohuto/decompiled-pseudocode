/*
 * XREFs of XmSetDestinationValue @ 0x140461A3C
 * Callers:
 *     XmGroup2ByByte @ 0x140460B70 (XmGroup2ByByte.c)
 *     XmFlagsRegister @ 0x140460DD0 (XmFlagsRegister.c)
 *     XmOpcodeRegister @ 0x140460E10 (XmOpcodeRegister.c)
 *     XmGroup45General @ 0x140460FD0 (XmGroup45General.c)
 *     XmGroup1Immediate @ 0x140461070 (XmGroup1Immediate.c)
 *     XmGroup1General @ 0x1404616B0 (XmGroup1General.c)
 *     XmAccumImmediate @ 0x1404619B0 (XmAccumImmediate.c)
 *     XmAccumRegister @ 0x140572240 (XmAccumRegister.c)
 *     XmGeneralBitOffset @ 0x1405723A0 (XmGeneralBitOffset.c)
 *     XmGroup2By1 @ 0x1405724D0 (XmGroup2By1.c)
 *     XmGroup2ByCL @ 0x140572530 (XmGroup2ByCL.c)
 *     XmGroup3General @ 0x140572590 (XmGroup3General.c)
 *     XmGroup7General @ 0x140572630 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x140572690 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1405727E0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140572860 (XmLoadSegment.c)
 *     XmPopGeneral @ 0x140572AF0 (XmPopGeneral.c)
 *     XmPushPopSegment @ 0x140572BC0 (XmPushPopSegment.c)
 *     XmShiftDouble @ 0x140572CB0 (XmShiftDouble.c)
 *     XmPopaOp @ 0x1405738F0 (XmPopaOp.c)
 *     XmCmpsOp @ 0x140573E70 (XmCmpsOp.c)
 *     XmScasOp @ 0x1405741A0 (XmScasOp.c)
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
