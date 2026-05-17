/*
 * XREFs of RtlDoesFileExists_U @ 0x18010CD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlDoesFileExists_U(const wchar_t *a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return RtlDoesFileExists_UEx(a1, a2);
}
