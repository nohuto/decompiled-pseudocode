/*
 * XREFs of EtwTraceEndTranslateMessage @ 0x140120D30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x140034640 (McTemplateK0cd_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceEndTranslateMessage(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LODWORD(v4) = a2;
    return McTemplateK0cd_EtwWriteTransfer(a1, &EndTranslateMessage, a3, a1, v4);
  }
  return result;
}
