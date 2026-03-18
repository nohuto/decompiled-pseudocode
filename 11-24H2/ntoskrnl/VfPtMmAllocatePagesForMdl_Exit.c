/*
 * XREFs of VfPtMmAllocatePagesForMdl_Exit @ 0x140B8C420
 * Callers:
 *     <none>
 * Callees:
 *     VfPtMiscPoolNotification @ 0x140400260 (VfPtMiscPoolNotification.c)
 *     VfIsKernelVerificationOn @ 0x1404FB110 (VfIsKernelVerificationOn.c)
 */

char __fastcall VfPtMmAllocatePagesForMdl_Exit(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfIsKernelVerificationOn();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, *(__int16 *)(v3 + 8), 0x69646D4Du, 0);
  }
  return result;
}
