/*
 * XREFs of IaLpssSetPowerD0 @ 0x1406A5880
 * Callers:
 *     <none>
 * Callees:
 *     IaLpssPciSetPower @ 0x1406A5638 (IaLpssPciSetPower.c)
 *     IaLpssReadClockParams @ 0x1406A57AC (IaLpssReadClockParams.c)
 *     IaLpssReadResetRegister @ 0x1406A5850 (IaLpssReadResetRegister.c)
 *     IaLpssWriteClockParams @ 0x1406A59C8 (IaLpssWriteClockParams.c)
 *     IaLpssWriteResetRegister @ 0x1406A5A64 (IaLpssWriteResetRegister.c)
 *     Uart16550InitializePortCommon @ 0x1406A5BA4 (Uart16550InitializePortCommon.c)
 */

__int64 __fastcall IaLpssSetPowerD0(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // rdx
  int ClockParams; // eax
  int v6; // r9d
  int v7; // r8d
  int v8; // ecx

  if ( a1 && *(_QWORD *)a1 )
  {
    v2 = IaLpssPciSetPower(0);
    if ( !v2 )
    {
      if ( (IaLpssReadResetRegister((_QWORD *)a1, 0LL) & 7) != 0 )
      {
        return 2;
      }
      else
      {
        v3 = (unsigned int)IaLpssClockParams;
        if ( IaLpssClockParams )
        {
          LODWORD(v3) = IaLpssClockParams | 0x80000000;
          IaLpssWriteClockParams(a1, v3);
          ClockParams = IaLpssReadClockParams((_QWORD *)a1, v4);
          IaLpssWriteClockParams(a1, ClockParams & 0x7FFFFFFF);
        }
        LOBYTE(v3) = 7;
        IaLpssWriteResetRegister(a1, v3);
        LOBYTE(v6) = 1;
        *(_WORD *)(a1 + 12) = 0;
        LOBYTE(v7) = 1;
        return (unsigned __int8)Uart16550InitializePortCommon(v8, a1, v7, v6, 8) != 1 ? 2 : 0;
      }
    }
  }
  else
  {
    return 3;
  }
  return v2;
}
