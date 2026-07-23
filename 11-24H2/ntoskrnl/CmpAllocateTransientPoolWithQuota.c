/*
 * XREFs of CmpAllocateTransientPoolWithQuota @ 0x14044E170
 * Callers:
 *     NtCompactKeys @ 0x1407CFC40 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D06A0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     CmpCaptureKeyValueArray @ 0x140961F60 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     CmpBounceContextStart @ 0x140962A30 (CmpBounceContextStart.c)
 *     CmCreateKey @ 0x140A1B2F4 (CmCreateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateTransientPoolWithQuota(__int64 a1, ULONG_PTR a2, ULONG a3)
{
  return ExAllocatePool2(0x101uLL, a2, a3);
}
