/*
 * XREFs of IaLpssSetPowerD3 @ 0x140699700
 * Callers:
 *     <none>
 * Callees:
 *     IaLpssPciSetPower @ 0x140699408 (IaLpssPciSetPower.c)
 *     IaLpssReadClockParams @ 0x14069957C (IaLpssReadClockParams.c)
 *     IaLpssReadResetRegister @ 0x140699620 (IaLpssReadResetRegister.c)
 *     IaLpssWriteResetRegister @ 0x140699834 (IaLpssWriteResetRegister.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssSetPowerD3(_QWORD *a1)
{
  if ( a1 && *a1 )
  {
    IaLpssClockParams = IaLpssReadClockParams(a1);
    if ( (IaLpssReadResetRegister(a1) & 7) == 7 )
    {
      guard_dispatch_icall_no_overrides(a1);
      guard_dispatch_icall_no_overrides(a1);
      guard_dispatch_icall_no_overrides(a1);
      IaLpssWriteResetRegister(a1, 0LL);
      return (unsigned int)IaLpssPciSetPower(1);
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 3;
  }
}
