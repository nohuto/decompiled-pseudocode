/*
 * XREFs of IoRegisterPriorityCallback @ 0x140593AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterPriorityCallback(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  __int64 v7; // rsi

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    return 3221227288LL;
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(0x40uLL, 0x28uLL, 0x62436F49u);
  v6 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->Count = 0LL;
  Pool2[3].Count = a2;
  v7 = 0LL;
  Pool2[1].Count = (unsigned __int64)IopBoostThreadCallback;
  Pool2[2].Count = (unsigned __int64)Pool2;
  Pool2[4].Count = a1;
  while ( (unsigned int)v7 < 8 )
  {
    if ( ExCompareExchangeCallBack(&IopUpdatePriorityCallbackRoutine[v7], v6, 0LL) )
    {
      _InterlockedIncrement(&IopUpdatePriorityCallbackRoutineCount);
      *(_DWORD *)(a1 + 16) |= 0x200u;
      return 0LL;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  PspUserApcKernelRoutine(v6);
  return 3221225485LL;
}
