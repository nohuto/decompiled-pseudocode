/*
 * XREFs of HalpEfiDecrementEfiCall @ 0x140486128
 * Callers:
 *     HalEfiGetTime @ 0x14054C53C (HalEfiGetTime.c)
 *     HalEfiResetSystem @ 0x14054C6B8 (HalEfiResetSystem.c)
 *     HalEfiSetTime @ 0x14054C754 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14054C990 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405626B0 (HalpQueryCapsuleCapabilities.c)
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
