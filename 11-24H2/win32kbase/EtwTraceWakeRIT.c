/*
 * XREFs of EtwTraceWakeRIT @ 0x1400A43F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x140034640 (McTemplateK0cd_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400A5190 (-GetCallbackCount@@YACXZ.c)
 */

void __fastcall EtwTraceWakeRIT(int a1)
{
  char CallbackCount; // al
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    CallbackCount = GetCallbackCount();
    LODWORD(v5) = a1;
    McTemplateK0cd_EtwWriteTransfer(v3, &EtwWakeRIT, v4, CallbackCount, v5);
  }
}
