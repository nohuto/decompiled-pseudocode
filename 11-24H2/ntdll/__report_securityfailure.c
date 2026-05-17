/*
 * XREFs of __report_securityfailure @ 0x180120A48
 * Callers:
 *     __report_rangecheckfailure @ 0x180120A2C (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x180120888 (__raise_securityfailure.c)
 *     RtlCaptureContext @ 0x180120C00 (RtlCaptureContext.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  RtlCaptureContext(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1801CD860 = retaddr;
  dword_1801CD850 = -1073740791;
  dword_1801CD854 = 1;
  dword_1801CD868 = 1;
  unk_1801CD870 = v2;
  _raise_securityfailure();
}
