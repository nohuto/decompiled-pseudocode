/*
 * XREFs of IopFileUtilWalkDirectoryTreeBottomUp @ 0x140733820
 * Callers:
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140733A20 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  __int64 Length; // rdx
  int v3; // edi
  UNICODE_STRING *Pool2; // rax
  PVOID *v5; // rbx
  _QWORD *v6; // rax
  PVOID **v7; // rcx
  PVOID v8; // rbx
  PVOID *v9; // rax
  PVOID *v10; // rax
  __int16 v12; // [rsp+28h] [rbp-D8h]
  PVOID v13; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int64 v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+60h] [rbp-A0h] BYREF

  Length = SourceString->Length;
  P = &v13;
  v13 = &v13;
  v15[1] = (__int64)v15;
  v3 = 0;
  v15[0] = (__int64)v15;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, Length + 38, 0x75466F49u);
  v5 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    Pool2[1].Length = 0;
    Pool2[1].MaximumLength = SourceString->Length;
    Pool2[1].Buffer = &Pool2[2].Length;
    RtlCopyUnicodeString(Pool2 + 1, SourceString);
    v6 = v13;
    if ( *((PVOID **)v13 + 1) != &v13 )
LABEL_19:
      __fastfail(3u);
    *v5 = v13;
    v5[1] = &v13;
    v6[1] = v5;
    v13 = v5;
    while ( v5 != &v13 )
    {
      v3 = IopFileUtilWalkDirectoryTreeHelper((int)v5 + 16, 8, 0, 0, FileInformation, v12, (__int64)&v13);
      if ( v3 < 0 )
        goto LABEL_17;
      v5 = (PVOID *)*v5;
    }
    while ( 1 )
    {
      v7 = (PVOID **)v13;
      if ( v13 == &v13 )
        break;
      v8 = P;
      if ( *(PVOID **)P != &v13 )
        goto LABEL_19;
      v9 = (PVOID *)*((_QWORD *)P + 1);
      if ( *v9 != P )
        goto LABEL_19;
      P = (PVOID)*((_QWORD *)P + 1);
      *v9 = &v13;
      v3 = IopFileUtilWalkDirectoryTreeHelper(
             (int)v8 + 16,
             7,
             (int)PpLastGoodDeleteFilesCallback,
             0,
             FileInformation,
             v12,
             (__int64)v15);
      ExFreePoolWithTag(v8, 0x75466F49u);
    }
    if ( v3 < 0 )
      goto LABEL_13;
  }
  else
  {
    v3 = -1073741670;
LABEL_17:
    while ( 1 )
    {
      v7 = (PVOID **)v13;
LABEL_13:
      if ( v7 == (PVOID **)&v13 )
        break;
      if ( v7[1] != &v13 )
        goto LABEL_19;
      v10 = *v7;
      if ( (*v7)[1] != v7 )
        goto LABEL_19;
      v13 = *v7;
      v10[1] = &v13;
      ExFreePoolWithTag(v7, 0x75466F49u);
    }
  }
  return (unsigned int)v3;
}
