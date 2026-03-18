/*
 * XREFs of EtwTraceGdiTransformHandle @ 0x140016B40
 * Callers:
 *     HmgModifyHandleType @ 0x140016130 (HmgModifyHandleType.c)
 * Callees:
 *     McTemplateK0ppqqq_EtwWriteTransfer @ 0x140016BBC (McTemplateK0ppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceGdiTransformHandle(int a1, char a2, char a3, char a4)
{
  __int64 CurrentProcess; // rax
  char ProcessSessionId; // al
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0ppqqq_EtwWriteTransfer(v11, v10, v12, a1, a2, a3, ProcessSessionId, a4);
  }
}
