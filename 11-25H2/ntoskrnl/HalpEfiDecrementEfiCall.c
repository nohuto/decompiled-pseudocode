/*
 * XREFs of HalpEfiDecrementEfiCall @ 0x140485880
 * Callers:
 *     HalEfiGetTime @ 0x140549C4C (HalEfiGetTime.c)
 *     HalEfiResetSystem @ 0x140549DC8 (HalEfiResetSystem.c)
 *     HalEfiSetTime @ 0x140549E64 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14054A0A0 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x14055FDB0 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiDecrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement(&HalpEfiCalls);
  if ( a1 )
    return (unsigned int)_InterlockedDecrement(a1);
  return result;
}
