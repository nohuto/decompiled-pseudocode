/*
 * XREFs of Isoch_EvtDmaCallback @ 0x14001FDC0
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x140005E00 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x14000DF10 (Isoch_MapTransfers.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001FE60 (Isoch_Stage_MapIntoRing.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(*a4 + 56LL);
  a4[9] = a3;
  result = Isoch_Stage_MapIntoRing(a4);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 348), 1u) )
  {
    if ( *(_DWORD *)(v4 + 360) )
    {
      result = TR_AttemptStateChange(v4, 3, 4);
      if ( (_DWORD)result == 3 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v4 + 328),
                 -100000000LL);
    }
    else
    {
      result = TR_AttemptStateChange(v4, 3, 3);
      if ( (_DWORD)result == 3 )
        return Isoch_MapTransfers(v4);
    }
  }
  return result;
}
