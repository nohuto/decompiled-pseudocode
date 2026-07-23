/*
 * XREFs of IaLpssSetPowerD3 @ 0x1406A5930
 * Callers:
 *     <none>
 * Callees:
 *     IaLpssPciSetPower @ 0x1406A5638 (IaLpssPciSetPower.c)
 *     IaLpssReadClockParams @ 0x1406A57AC (IaLpssReadClockParams.c)
 *     IaLpssReadResetRegister @ 0x1406A5850 (IaLpssReadResetRegister.c)
 *     IaLpssWriteResetRegister @ 0x1406A5A64 (IaLpssWriteResetRegister.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssSetPowerD3(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v6; // rdx

  if ( a1 && *a1 )
  {
    IaLpssClockParams = IaLpssReadClockParams(a1, a2);
    if ( (IaLpssReadResetRegister(a1, v3) & 7) == 7 )
    {
      LOBYTE(v4) = 4;
      guard_dispatch_icall_no_overrides(a1, v4);
      LOBYTE(v6) = 4;
      guard_dispatch_icall_no_overrides(a1, v6);
      guard_dispatch_icall_no_overrides(a1, 2LL);
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
