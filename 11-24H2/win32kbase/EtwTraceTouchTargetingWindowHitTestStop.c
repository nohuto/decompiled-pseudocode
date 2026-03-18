/*
 * XREFs of EtwTraceTouchTargetingWindowHitTestStop @ 0x140092410
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchTargetingWindowHitTestStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchTargetingWindowHitTestStop, &W32kControlGuid);
  return result;
}
