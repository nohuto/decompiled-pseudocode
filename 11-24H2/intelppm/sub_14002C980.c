/*
 * XREFs of sub_14002C980 @ 0x14002C980
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002CD78 @ 0x14002CD78 (sub_14002CD78.c)
 */

__int64 sub_14002C980()
{
  REGHANDLE v0; // rcx

  if ( byte_140019130 )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_140018C80 = 0;
    EtwUnregister(v0);
    EtwUnregister((REGHANDLE)DeviceObject.Queue.ListEntry.Blink);
    byte_140019130 = 0;
  }
  return sub_14002CD78();
}
