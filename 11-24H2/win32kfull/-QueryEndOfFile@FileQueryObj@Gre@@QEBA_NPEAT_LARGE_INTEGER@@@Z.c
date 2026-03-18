/*
 * XREFs of ?QueryEndOfFile@FileQueryObj@Gre@@QEBA_NPEAT_LARGE_INTEGER@@@Z @ 0x1401C7B4C
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1403048A4 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall Gre::FileQueryObj::QueryEndOfFile(void **this, union _LARGE_INTEGER *a2)
{
  void *v2; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int128 FileInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v2 = *this;
  v7 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( ZwQueryInformationFile(v2, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) < 0 )
    return 0;
  *a2 = *(union _LARGE_INTEGER *)((char *)&FileInformation + 8);
  return 1;
}
