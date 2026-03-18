/*
 * XREFs of EtwTraceWakeMIT @ 0x1400A4C40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x140034640 (McTemplateK0cd_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400A5190 (-GetCallbackCount@@YACXZ.c)
 */

void __fastcall EtwTraceWakeMIT(int a1)
{
  char CallbackCount; // al
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
  {
    CallbackCount = GetCallbackCount();
    LODWORD(v5) = a1;
    McTemplateK0cd_EtwWriteTransfer(v3, &EtwWakeMIT, v4, CallbackCount, v5);
  }
}
