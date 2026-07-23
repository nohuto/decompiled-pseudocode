/*
 * XREFs of RtlQueryWnfMetaNotification @ 0x180109830
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryWnfStateNameInformation @ 0x180166030 (NtQueryWnfStateNameInformation.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlQueryWnfMetaNotification(
        PVOID InfoBuffer,
        WNF_STATE_NAME_INFORMATION a2,
        WNF_STATE_NAME a3,
        const void *a4)
{
  WNF_STATE_NAME StateName; // [rsp+30h] [rbp-18h] BYREF

  StateName = a3;
  return NtQueryWnfStateNameInformation(&StateName, a2, a4, InfoBuffer, 4u);
}
