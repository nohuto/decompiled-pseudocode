/*
 * XREFs of NtDisplayString @ 0x1407B7CC0
 * Callers:
 *     <none>
 * Callees:
 *     BgkDisplayStringEx @ 0x14058CD24 (BgkDisplayStringEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtDisplayString(PUNICODE_STRING String)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v4; // rax
  _WORD *v5; // rsi
  _WORD *Pool2; // rax
  _WORD *v7; // rdi
  wchar_t *Buffer; // rax
  __int64 MaximumLength; // rcx
  _WORD *v10; // rax
  char v11; // bl
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
    Pool2 = (_WORD *)ExAllocatePool2(0x40uLL, HIWORD(P) + 2LL, 0x67727453u);
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
  if ( !Buffer )
    return 0;
  MaximumLength = String->MaximumLength;
  if ( !(_WORD)MaximumLength || !*Buffer )
    return 0;
  v10 = (_WORD *)ExAllocatePool2(0x40uLL, MaximumLength + 2, 0x67727453u);
  v7 = v10;
  if ( !v10 )
    return -1073741801;
  memmove(v10, String->Buffer, String->MaximumLength);
  v7[(unsigned __int64)String->MaximumLength >> 1] = 0;
LABEL_21:
  v11 = BgkDisplayStringEx(v7);
  ExFreePoolWithTag(v7, 0);
  if ( !v11 )
    return -1073741823;
  return 0;
}
