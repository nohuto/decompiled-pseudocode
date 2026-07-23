/*
 * XREFs of NtDeleteAtom @ 0x14091DDE0
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14091E690 (RtlDeleteAtomFromAtomTable.c)
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
