/*
 * XREFs of RegisterHvPepContext @ 0x1400268B4
 * Callers:
 *     RegisterHvLpiStates @ 0x1400264CC (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1400269A0 (RegisterVmIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     memset @ 0x14000DAC0 (memset.c)
 */

NTSTATUS __fastcall RegisterHvPepContext(__int64 a1)
{
  NTSTATUS result; // eax
  _QWORD v3[18]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v3, 0, 0x88uLL);
  result = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), (PPROCESSOR_NUMBER)v3 + 1);
  if ( result >= 0 )
  {
    LODWORD(v3[0]) = 82;
    v3[1] = a1 + 1120;
    LODWORD(v3[12]) = 1;
    return ((__int64 (__fastcall *)(_QWORD *))qword_1400148D8)(v3);
  }
  return result;
}
