/*
 * XREFs of ZwDuplicateToken @ 0x1406A7BF0
 * Callers:
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1403B5770 (RtlCheckTokenMembershipEx.c)
 *     DifZwDuplicateTokenWrapper @ 0x14063DB10 (DifZwDuplicateTokenWrapper.c)
 *     RtlpIsAppContainer @ 0x140781A2C (RtlpIsAppContainer.c)
 *     RtlImpersonateSelfEx @ 0x1409A8554 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle);
}
