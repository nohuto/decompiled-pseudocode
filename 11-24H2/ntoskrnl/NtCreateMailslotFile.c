/*
 * XREFs of NtCreateMailslotFile @ 0x140A75CB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 */

NTSTATUS __cdecl NtCreateMailslotFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CreateOptions,
        ULONG MailslotQuota,
        ULONG MaximumMessageSize,
        PLARGE_INTEGER ReadTimeout)
{
  __int64 v9[2]; // [rsp+80h] [rbp-28h] BYREF
  __int64 v10; // [rsp+90h] [rbp-18h]

  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  if ( ReadTimeout )
  {
    LOBYTE(v10) = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)ReadTimeout & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9[1] = ReadTimeout->QuadPart;
    }
    else
    {
      v9[1] = ReadTimeout->QuadPart;
    }
  }
  LODWORD(v9[0]) = MailslotQuota;
  HIDWORD(v9[0]) = MaximumMessageSize;
  return IopCreateFile(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (NTSTATUS *)&IoStatusBlock->0,
           0LL,
           0,
           3,
           2u,
           CreateOptions,
           0LL,
           0,
           2,
           v9,
           0,
           0,
           0LL);
}
