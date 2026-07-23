/*
 * XREFs of PopPdcCsCheckSystemVolumeDevice @ 0x140C34A24
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     PopPdcCsDeviceNotification @ 0x140A85D68 (PopPdcCsDeviceNotification.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140A962B0 (PopNetIsDisconnectStandbyActive.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

void PopPdcCsCheckSystemVolumeDevice()
{
  int v0; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp-29h] BYREF
  int v3; // [rsp+68h] [rbp-21h]
  int v4; // [rsp+6Ch] [rbp-1Dh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  _QWORD InputBuffer[2]; // [rsp+B0h] [rbp+27h] BYREF
  __int64 OutputBuffer; // [rsp+C0h] [rbp+37h] BYREF
  int v9; // [rsp+C8h] [rbp+3Fh]

  memset(InputBuffer, 0, 12);
  OutputBuffer = 0LL;
  v9 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v0 = 0;
  IoStatusBlock = 0LL;
  if ( PopPlatformAoAcCapabilityInitialized && PopPlatformAoAc )
  {
    Buffer = IoArcBootDeviceName.Buffer;
    ObjectAttributes.ObjectName = &IoArcBootDeviceName;
    FileHandle = 0LL;
    v4 = 1;
    v3 = 0;
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
        if ( (_BYTE)v9 )
          PopBsdSkipLogging = 1;
        else
          BYTE1(v4) = 1;
      }
    }
    PopPdcCsDeviceNotification((__int64)&Buffer);
    if ( FileHandle )
      ZwClose(FileHandle);
    PopAcquirePolicyLock();
    PopNetIsDisconnectStandbyActive(&v0);
    byte_140F0B677 = (unsigned int)(v0 - 3) > 1;
    PopReleasePolicyLock();
  }
}
