/*
 * XREFs of IaLpssSetPowerD3 @ 0x1406A4930
 * Callers:
 *     <none>
 * Callees:
 *     IaLpssPciSetPower @ 0x1406A4638 (IaLpssPciSetPower.c)
 *     IaLpssReadClockParams @ 0x1406A47AC (IaLpssReadClockParams.c)
 *     IaLpssReadResetRegister @ 0x1406A4850 (IaLpssReadResetRegister.c)
 *     IaLpssWriteResetRegister @ 0x1406A4A64 (IaLpssWriteResetRegister.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssSetPowerD3(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9

  if ( a1 && *a1 )
  {
    IaLpssClockParams = IaLpssReadClockParams(a1, a2, a3, a4);
    if ( (IaLpssReadResetRegister(a1, v5, v6, v7) & 7) == 7 )
    {
      LOBYTE(v8) = 4;
      v12 = guard_dispatch_icall_no_overrides(a1, v8, v9, v10);
      LOBYTE(v13) = 4;
      LOBYTE(v14) = v12 & 0xF7;
      guard_dispatch_icall_no_overrides(a1, v13, v14, v15);
      guard_dispatch_icall_no_overrides(a1, 2LL, 0LL, v16);
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
