/*
 * XREFs of VfPtIoAllocateMdl_Exit @ 0x140B8E1D0
 * Callers:
 *     <none>
 * Callees:
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     VfIsKernelVerificationOn @ 0x1404F89F0 (VfIsKernelVerificationOn.c)
 */

char __fastcall VfPtIoAllocateMdl_Exit(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = VfIsKernelVerificationOn();
  if ( !result )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
    {
      result = VfRuleClasses;
      if ( (VfRuleClasses & 1) == 0 )
        return VfPtMiscPoolNotification(v3, *(__int16 *)(v3 + 8), 0x206C644Du, 0);
    }
  }
  return result;
}
