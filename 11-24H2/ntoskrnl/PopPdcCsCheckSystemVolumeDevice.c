/*
 * XREFs of PopPdcCsCheckSystemVolumeDevice @ 0x140C328E4
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1406A64F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     PopPdcCsDeviceNotification @ 0x140A89968 (PopPdcCsDeviceNotification.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140A9AD40 (PopNetIsDisconnectStandbyActive.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

void PopPdcCsCheckSystemVolumeDevice()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  HANDLE v2; // rcx
  int v3; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp-29h] BYREF
  int v6; // [rsp+68h] [rbp-21h]
  int v7; // [rsp+6Ch] [rbp-1Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  _QWORD InputBuffer[2]; // [rsp+B0h] [rbp+27h] BYREF
  __int64 OutputBuffer; // [rsp+C0h] [rbp+37h] BYREF
  int v12; // [rsp+C8h] [rbp+3Fh]

  memset(InputBuffer, 0, 12);
  OutputBuffer = 0LL;
  v12 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0;
  IoStatusBlock = 0LL;
  if ( PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc )
  {
    Buffer = IoArcBootDeviceName.Buffer;
    ObjectAttributes.ObjectName = &IoArcBootDeviceName;
    FileHandle = 0LL;
    v7 = 1;
    v6 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
    {
      *(_QWORD *)((char *)InputBuffer + 4) = 0LL;
      IoStatusBlock = 0LL;
      LODWORD(InputBuffer[0]) = 7;
      if ( ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D1400u,
             InputBuffer,
             0xCu,
             &OutputBuffer,
             0xCu) >= 0 )
      {
        if ( (_BYTE)v12 )
          PopBsdSkipLogging = 1;
        else
          BYTE1(v7) = 1;
      }
    }
    PopPdcCsDeviceNotification((__int64)&Buffer);
    v2 = FileHandle;
    if ( FileHandle )
      ZwClose(FileHandle);
    PopAcquirePolicyLock((__int64)v2, v0, v1);
    PopNetIsDisconnectStandbyActive(&v3);
    byte_140F0BB57 = (unsigned int)(v3 - 3) > 1;
    PopReleasePolicyLock();
  }
}
