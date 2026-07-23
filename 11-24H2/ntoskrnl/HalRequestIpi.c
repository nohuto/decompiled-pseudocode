/*
 * XREFs of HalRequestIpi @ 0x140371AA0
 * Callers:
 *     PoExecuteIdleCheck @ 0x1402ABB40 (PoExecuteIdleCheck.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1402AEDA4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     PpmUnlockProcessors @ 0x140371990 (PpmUnlockProcessors.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1404C1C54 (PpmWakeClockOwnerIfNeeded.c)
 *     PoInitiateProcessorWake @ 0x1405CB300 (PoInitiateProcessorWake.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestIpi(int a1, unsigned __int16 *a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int16 i; // cx
  __int64 result; // rax
  int v5; // ecx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]

  BugCheckParameter4 = a1;
  v7 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      if ( a1 == 1 )
      {
        LODWORD(v6) = 4;
      }
      else if ( a1 == 2 )
      {
        LODWORD(v6) = 3;
      }
      goto LABEL_10;
    }
LABEL_12:
    v5 = -1073741811;
LABEL_13:
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, v5, BugCheckParameter4);
  }
  if ( !a2 )
    goto LABEL_12;
  for ( i = 0; ; ++i )
  {
    if ( i >= *a2 )
      goto LABEL_12;
    if ( *(_QWORD *)&a2[4 * i + 4] )
      break;
  }
  LODWORD(v6) = 2;
  *((_QWORD *)&v6 + 1) = a2;
LABEL_10:
  result = HalpInterruptSendIpi((unsigned int *)&v6, 0xE1u);
  v5 = result;
  if ( (int)result < 0 )
    goto LABEL_13;
  return result;
}
