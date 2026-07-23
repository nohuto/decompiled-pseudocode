/*
 * XREFs of NtDisplayString @ 0x1407A83C0
 * Callers:
 *     <none>
 * Callees:
 *     BgkDisplayStringEx @ 0x14058C524 (BgkDisplayStringEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtDisplayString(PUNICODE_STRING String)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v4; // rax
  _WORD *v5; // rsi
  _WORD *Pool2; // rax
  _WORD *v7; // rdi
  wchar_t *Buffer; // rax
  _WORD *v9; // rax
  char v10; // bl
  int P; // [rsp+40h] [rbp+8h]

  if ( !String )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)String < 0x7FFFFFFF0000LL )
      v4 = (__int64)String;
    P = *(_DWORD *)v4;
    v5 = *(_WORD **)(v4 + 8);
    if ( !v5 || !HIWORD(*(_DWORD *)v4) )
      return 0;
    if ( !*v5 )
      return 0;
    Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v5, HIWORD(P));
      v7[(unsigned __int64)HIWORD(P) >> 1] = 0;
      goto LABEL_21;
    }
    return -1073741801;
  }
  Buffer = String->Buffer;
  if ( !Buffer || !String->MaximumLength || !*Buffer )
    return 0;
  v9 = (_WORD *)ExAllocatePool2(0x40uLL);
  v7 = v9;
  if ( !v9 )
    return -1073741801;
  memmove(v9, String->Buffer, String->MaximumLength);
  v7[(unsigned __int64)String->MaximumLength >> 1] = 0;
LABEL_21:
  v10 = BgkDisplayStringEx(v7);
  ExFreePoolWithTag(v7, 0);
  if ( !v10 )
    return -1073741823;
  return 0;
}
