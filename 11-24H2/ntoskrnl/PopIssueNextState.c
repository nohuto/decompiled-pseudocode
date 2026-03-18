/*
 * XREFs of PopIssueNextState @ 0x140B65DAC
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 */

__int64 __fastcall PopIssueNextState(__int64 a1, _DWORD *a2, __int32 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 56), a3);
  *a2 = 0;
  PopHandleNextState(a1, a2);
  v4 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (_DWORD)result == *(_DWORD *)(a1 + 48) )
      break;
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v4);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
