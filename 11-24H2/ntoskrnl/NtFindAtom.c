/*
 * XREFs of NtFindAtom @ 0x140992B70
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x14046B2A0 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EEDCC (PspUpdateCalloutParameters.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     RtlLookupAtomInAtomTable @ 0x140992D40 (RtlLookupAtomInAtomTable.c)
 */

__int64 __fastcall NtFindAtom(_WORD *Src, size_t Size, _WORD *a3)
{
  size_t v4; // r15
  union _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // r13
  char PreviousMode; // r12
  _WORD *v11; // r14
  __int64 v12; // rcx
  __int64 result; // rax
  __int16 v14; // [rsp+20h] [rbp-288h] BYREF
  _WORD *v15; // [rsp+28h] [rbp-280h]
  __int128 v16; // [rsp+30h] [rbp-278h] BYREF
  __int64 v17; // [rsp+40h] [rbp-268h]
  __int64 v18; // [rsp+48h] [rbp-260h]
  int v19; // [rsp+50h] [rbp-258h]
  _WORD v20[256]; // [rsp+60h] [rbp-248h] BYREF

  v4 = (unsigned int)Size;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v19 = 0;
  v18 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(2, (__int64)&v16, 0, 0LL) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    v7 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
    if ( v7 )
    {
      guard_dispatch_icall_no_overrides(v7[2].Count, 2LL, &v16, v8);
      ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v7);
    }
  }
  v9 = v17;
  if ( !v17 )
    return 3221225506LL;
  if ( (unsigned int)v4 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = Src;
  v15 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a3;
      *(_WORD *)v12 = *(_WORD *)v12;
      v11 = v15;
    }
    if ( Src )
    {
      if ( (_DWORD)v4 && ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = v20;
      v15 = v20;
      memmove(v20, Src, v4);
      v20[v4 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlLookupAtomInAtomTable(v9, v11, &v14);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v14;
  }
  return (unsigned int)result;
}
