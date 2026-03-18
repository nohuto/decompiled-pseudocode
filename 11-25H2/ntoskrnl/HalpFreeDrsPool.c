/*
 * XREFs of HalpFreeDrsPool @ 0x14055292C
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140552890 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x140552BD8 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x140552DE4 (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpFreeDrsPool(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == -1 )
    {
      ExFreePoolWithTag(a1, 0x61656857u);
    }
    else if ( *a1 == 1 )
    {
      *a1 = 0;
    }
  }
}
