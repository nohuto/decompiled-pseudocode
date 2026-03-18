/*
 * XREFs of PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x14074C66C
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140764B50 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopIssueDirectedPowerTransition @ 0x140AB81C4 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 */

bool __fastcall PopDirectedDripsIsPnpSoftwareDeviceNode(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *AttachedDeviceReferenceWithTag; // rax
  bool v3; // bl

  v1 = *(_QWORD *)(a1 + 32);
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag((_QWORD *)v1, 0x78466F50u);
  v3 = (_QWORD *)v1 == AttachedDeviceReferenceWithTag && *(PDRIVER_OBJECT *)(v1 + 8) == PiSwDeviceDriverObject;
  ObfDereferenceObject(AttachedDeviceReferenceWithTag);
  return v3;
}
