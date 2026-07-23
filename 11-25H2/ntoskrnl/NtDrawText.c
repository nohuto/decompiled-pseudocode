/*
 * XREFs of NtDrawText @ 0x140647B40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     BgkDrawText @ 0x140BA02DC (BgkDrawText.c)
 */

NTSTATUS __cdecl NtDrawText(PUNICODE_STRING Text)
{
  NTSTATUS v2; // edi
  void *v3; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v6; // rax
  int v7; // ecx
  const void *v8; // r14
  void *Pool2; // rax
  unsigned __int16 i; // dx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp+10h]

  v11 = 0LL;
  v2 = 0;
  v3 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( !Text )
    return -1073741811;
  if ( !PreviousMode )
    goto LABEL_14;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)Text < 0x7FFFFFFF0000LL )
    v6 = (__int64)Text;
  v7 = *(_DWORD *)v6;
  v12 = *(_DWORD *)v6;
  LODWORD(v11) = *(_DWORD *)v6;
  v8 = *(const void **)(v6 + 8);
  *((_QWORD *)&v11 + 1) = v8;
  if ( !v8 || !HIWORD(v7) )
    goto LABEL_21;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, v8, HIWORD(v12));
    *((_QWORD *)&v11 + 1) = v3;
    Text = (PUNICODE_STRING)&v11;
LABEL_14:
    v2 = -1073741811;
    for ( i = Text->MaximumLength >> 1; i; --i )
    {
      if ( !Text->Buffer[i - 1] )
      {
        v2 = 0;
        break;
      }
    }
    if ( v2 >= 0 )
      v2 = BgkDrawText(Text->Buffer);
    goto LABEL_21;
  }
  v2 = -1073741801;
LABEL_21:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
