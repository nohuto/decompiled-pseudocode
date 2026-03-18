/*
 * XREFs of RtlGetAppContainerParent @ 0x140780C20
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     RtlGetAppContainerSidType @ 0x1408F2D70 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x1409E3B60 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlGetAppContainerParent(PSID Sid, _QWORD *a2)
{
  *a2 = 0LL;
  RtlGetAppContainerSidType(Sid);
  return 3221225485LL;
}
