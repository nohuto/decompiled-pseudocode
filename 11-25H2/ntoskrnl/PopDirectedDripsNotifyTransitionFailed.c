/*
 * XREFs of PopDirectedDripsNotifyTransitionFailed @ 0x1407406EC
 * Callers:
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x14075499C (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
 */

LONG_PTR __fastcall PopDirectedDripsNotifyTransitionFailed(__int64 a1)
{
  LONG_PTR result; // rax
  void *v2; // rbx

  result = (LONG_PTR)IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67696450u);
  v2 = (void *)result;
  if ( result )
  {
    if ( *(_QWORD *)(*(_QWORD *)(result + 312) + 40LL) )
      PopDirectedDripsDiagTraceBroadcastFailureDevice();
    result = ObfDereferenceObjectWithTag(v2, 0x67696450u);
  }
  byte_140F0D88C = 1;
  return result;
}
