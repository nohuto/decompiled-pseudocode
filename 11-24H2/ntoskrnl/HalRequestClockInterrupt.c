/*
 * XREFs of HalRequestClockInterrupt @ 0x1403B5510
 * Callers:
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14033A0D0 (HalpTimerWatchdogTriggerSystemReset.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestClockInterrupt(int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax
  int v5; // ecx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]

  BugCheckParameter4 = a1;
  v7 = 0;
  v6 = 0LL;
  if ( !a1 )
  {
    if ( a2 && !(unsigned int)KeIsEmptyAffinityEx(a2) )
      goto LABEL_4;
LABEL_9:
    v5 = -1073741811;
    goto LABEL_10;
  }
  if ( (unsigned int)(a1 - 1) >= 2 )
    goto LABEL_9;
LABEL_4:
  if ( (_DWORD)BugCheckParameter4 )
  {
    if ( (_DWORD)BugCheckParameter4 == 1 )
    {
      LODWORD(v6) = 4;
    }
    else if ( (_DWORD)BugCheckParameter4 == 2 )
    {
      LODWORD(v6) = 3;
    }
  }
  else
  {
    LODWORD(v6) = 2;
    *((_QWORD *)&v6 + 1) = a2;
  }
  result = HalpInterruptSendIpi((unsigned int *)&v6, 0xD2u);
  v5 = result;
  if ( (int)result < 0 )
LABEL_10:
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, v5, BugCheckParameter4);
  return result;
}
