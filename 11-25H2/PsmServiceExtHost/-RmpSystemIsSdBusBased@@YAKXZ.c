/*
 * XREFs of ?RmpSystemIsSdBusBased@@YAKXZ @ 0x180090C4C
 * Callers:
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180085F78 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 RmpSystemIsSdBusBased(void)
{
  unsigned int v0; // ebx
  void *FileHandle; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v3[2]; // [rsp+60h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  __int64 InputBuffer; // [rsp+B0h] [rbp+17h] BYREF
  int v7; // [rsp+B8h] [rbp+1Fh]
  __int128 OutputBuffer; // [rsp+C0h] [rbp+27h] BYREF
  __int128 v9; // [rsp+D0h] [rbp+37h]

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v3[0] = 2490404LL;
  FileHandle = 0LL;
  InputBuffer = 0LL;
  v7 = 0;
  IoStatusBlock = 0LL;
  v3[1] = L"\\Device\\BootDevice";
  v0 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  OutputBuffer = 0LL;
  ObjectAttributes.Attributes = 64;
  v9 = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
  {
    v7 = 0;
    InputBuffer = 1LL;
    if ( NtDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x2D1400u,
           &InputBuffer,
           0xCu,
           &OutputBuffer,
           0x20u) >= 0 )
      LOBYTE(v0) = BYTE8(v9) == 12;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  return v0;
}
