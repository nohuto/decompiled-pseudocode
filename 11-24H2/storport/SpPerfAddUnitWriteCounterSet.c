/*
 * XREFs of SpPerfAddUnitWriteCounterSet @ 0x1401BCF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SpPerfAddUnitWriteCounterSet(
        struct _PCW_BUFFER *a1,
        const UNICODE_STRING *a2,
        ULONG a3,
        const void *a4)
{
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  Data.Data = a4;
  Data.Size = 264;
  return PcwAddInstance(a1, a2, a3, 1u, &Data);
}
