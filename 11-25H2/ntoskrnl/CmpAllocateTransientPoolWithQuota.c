/*
 * XREFs of CmpAllocateTransientPoolWithQuota @ 0x140458628
 * Callers:
 *     NtCompactKeys @ 0x1407C0060 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407C0AA0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     CmpCaptureKeyValueArray @ 0x14099646C (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextStart @ 0x140996800 (CmpBounceContextStart.c)
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 CmpAllocateTransientPoolWithQuota()
{
  return ExAllocatePool2(0x101uLL);
}
