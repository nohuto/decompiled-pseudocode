/*
 * XREFs of NtFindAtom @ 0x1409527D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     RtlLookupAtomInAtomTable @ 0x1409529A0 (RtlLookupAtomInAtomTable.c)
 */

__int64 __fastcall NtFindAtom(_WORD *Src, size_t Size, _WORD *a3)
{
  size_t v4; // r15
  union _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // r13
  char PreviousMode; // r12
  _WORD *v10; // r14
  __int64 v11; // rcx
  __int64 result; // rax
  __int16 v13; // [rsp+20h] [rbp-288h] BYREF
  _WORD *v14; // [rsp+28h] [rbp-280h]
  __int128 v15; // [rsp+30h] [rbp-278h] BYREF
  __int64 v16; // [rsp+40h] [rbp-268h]
  __int64 v17; // [rsp+48h] [rbp-260h]
  int v18; // [rsp+50h] [rbp-258h]
  _WORD v19[256]; // [rsp+60h] [rbp-248h] BYREF

  v4 = (unsigned int)Size;
  v13 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v18 = 0;
  v17 = 0LL;
  if ( (unsigned int)PspUpdateCalloutParameters(2, (__int64)&v15, 0, 0LL) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    v7 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
    if ( v7 )
    {
      guard_dispatch_icall_no_overrides(v7[2].Count);
      ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v7);
    }
  }
  v8 = v16;
  if ( !v16 )
    return 3221225506LL;
  if ( (unsigned int)v4 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = Src;
  v14 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a3;
      *(_WORD *)v11 = *(_WORD *)v11;
      v10 = v14;
    }
    if ( Src )
    {
      if ( (_DWORD)v4 && ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v19;
      v14 = v19;
      memmove(v19, Src, v4);
      v19[v4 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlLookupAtomInAtomTable(v8, v10, &v13);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v13;
  }
  return (unsigned int)result;
}
