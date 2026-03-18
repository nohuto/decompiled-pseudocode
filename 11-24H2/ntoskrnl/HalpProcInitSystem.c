/*
 * XREFs of HalpProcInitSystem @ 0x140B4D1C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcUpdateMicrocode @ 0x1404D1C2C (HalpMcUpdateMicrocode.c)
 *     HalpMcUpdatePostUpdate @ 0x1404D9190 (HalpMcUpdatePostUpdate.c)
 *     HalpProcGetFeatureBits @ 0x14054D160 (HalpProcGetFeatureBits.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1405574D4 (HalpInterruptStartBlockedProcessors.c)
 *     HalpMcUpdateInitializeBSP @ 0x140559BAC (HalpMcUpdateInitializeBSP.c)
 *     PrExtControlOperations @ 0x140663EEC (PrExtControlOperations.c)
 *     PrExtLogToTelemetry @ 0x140664244 (PrExtLogToTelemetry.c)
 *     HalpProcInitDiscard @ 0x140C0F4B0 (HalpProcInitDiscard.c)
 *     HalpBlkInitSystem @ 0x140C144B8 (HalpBlkInitSystem.c)
 */

__int64 __fastcall HalpProcInitSystem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  if ( (_DWORD)a1 == 4 )
  {
    HalpMcUpdateMicrocode(a1);
    return 0LL;
  }
  if ( (_DWORD)a1 == 12 )
  {
    HalpProcInitDiscard();
    a1 = v4;
    goto LABEL_13;
  }
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 == 19 )
    {
      HalpFeatureBits &= HalpProcGetFeatureBits();
      return 0LL;
    }
    if ( (_DWORD)a1 != 21 )
    {
      if ( (_DWORD)a1 == 32 )
      {
        v6 = 1;
        PrExtControlOperations(10, &v6, 4);
        HalpMcUpdatePostUpdate();
        PrExtLogToTelemetry();
      }
      return 0LL;
    }
LABEL_13:
    HalpBlkInitSystem(a1);
    return 0LL;
  }
  if ( HalpInterruptBlockedProcessors )
    HalpInterruptStartBlockedProcessors(0);
  HalpMcUpdateInitializeBSP(a3);
  return 0LL;
}
