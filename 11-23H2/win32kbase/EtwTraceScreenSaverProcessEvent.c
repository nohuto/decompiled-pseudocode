/*
 * XREFs of EtwTraceScreenSaverProcessEvent @ 0x1C013B01C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C013C2AC (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceScreenSaverProcessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &ScreenSaverProcessEvent, a3, (unsigned int)a1);
  return result;
}
