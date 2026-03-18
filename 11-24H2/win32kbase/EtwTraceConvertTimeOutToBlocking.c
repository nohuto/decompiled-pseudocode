/*
 * XREFs of EtwTraceConvertTimeOutToBlocking @ 0x1401B4260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1400A5190 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0c_EtwWriteTransfer @ 0x1401B5494 (McTemplateK0c_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceConvertTimeOutToBlocking(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v1) = GetCallbackCount(a1);
    McTemplateK0c_EtwWriteTransfer(v3, v2, v4, v1);
  }
}
