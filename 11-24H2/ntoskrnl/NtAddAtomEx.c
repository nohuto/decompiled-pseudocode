/*
 * XREFs of NtAddAtomEx @ 0x140935520
 * Callers:
 *     NtAddAtom @ 0x1407C12C0 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x140431DA0 (RtlAddAtomToAtomTableEx.c)
 *     PsSessionGetWin32Callouts @ 0x14046B2A0 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EEDCC (PspUpdateCalloutParameters.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExCallCallBack @ 0x1409358AC (ExCallCallBack.c)
 */

__int64 __fastcall NtAddAtomEx(_WORD *Src, size_t Size, _WORD *a3, unsigned int a4)
{
  size_t v6; // rbx
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v9; // r11d
  __int64 v10; // r12
  char PreviousMode; // r15
  _WORD *v12; // r14
  __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int16 v15; // [rsp+20h] [rbp-288h] BYREF
  _WORD *v16; // [rsp+28h] [rbp-280h]
  __int128 v17; // [rsp+30h] [rbp-278h] BYREF
  __int64 v18; // [rsp+40h] [rbp-268h]
  __int64 v19; // [rsp+48h] [rbp-260h]
  int v20; // [rsp+50h] [rbp-258h]
  _WORD v21[256]; // [rsp+60h] [rbp-248h] BYREF

  v6 = (unsigned int)Size;
  v15 = 0;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225485LL;
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
    return 3221225506LL;
  if ( (unsigned int)v6 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = Src;
  v16 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a3;
      *(_WORD *)v13 = *(_WORD *)v13;
      v12 = v16;
    }
    if ( Src )
    {
      if ( (_DWORD)v6 && ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = v21;
      v16 = v21;
      memmove(v21, Src, v6);
      v21[v6 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlAddAtomToAtomTableEx(v10, v12, &v15, a4);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v15;
  }
  return (unsigned int)result;
}
