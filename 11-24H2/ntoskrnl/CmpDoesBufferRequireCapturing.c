/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x14097A110
 * Callers:
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     CmpCaptureKeyValueArray @ 0x140979750 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && a2 <= 0x7FFFFFFEFFFFLL;
}
