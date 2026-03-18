/*
 * XREFs of EtwTraceTouchPadCurtainSize @ 0x1401B4F10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqqt_EtwWriteTransfer @ 0x1401B59C4 (McTemplateK0qqqt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainSize(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0qqqt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
