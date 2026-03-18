/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x140B72514
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402A1BDC (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     IovUtilFlushStackCache @ 0x140B82A1C (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return IovUtilFlushStackCache(a2);
  return result;
}
