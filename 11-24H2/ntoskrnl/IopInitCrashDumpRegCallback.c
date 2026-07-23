/*
 * XREFs of IopInitCrashDumpRegCallback @ 0x140C1EA90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     IopInitializeCrashDump @ 0x14070EAE0 (IopInitializeCrashDump.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     IoCreateFile @ 0x140955480 (IoCreateFile.c)
 */

__int64 __fastcall IopInitCrashDumpRegCallback(__int64 a1, __int64 a2, const WCHAR *a3, int a4, __int64 a5, _BYTE *a6)
{
  _BYTE *v6; // rbx
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  UNICODE_STRING v10; // [rsp+90h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+67h] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = a6;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( a6 )
  {
    if ( !*a6 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          if ( a5 )
          {
            if ( RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 64;
              ObjectAttributes.ObjectName = &DestinationString;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( IoCreateFile(
                     &FileHandle,
                     0xC0100000,
                     &ObjectAttributes,
                     &IoStatusBlock,
                     0LL,
                     6u,
                     2u,
                     1u,
                     0x8008u,
                     0LL,
                     0,
                     CreateFileTypeNone,
                     0LL,
                     0x112u) >= 0 )
              {
                ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
                v10 = DestinationString;
                if ( IopInitializeCrashDump((__int64)FileHandle, (__int128 *)&v10) )
                  *v6 = 1;
                ExReleaseResourceLite(&IopCrashDumpLock);
                NtClose(FileHandle);
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
