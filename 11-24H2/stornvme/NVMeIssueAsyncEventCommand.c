/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x140007940
 * Callers:
 *     NVMeStartAsyncEventCommands @ 0x140006F60 (NVMeStartAsyncEventCommands.c)
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140012380 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x140013EA0 (NVMeGetLogPageCompletion.c)
 *     NVMeReConfigAsyncEventCompletion @ 0x140029FE0 (NVMeReConfigAsyncEventCompletion.c)
 * Callees:
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeIssueAsyncEventCommand(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  bool v6; // zf

  LocalCommandReuse(a1, a2);
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 4212LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4096LL) = 12;
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4192LL) = NVMeAsyncEventRequestCompletion;
  result = ProcessCommand(a1, a2 + 8);
  if ( *(_BYTE *)(a2 + 11) < 2u )
  {
    if ( (*(_BYTE *)(a1 + 21) & 8) == 0 )
      return result;
    v5 = 0LL;
    return StorPortExtendedFunction(85LL, a1, 0LL, v5);
  }
  v6 = (*(_BYTE *)(a1 + 21) & 2) == 0;
  ++*(_DWORD *)(a1 + 4220);
  if ( !v6 )
  {
    v5 = 1LL;
    return StorPortExtendedFunction(85LL, a1, 0LL, v5);
  }
  return result;
}
