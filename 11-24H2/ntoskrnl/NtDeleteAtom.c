/*
 * XREFs of NtDeleteAtom @ 0x1408F43C0
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1408F4840 (RtlDeleteAtomFromAtomTable.c)
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v3; // r10d
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  PVOID AtomTableHandle; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  AtomTableHandle = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(2, (__int64)&v5, 0, 0LL) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    ExCallCallBack(Win32Callouts, v3, &v5);
  }
  if ( AtomTableHandle )
    return RtlDeleteAtomFromAtomTable(AtomTableHandle, Atom);
  else
    return -1073741790;
}
