/*
 * XREFs of KdpCloseFileCallback @ 0x140B666B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 */

NTSTATUS __fastcall KdpCloseFileCallback(__int64 a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return ZwClose(v1);
  return result;
}
