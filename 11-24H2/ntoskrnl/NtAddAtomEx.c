/*
 * XREFs of NtAddAtomEx @ 0x1408F4440
 * Callers:
 *     NtAddAtom @ 0x1407C1710 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x1404242E0 (RtlAddAtomToAtomTableEx.c)
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 */

NTSTATUS __cdecl NtAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  size_t v6; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v9; // r11d
  __int64 v10; // r12
  char PreviousMode; // r15
  WCHAR *v12; // r14
  __int64 v13; // rcx
  NTSTATUS result; // eax
  USHORT v15; // [rsp+20h] [rbp-288h] BYREF
  PWSTR v16; // [rsp+28h] [rbp-280h]
  __int128 v17; // [rsp+30h] [rbp-278h] BYREF
  __int64 v18; // [rsp+40h] [rbp-268h]
  __int64 v19; // [rsp+48h] [rbp-260h]
  int v20; // [rsp+50h] [rbp-258h]
  _WORD v21[256]; // [rsp+60h] [rbp-248h] BYREF

  v6 = Length;
  v15 = 0;
  if ( (Flags & 0xFFFFFFFD) != 0 )
    return -1073741811;
  v17 = 0LL;
  v18 = 0LL;
  v20 = 0;
  v19 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(2, (__int64)&v17, 0, 0LL) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    ExCallCallBack(Win32Callouts, v9, &v17);
  }
  v10 = v18;
  if ( !v18 )
    return -1073741790;
  if ( (unsigned int)v6 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = AtomName;
  v16 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Atom < 0x7FFFFFFF0000LL )
        v13 = (__int64)Atom;
      *(_WORD *)v13 = *(_WORD *)v13;
      v12 = v16;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v6 && ((unsigned __int8)AtomName & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = v21;
      v16 = v21;
      memmove(v21, AtomName, v6);
      v21[v6 >> 1] = 0;
    }
  }
  result = RtlAddAtomToAtomTableEx(v10, v12, &v15, Flags);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = v15;
  }
  return result;
}
