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

__int64 __fastcall NtDeleteAtom(unsigned __int16 a1)
{
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v3; // r10d
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(2, (__int64)&v5, 0, 0LL) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    ExCallCallBack(Win32Callouts, v3, &v5);
  }
  if ( v6 )
    return RtlDeleteAtomFromAtomTable(v6, a1);
  else
    return 3221225506LL;
}
