/*
 * XREFs of ??0_Init_locks@std@@QEAA@XZ @ 0x1800050C0
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180003F90 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x180004000 (std--_dynamic_initializer_for__initlocks___0.c)
 * Callees:
 *     _Mtxinit @ 0x18000CFDC (_Mtxinit.c)
 */

std::_Init_locks *__fastcall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdi

  if ( !_InterlockedIncrement(&dword_180178240) )
  {
    v2 = &CriticalSection;
    v3 = 4LL;
    do
    {
      Mtxinit(v2++);
      --v3;
    }
    while ( v3 );
  }
  return this;
}
