/*
 * XREFs of ??0FileObj@Gre@@QEAA@PEBG_N@Z @ 0x1401A89DC
 * Callers:
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1401A8908 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1403047F4 (-bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140304C50 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 * Callees:
 *     <none>
 */

PHANDLE __fastcall Gre::FileObj::FileObj(PHANDLE FileHandle, const unsigned __int16 *a2, char a3)
{
  BOOLEAN v5; // si
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+27h] BYREF

  *FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v5 = IoSetThreadHardErrorMode(0);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( a3 )
    IoCreateFile(
      FileHandle,
      0x12019Fu,
      &ObjectAttributes,
      &IoStatusBlock,
      0LL,
      0x80u,
      7u,
      3u,
      0x10u,
      0LL,
      0,
      CreateFileTypeNone,
      0LL,
      0x301u);
  else
    IoCreateFile(
      FileHandle,
      0x120089u,
      &ObjectAttributes,
      &IoStatusBlock,
      0LL,
      0x80u,
      5u,
      1u,
      0x10u,
      0LL,
      0,
      CreateFileTypeNone,
      0LL,
      0x301u);
  IoSetThreadHardErrorMode(v5);
  return FileHandle;
}
