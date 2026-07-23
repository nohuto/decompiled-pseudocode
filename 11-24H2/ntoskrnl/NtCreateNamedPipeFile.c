/*
 * XREFs of NtCreateNamedPipeFile @ 0x140A24AA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 */

NTSTATUS __cdecl NtCreateNamedPipeFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        ULONG NamedPipeType,
        ULONG ReadMode,
        ULONG CompletionMode,
        ULONG MaximumInstances,
        ULONG InboundQuota,
        ULONG OutboundQuota,
        PLARGE_INTEGER DefaultTimeout)
{
  _DWORD v15[6]; // [rsp+80h] [rbp-38h] BYREF
  LONGLONG QuadPart; // [rsp+98h] [rbp-20h]
  char v17; // [rsp+A0h] [rbp-18h]
  int v18; // [rsp+A1h] [rbp-17h]
  __int16 v19; // [rsp+A5h] [rbp-13h]
  char v20; // [rsp+A7h] [rbp-11h]

  QuadPart = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( DefaultTimeout )
  {
    v17 = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)DefaultTimeout & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = DefaultTimeout->QuadPart;
    }
    else
    {
      QuadPart = DefaultTimeout->QuadPart;
    }
  }
  else
  {
    v17 = 0;
  }
  v15[0] = NamedPipeType;
  v15[1] = ReadMode;
  v15[2] = CompletionMode;
  v15[3] = MaximumInstances;
  v15[4] = InboundQuota;
  v15[5] = OutboundQuota;
  return IopCreateFile(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (NTSTATUS *)&IoStatusBlock->0,
           0LL,
           0,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           0LL,
           0,
           1,
           v15,
           0,
           0,
           0LL);
}
