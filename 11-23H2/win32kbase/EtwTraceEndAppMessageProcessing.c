/*
 * XREFs of EtwTraceEndAppMessageProcessing @ 0x1C0096FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00DEF06 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cd_EtwWriteTransfer @ 0x1C00DF27C (McTemplateK0cd_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndAppMessageProcessing(int a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = GetCallbackCount();
    McTemplateK0cd_EtwWriteTransfer(v3, &EndAppMessageProcessing, v4, v2, a1);
  }
}
