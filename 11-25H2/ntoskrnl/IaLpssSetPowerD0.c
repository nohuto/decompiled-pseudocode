/*
 * XREFs of IaLpssSetPowerD0 @ 0x140699650
 * Callers:
 *     <none>
 * Callees:
 *     IaLpssPciSetPower @ 0x140699408 (IaLpssPciSetPower.c)
 *     IaLpssReadClockParams @ 0x14069957C (IaLpssReadClockParams.c)
 *     IaLpssReadResetRegister @ 0x140699620 (IaLpssReadResetRegister.c)
 *     IaLpssWriteClockParams @ 0x140699798 (IaLpssWriteClockParams.c)
 *     IaLpssWriteResetRegister @ 0x140699834 (IaLpssWriteResetRegister.c)
 *     Uart16550InitializePortCommon @ 0x140699974 (Uart16550InitializePortCommon.c)
 */

__int64 __fastcall IaLpssSetPowerD0(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rdx
  int ClockParams; // eax
  int v5; // r9d
  int v6; // r8d
  int v7; // ecx

  if ( a1 && *(_QWORD *)a1 )
  {
    v2 = IaLpssPciSetPower(0);
    if ( !v2 )
    {
      if ( (IaLpssReadResetRegister((_QWORD *)a1) & 7) != 0 )
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
          ClockParams = IaLpssReadClockParams((_QWORD *)a1);
          IaLpssWriteClockParams(a1, ClockParams & 0x7FFFFFFF);
        }
        LOBYTE(v3) = 7;
        IaLpssWriteResetRegister(a1, v3);
        LOBYTE(v5) = 1;
        *(_WORD *)(a1 + 12) = 0;
        LOBYTE(v6) = 1;
        return (unsigned __int8)Uart16550InitializePortCommon(v7, a1, v6, v5, 8) != 1 ? 2 : 0;
      }
    }
  }
  else
  {
    return 3;
  }
  return v2;
}
