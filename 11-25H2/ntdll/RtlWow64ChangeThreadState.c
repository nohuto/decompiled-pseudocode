/*
 * XREFs of RtlWow64ChangeThreadState @ 0x180115610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64ChangeThreadState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  if ( (_DWORD)a3 )
    return NtChangeThreadState(a1, a2, a3, a4, a5, a6);
  else
    return RtlpWow64SuspendThread(a2, a1, 0LL);
}
