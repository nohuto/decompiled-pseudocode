/*
 * XREFs of NtDisplayString @ 0x1407B7870
 * Callers:
 *     <none>
 * Callees:
 *     BgkDisplayStringEx @ 0x14058FD04 (BgkDisplayStringEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtDisplayString(unsigned __int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v4; // rax
  _WORD *v5; // rsi
  _WORD *Pool2; // rax
  _WORD *v7; // rdi
  _WORD *v8; // rax
  _WORD *v9; // rax
  char v10; // bl
  int P; // [rsp+40h] [rbp+8h]

  if ( !a1 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v4 = a1;
    P = *(_DWORD *)v4;
    v5 = *(_WORD **)(v4 + 8);
    if ( !v5 || !HIWORD(*(_DWORD *)v4) )
      return 0LL;
    if ( !*v5 )
      return 0LL;
    Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v5, HIWORD(P));
      v7[(unsigned __int64)HIWORD(P) >> 1] = 0;
      goto LABEL_21;
    }
    return 3221225495LL;
  }
  v8 = *(_WORD **)(a1 + 8);
  if ( !v8 || !*(_WORD *)(a1 + 2) || !*v8 )
    return 0LL;
  v9 = (_WORD *)ExAllocatePool2(0x40uLL);
  v7 = v9;
  if ( !v9 )
    return 3221225495LL;
  memmove(v9, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
  v7[(unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1] = 0;
LABEL_21:
  v10 = BgkDisplayStringEx(v7);
  ExFreePoolWithTag(v7, 0);
  if ( !v10 )
    return 3221225473LL;
  return 0LL;
}
