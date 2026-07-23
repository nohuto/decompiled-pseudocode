/*
 * XREFs of VfPtMmAllocateNonCachedMemory_Exit @ 0x140B8E3A0
 * Callers:
 *     <none>
 * Callees:
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     VfIsKernelVerificationOn @ 0x1404F89F0 (VfIsKernelVerificationOn.c)
 */

char __fastcall VfPtMmAllocateNonCachedMemory_Exit(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfIsKernelVerificationOn();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, *(_QWORD *)(a1 + 8), 0x69646D4Du, 0);
  }
  return result;
}
