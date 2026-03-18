/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x140A2B554
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x14076E710 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140A2B408 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x14076E790 (RtlpOpenBaseImageFileOptionsKeyEx.c)
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
