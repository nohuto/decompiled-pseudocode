/*
 * XREFs of RtlVirtualUnwind @ 0x180045620
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18011EAE0 (__report_gsfailure.c)
 * Callees:
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 *     RtlpValidateContextFlags @ 0x180044820 (RtlpValidateContextFlags.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  int v12; // eax
  int P1Home; // eax
  int P3Home; // edx
  unsigned int P1Home_high; // r8d
  unsigned int P3Home_high; // r9d
  EXCEPTION_DISPOSITION (__cdecl *v18)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-38h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-30h] BYREF

  v18 = 0LL;
  v19[0] = 0LL;
  v19[1] = 0LL;
  v12 = RtlpValidateContextFlags(ContextRecord->ContextFlags, 0LL);
  if ( v12 >= 0 )
  {
    if ( (ContextRecord->ContextFlags & 0x100000) != 0 )
      goto LABEL_3;
LABEL_12:
    ContextRecord->ContextFlags = ContextRecord->ContextFlags & 0xF800001F | 0x100000;
    goto LABEL_4;
  }
  if ( v12 == -1073741811 )
    goto LABEL_12;
LABEL_3:
  if ( v12 < 0 )
  {
    ContextRecord->ContextFlags = 1048587;
    goto LABEL_11;
  }
LABEL_4:
  if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040 )
  {
    P1Home = ContextRecord[1].P1Home;
    P3Home = ContextRecord[1].P3Home;
    if ( P1Home > P3Home
      || (P1Home_high = HIDWORD(ContextRecord[1].P1Home),
          P3Home_high = HIDWORD(ContextRecord[1].P3Home),
          P1Home_high < 0x530)
      || (int)(P1Home_high + P1Home) < (int)(P3Home_high + P3Home)
      || HIDWORD(ContextRecord[1].P2Home) != 1232
      || P3Home_high < 0x40
      || (struct _CONTEXT *)((char *)&ContextRecord[1] + SLODWORD(ContextRecord[1].P2Home)) != ContextRecord )
    {
      ContextRecord->ContextFlags &= ~0x40u;
    }
  }
LABEL_11:
  v19[2] = ContextPointers;
  RtlpxVirtualUnwind(
    HandlerType,
    ImageBase,
    (char *)ControlPc,
    &FunctionEntry->BeginAddress,
    (__int64)ContextRecord,
    0LL,
    HandlerData,
    (char ***)EstablisherFrame,
    &v18,
    (__int64)v19,
    0);
  return v18;
}
