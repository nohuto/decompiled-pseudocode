/*
 * XREFs of EtwTraceConvertTimeOutToBlocking @ 0x1C0138D50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1C00DEF06 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0c_EtwWriteTransfer @ 0x1C013BCB0 (McTemplateK0c_EtwWriteTransfer.c)
 */

void EtwTraceConvertTimeOutToBlocking()
{
  __int64 v0; // r9
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v0) = GetCallbackCount();
    McTemplateK0c_EtwWriteTransfer(v2, v1, v3, v0);
  }
}
