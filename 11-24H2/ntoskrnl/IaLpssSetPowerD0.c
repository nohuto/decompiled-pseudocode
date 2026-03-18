/*
 * XREFs of IaLpssSetPowerD0 @ 0x1406A4880
 * Callers:
 *     <none>
 * Callees:
 *     IaLpssPciSetPower @ 0x1406A4638 (IaLpssPciSetPower.c)
 *     IaLpssReadClockParams @ 0x1406A47AC (IaLpssReadClockParams.c)
 *     IaLpssReadResetRegister @ 0x1406A4850 (IaLpssReadResetRegister.c)
 *     IaLpssWriteClockParams @ 0x1406A49C8 (IaLpssWriteClockParams.c)
 *     IaLpssWriteResetRegister @ 0x1406A4A64 (IaLpssWriteResetRegister.c)
 *     Uart16550InitializePortCommon @ 0x1406A4BA4 (Uart16550InitializePortCommon.c)
 */

__int64 __fastcall IaLpssSetPowerD0(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int ClockParams; // eax
  int v10; // r9d
  int v11; // r8d
  int v12; // ecx

  if ( a1 && *(_QWORD *)a1 )
  {
    v2 = IaLpssPciSetPower(0);
    if ( !v2 )
    {
      if ( (IaLpssReadResetRegister((_QWORD *)a1, 0LL, v3, v4) & 7) != 0 )
      {
        return 2;
      }
      else
      {
        v5 = (unsigned int)IaLpssClockParams;
        if ( IaLpssClockParams )
        {
          LODWORD(v5) = IaLpssClockParams | 0x80000000;
          IaLpssWriteClockParams(a1, v5);
          ClockParams = IaLpssReadClockParams((_QWORD *)a1, v6, v7, v8);
          IaLpssWriteClockParams(a1, ClockParams & 0x7FFFFFFF);
        }
        LOBYTE(v5) = 7;
        IaLpssWriteResetRegister(a1, v5);
        LOBYTE(v10) = 1;
        *(_WORD *)(a1 + 12) = 0;
        LOBYTE(v11) = 1;
        return (unsigned __int8)Uart16550InitializePortCommon(v12, a1, v11, v10, 8) != 1 ? 2 : 0;
      }
    }
  }
  else
  {
    return 3;
  }
  return v2;
}
