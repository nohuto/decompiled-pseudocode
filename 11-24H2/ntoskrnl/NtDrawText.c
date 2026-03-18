/*
 * XREFs of NtDrawText @ 0x140653A40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     BgkDrawText @ 0x140BB02DC (BgkDrawText.c)
 */

__int64 __fastcall NtDrawText(__int128 *a1)
{
  int v2; // edi
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
    return 3221225569LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !PreviousMode )
    goto LABEL_14;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v6 = (__int64)a1;
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
    a1 = &v11;
LABEL_14:
    v2 = -1073741811;
    for ( i = *((_WORD *)a1 + 1) >> 1; i; --i )
    {
      if ( !*(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * i - 2) )
      {
        v2 = 0;
        break;
      }
    }
    if ( v2 >= 0 )
      v2 = BgkDrawText(*((_QWORD *)a1 + 1));
    goto LABEL_21;
  }
  v2 = -1073741801;
LABEL_21:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v2;
}
