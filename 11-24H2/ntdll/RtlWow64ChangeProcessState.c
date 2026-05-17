/*
 * XREFs of RtlWow64ChangeProcessState @ 0x180132180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64ChangeProcessState(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (_DWORD)a3 )
    return NtChangeProcessState();
  LODWORD(a3) = 2;
  return RtlpWow64SuspendProcess(a2, a1, a3);
}
