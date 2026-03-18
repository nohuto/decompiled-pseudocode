/*
 * XREFs of IrqArbBootAllocation @ 0x1400B19C0
 * Callers:
 *     <none>
 * Callees:
 *     ArbBootAllocation @ 0x140097830 (ArbBootAllocation.c)
 *     IcCopyData @ 0x1400B1A64 (IcCopyData.c)
 *     ProcessorCopyData @ 0x1400B22E8 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1400B2694 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1400B27A4 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1400B2A48 (IcRemapInputs.c)
 */

__int64 __fastcall IrqArbBootAllocation(__int64 a1, _QWORD **a2)
{
  int v4; // ebx

  ProcessorpClearData(1LL);
  IcClearPossibleData();
  v4 = ProcessorCopyData(1LL);
  if ( v4 >= 0 )
  {
    v4 = IcCopyData(1LL);
    if ( v4 >= 0 )
    {
      v4 = ArbBootAllocation(a1, a2);
      if ( v4 >= 0 )
      {
        v4 = ProcessorCopyData(0LL);
        if ( v4 >= 0 )
        {
          v4 = IcRemapInputs();
          if ( v4 >= 0 )
          {
            v4 = IcCopyData(0LL);
            if ( v4 >= 0 )
            {
              ProcessorpClearData(1LL);
              IcClearPossibleData();
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
