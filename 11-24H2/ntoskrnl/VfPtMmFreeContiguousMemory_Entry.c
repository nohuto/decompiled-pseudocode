/*
 * XREFs of VfPtMmFreeContiguousMemory_Entry @ 0x140B8E4A0
 * Callers:
 *     <none>
 * Callees:
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     VfIsKernelVerificationOn @ 0x1404F89F0 (VfIsKernelVerificationOn.c)
 */

char __fastcall VfPtMmFreeContiguousMemory_Entry(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfIsKernelVerificationOn();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      return VfPtMiscPoolNotification(v3, 0LL, 0x546E6F43u, 1);
  }
  return result;
}
