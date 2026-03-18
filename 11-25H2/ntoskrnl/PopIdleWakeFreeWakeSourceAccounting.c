/*
 * XREFs of PopIdleWakeFreeWakeSourceAccounting @ 0x140752518
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140A88870 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PopIdleWakeFreeWakeSourceAccounting(_DWORD *a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi
  LONG_PTR result; // rax

  if ( *a1 == 128 )
  {
    v1 = (PVOID *)(a1 + 8);
    v2 = 3LL;
    do
    {
      if ( *v1 )
        result = ObfDereferenceObjectWithTag(*v1, 0x67446F50u);
      ++v1;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
