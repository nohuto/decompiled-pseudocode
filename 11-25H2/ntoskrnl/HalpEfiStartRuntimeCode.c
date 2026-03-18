/*
 * XREFs of HalpEfiStartRuntimeCode @ 0x140442E24
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x140442460 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalEfiSetEnvironmentVariable @ 0x140442748 (HalEfiSetEnvironmentVariable.c)
 *     HalGetEnvironmentVariableEx @ 0x140442810 (HalGetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404429E0 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalEfiGetTime @ 0x140549C4C (HalEfiGetTime.c)
 *     HalEfiResetSystem @ 0x140549DC8 (HalEfiResetSystem.c)
 *     HalEfiSetTime @ 0x140549E64 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14054A0A0 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x14055FDB0 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiStartRuntimeCode(unsigned int a1)
{
  unsigned int *HalReserved; // rdx
  __int64 result; // rax

  HalReserved = KeGetPcr()->HalReserved;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result >= 2u )
  {
    _InterlockedOr((volatile signed __int32 *)HalReserved + 8, a1);
  }
  else
  {
    while ( 1 )
    {
      while ( (HalReserved[8] & 0x80000000) != 0 )
        _mm_pause();
      _m_prefetchw(HalReserved + 8);
      result = (unsigned int)_InterlockedOr((volatile signed __int32 *)HalReserved + 8, a1);
      if ( (int)result >= 0 )
        break;
      _InterlockedAnd((volatile signed __int32 *)HalReserved + 8, ~a1);
    }
  }
  return result;
}
