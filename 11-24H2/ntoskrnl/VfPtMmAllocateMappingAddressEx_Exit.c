/*
 * XREFs of VfPtMmAllocateMappingAddressEx_Exit @ 0x140B8C2E0
 * Callers:
 *     <none>
 * Callees:
 *     VfPtMiscPoolNotification @ 0x140400260 (VfPtMiscPoolNotification.c)
 *     VfIsKernelVerificationOn @ 0x1404FB110 (VfIsKernelVerificationOn.c)
 */

char __fastcall VfPtMmAllocateMappingAddressEx_Exit(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfIsKernelVerificationOn();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, *(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 12), 0);
  }
  return result;
}
