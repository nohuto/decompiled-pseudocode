/*
 * XREFs of NtFindAtom @ 0x14097DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlLookupAtomInAtomTable @ 0x14097DD80 (RtlLookupAtomInAtomTable.c)
 */

NTSTATUS __cdecl NtFindAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  size_t v4; // r15
  _RTL_RUN_ONCE *Win32Callouts; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _EX_RUNDOWN_REF *v10; // rbx
  PVOID v11; // r13
  char PreviousMode; // r12
  WCHAR *v13; // r14
  __int64 v14; // rcx
  NTSTATUS result; // eax
  USHORT Atoma; // [rsp+20h] [rbp-288h] BYREF
  PWSTR v17; // [rsp+28h] [rbp-280h]
  __int128 v18; // [rsp+30h] [rbp-278h] BYREF
  PVOID AtomTableHandle; // [rsp+40h] [rbp-268h]
  __int64 v20; // [rsp+48h] [rbp-260h]
  int v21; // [rsp+50h] [rbp-258h]
  _WORD v22[256]; // [rsp+60h] [rbp-248h] BYREF

  v4 = Length;
  Atoma = 0;
  v18 = 0LL;
  AtomTableHandle = 0LL;
  v21 = 0;
  v20 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(2, (__int64)&v18, 0, 0LL) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    v10 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts, v7, v8, v9);
    if ( v10 )
    {
      guard_dispatch_icall_no_overrides(v10[2].Count, 2LL);
      ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v10);
    }
  }
  v11 = AtomTableHandle;
  if ( !AtomTableHandle )
    return -1073741790;
  if ( (unsigned int)v4 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = AtomName;
  v17 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Atom < 0x7FFFFFFF0000LL )
        v14 = (__int64)Atom;
      *(_WORD *)v14 = *(_WORD *)v14;
      v13 = v17;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v4 && ((unsigned __int8)AtomName & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v22;
      v17 = v22;
      memmove(v22, AtomName, v4);
      v22[v4 >> 1] = 0;
    }
  }
  result = RtlLookupAtomInAtomTable(v11, v13, &Atoma);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = Atoma;
  }
  return result;
}
