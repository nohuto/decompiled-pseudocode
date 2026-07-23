/*
 * XREFs of CarCreateRuleOverrideEntry @ 0x140614CBC
 * Callers:
 *     CarRegisterRuleOverride @ 0x1406155F0 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x1406156E0 (CarRegisterRuleOverrideAllContexts.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CarCreateRuleOverrideEntry(_QWORD *a1)
{
  unsigned int v1; // ebx
  void *Pool2; // rax

  v1 = 0;
  if ( a1 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x50uLL, 0x4E726143u);
    *a1 = Pool2;
    if ( Pool2 )
      memset_0(Pool2, 0, 0x50uLL);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
