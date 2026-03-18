/*
 * XREFs of IoCancelThreadIo @ 0x1408F526C
 * Callers:
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopDisassociateThreadIrp @ 0x140592A1C (IopDisassociateThreadIrp.c)
 */

_UNKNOWN **__fastcall IoCancelThreadIo(LARGE_INTEGER a1)
{
  _UNKNOWN **result; // rax
  unsigned int *p_SystemCallNumber; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int *i; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  unsigned __int8 v7; // di
  bool j; // zf
  unsigned int v9; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  Interval = a1;
  p_SystemCallNumber = &KeGetCurrentThread()[1].SystemCallNumber;
  if ( *(unsigned int **)p_SystemCallNumber != p_SystemCallNumber )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
      IoCancelIrp((PIRP)(i - 8));
    v5 = 100 * IopIrpCompletionTimeoutInSeconds;
    v6 = 0;
    Interval.QuadPart = -100000LL;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v7 = KeGetCurrentIrql();
    __writecr8(1uLL);
    for ( j = KiIrqlFlags == 0; ; j = KiIrqlFlags == 0 )
    {
      if ( !j )
        KiRaiseIrqlProcessIrqlFlags(v7, 1);
      if ( *(unsigned int **)p_SystemCallNumber == p_SystemCallNumber )
        break;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
      KeDelayExecutionThread(0, 0, &Interval);
      v9 = v6++;
      if ( v9 > v5 )
        IopDisassociateThreadIrp();
      v7 = KeGetCurrentIrql();
      __writecr8(1uLL);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    result = (_UNKNOWN **)v7;
    __writecr8(v7);
  }
  return result;
}
