/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x140A25D24
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x14077D930 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140A25BD8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1406F6F2C (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  HANDLE Flink; // rdx
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Flink = CurrentServerSiloGlobals[76].Flink;
  Handle = Flink;
  if ( Flink )
  {
LABEL_2:
    *a1 = Flink;
    return 0;
  }
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( result >= 0 )
  {
    if ( RtlpDisableIFEOCaching
      || !_InterlockedCompareExchange64(
            (volatile signed __int64 *)&CurrentServerSiloGlobals[76],
            (signed __int64)Handle,
            0LL) )
    {
      Flink = Handle;
    }
    else
    {
      ZwClose(Handle);
      Flink = CurrentServerSiloGlobals[76].Flink;
    }
    goto LABEL_2;
  }
  return result;
}
