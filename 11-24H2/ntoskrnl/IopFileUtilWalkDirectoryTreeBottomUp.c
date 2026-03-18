/*
 * XREFs of IopFileUtilWalkDirectoryTreeBottomUp @ 0x1407358F0
 * Callers:
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  int v2; // edi
  UNICODE_STRING *Pool2; // rax
  PVOID *v4; // rbx
  _QWORD *v5; // rax
  PVOID **v6; // rcx
  PVOID v7; // rbx
  PVOID *v8; // rax
  PVOID *v9; // rax
  __int16 v11; // [rsp+28h] [rbp-D8h]
  PVOID v12; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int64 v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+60h] [rbp-A0h] BYREF

  P = &v12;
  v12 = &v12;
  v14[1] = (__int64)v14;
  v2 = 0;
  v14[0] = (__int64)v14;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  v4 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    Pool2[1].Length = 0;
    Pool2[1].MaximumLength = SourceString->Length;
    Pool2[1].Buffer = &Pool2[2].Length;
    RtlCopyUnicodeString(Pool2 + 1, SourceString);
    v5 = v12;
    if ( *((PVOID **)v12 + 1) != &v12 )
LABEL_19:
      __fastfail(3u);
    *v4 = v12;
    v4[1] = &v12;
    v5[1] = v4;
    v12 = v4;
    while ( v4 != &v12 )
    {
      v2 = IopFileUtilWalkDirectoryTreeHelper((int)v4 + 16, 8, 0, 0, FileInformation, v11, (__int64)&v12);
      if ( v2 < 0 )
        goto LABEL_17;
      v4 = (PVOID *)*v4;
    }
    while ( 1 )
    {
      v6 = (PVOID **)v12;
      if ( v12 == &v12 )
        break;
      v7 = P;
      if ( *(PVOID **)P != &v12 )
        goto LABEL_19;
      v8 = (PVOID *)*((_QWORD *)P + 1);
      if ( *v8 != P )
        goto LABEL_19;
      P = (PVOID)*((_QWORD *)P + 1);
      *v8 = &v12;
      v2 = IopFileUtilWalkDirectoryTreeHelper(
             (int)v7 + 16,
             7,
             (int)PpLastGoodDeleteFilesCallback,
             0,
             FileInformation,
             v11,
             (__int64)v14);
      ExFreePoolWithTag(v7, 0x75466F49u);
    }
    if ( v2 < 0 )
      goto LABEL_13;
  }
  else
  {
    v2 = -1073741670;
LABEL_17:
    while ( 1 )
    {
      v6 = (PVOID **)v12;
LABEL_13:
      if ( v6 == (PVOID **)&v12 )
        break;
      if ( v6[1] != &v12 )
        goto LABEL_19;
      v9 = *v6;
      if ( (*v6)[1] != v6 )
        goto LABEL_19;
      v12 = *v6;
      v9[1] = &v12;
      ExFreePoolWithTag(v6, 0x75466F49u);
    }
  }
  return (unsigned int)v2;
}
