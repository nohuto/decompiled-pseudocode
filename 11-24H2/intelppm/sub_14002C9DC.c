/*
 * XREFs of sub_14002C9DC @ 0x14002C9DC
 * Callers:
 *     sub_1400495E4 @ 0x1400495E4 (sub_1400495E4.c)
 * Callees:
 *     <none>
 */

NTSTATUS sub_14002C9DC()
{
  REGHANDLE v0; // rcx
  NTSTATUS result; // eax

  if ( byte_140019130 )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_140018C80 = 0;
    EtwUnregister(v0);
    result = EtwUnregister((REGHANDLE)DeviceObject.Queue.ListEntry.Blink);
    byte_140019130 = 0;
  }
  return result;
}
