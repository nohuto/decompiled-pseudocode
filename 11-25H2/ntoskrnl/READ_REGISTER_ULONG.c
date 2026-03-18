/*
 * XREFs of READ_REGISTER_ULONG @ 0x1404B40E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall READ_REGISTER_ULONG(volatile ULONG *Register)
{
  return *Register;
}
