/*
 * XREFs of CmpDoesBufferRequireCapturing @ 0x14086D480
 * Callers:
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x14099646C (CmpCaptureKeyValueArray.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  return a1 || *((_QWORD *)&CmpRegistryProcess + 1) && a2 <= 0x7FFFFFFEFFFFLL;
}
