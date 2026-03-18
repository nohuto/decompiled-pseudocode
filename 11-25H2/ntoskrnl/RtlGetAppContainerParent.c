/*
 * XREFs of RtlGetAppContainerParent @ 0x1407719D0
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140983B48 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     RtlGetAppContainerSidType @ 0x140984120 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x1409EAF40 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlGetAppContainerParent(PSID Sid, _QWORD *a2)
{
  *a2 = 0LL;
  RtlGetAppContainerSidType(Sid);
  return 3221225485LL;
}
