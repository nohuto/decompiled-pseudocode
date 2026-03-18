/*
 * XREFs of EtwTraceUserCreateHandle @ 0x140063210
 * Callers:
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 *     HMCreateHandleForObject @ 0x140062FB0 (HMCreateHandleForObject.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032B8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceUserCreateHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+20h] [rbp-28h]
  int ProcessSessionId; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v4 = a3;
  v5 = a2;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
    v12 = v4;
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    v10 = v5;
    McTemplateK0pqqq_EtwWriteTransfer(v8, (__int64)&UserCreateHandle, v9, a1, v10, ProcessSessionId, v12);
  }
}
