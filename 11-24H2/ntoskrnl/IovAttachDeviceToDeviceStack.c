/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x140B84514
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403B38E4 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     IovUtilFlushStackCache @ 0x140B949FC (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return IovUtilFlushStackCache(a2);
  return result;
}
