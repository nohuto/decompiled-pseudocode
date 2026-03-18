/*
 * XREFs of CmpAllocateTransientPoolWithQuota @ 0x1404590C0
 * Callers:
 *     NtCompactKeys @ 0x1407CF750 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmpCaptureKeyValueArray @ 0x140979750 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     CmpBounceContextStart @ 0x14097A220 (CmpBounceContextStart.c)
 *     CmCreateKey @ 0x140A26874 (CmCreateKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 CmpAllocateTransientPoolWithQuota()
{
  return ExAllocatePool2(0x101uLL);
}
