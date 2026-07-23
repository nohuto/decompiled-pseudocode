/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x140962920
 * Callers:
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     CmpCaptureKeyValueArray @ 0x140961F60 (CmpCaptureKeyValueArray.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && a2 <= 0x7FFFFFFEFFFFLL;
}
