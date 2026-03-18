/*
 * XREFs of ZwDuplicateToken @ 0x1406A6C50
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     DifZwDuplicateTokenWrapper @ 0x14063F550 (DifZwDuplicateTokenWrapper.c)
 *     RtlpIsAppContainer @ 0x140781AFC (RtlpIsAppContainer.c)
 *     RtlImpersonateSelfEx @ 0x1409C1F04 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(ExistingTokenHandle, *(_QWORD *)&DesiredAccess);
}
