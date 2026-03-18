/*
 * XREFs of HalpEfiIncrementEfiCall @ 0x14045E854
 * Callers:
 *     HalEfiGetTime @ 0x14054C53C (HalEfiGetTime.c)
 *     HalEfiResetSystem @ 0x14054C6B8 (HalEfiResetSystem.c)
 *     HalEfiSetTime @ 0x14054C754 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14054C990 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405626B0 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpEfiIncrementEfiCall(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&HalpEfiCalls);
  if ( a1 )
    return (unsigned int)_InterlockedIncrement(a1);
  return result;
}
