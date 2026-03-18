/*
 * XREFs of MiMarkHiberProtectedImages @ 0x140672BF0
 * Callers:
 *     MmMarkHiberPhase @ 0x140B62DB8 (MmMarkHiberPhase.c)
 * Callees:
 *     MmMarkImageForHiberPhase @ 0x140B6312C (MmMarkImageForHiberPhase.c)
 */

__int64 MiMarkHiberProtectedImages()
{
  PVOID *i; // rbx
  __int64 result; // rax

  if ( VslVsmEnabled )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      if ( (*((_WORD *)i + 55) & 0x180) != 0 )
        result = MmMarkImageForHiberPhase(i[6]);
    }
  }
  return result;
}
