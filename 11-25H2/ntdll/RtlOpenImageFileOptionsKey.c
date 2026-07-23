/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x18010C470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlOpenImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, 9u, 0, a3);
}
