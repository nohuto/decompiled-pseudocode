/*
 * XREFs of EtwDwmSpriteDestroyEvent @ 0x1400ED6F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0px_EtwWriteTransfer @ 0x1400ED870 (McTemplateK0px_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwDwmSpriteDestroyEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0px_EtwWriteTransfer(a1, &DwmSpriteDestroyEvent, a3, a1, a2);
  return result;
}
