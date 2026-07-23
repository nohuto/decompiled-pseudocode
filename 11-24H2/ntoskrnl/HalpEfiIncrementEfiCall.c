/*
 * XREFs of HalpEfiIncrementEfiCall @ 0x140453714
 * Callers:
 *     HalEfiGetTime @ 0x140549DFC (HalEfiGetTime.c)
 *     HalEfiResetSystem @ 0x140549F78 (HalEfiResetSystem.c)
 *     HalEfiSetTime @ 0x14054A014 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14054A250 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405602E0 (HalpQueryCapsuleCapabilities.c)
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
