/*
 * XREFs of RtlCreateEnvironment @ 0x180109C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateEnvironment(char a1, _QWORD *a2)
{
  return RtlCreateEnvironmentEx(0LL, a2, a1 == 0 ? 4 : 0);
}
