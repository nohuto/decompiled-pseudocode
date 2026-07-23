/*
 * XREFs of HalpPerfInterrupt @ 0x1404359F0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140435A90 (Feature_Test52061194__private_IsEnabledNoReportingNoInline.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpPerfInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // di
  unsigned __int64 v3; // rdx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 136);
  v2 = 0;
  if ( (unsigned int)Feature_Test52061194__private_IsEnabledNoReportingNoInline() )
  {
    if ( HalpProfileInterface != &EmonProfileInterfaceEnhanced )
      goto LABEL_3;
    if ( (HalpProfileFeatures & 1) == 0 )
      goto LABEL_3;
    v6 = __readmsr(0x38Eu);
    v3 = (unsigned __int64)HIDWORD(v6) << 32;
    if ( (v6 & 0x80000000000000LL) == 0 )
      goto LABEL_3;
    if ( (_BYTE)KdDebuggerNotPresent )
    {
      v7 = __readmsr(0x570u);
      v3 = (unsigned __int64)HIDWORD(v7) << 32;
      if ( (v7 & 0x111100000000LL) != 0 )
        KeBugCheckEx(0x17Bu, 0LL, 0x570uLL, __readmsr(0x570u), 0x111100000000uLL);
    }
  }
  else
  {
    if ( HalpProfileInterface != &EmonProfileInterfaceOriginal )
      goto LABEL_3;
    if ( (HalpProfileFeatures & 1) == 0 )
      goto LABEL_3;
    v8 = __readmsr(0x38Eu);
    v3 = (unsigned __int64)HIDWORD(v8) << 32;
    if ( (v8 & 0x80000000000000LL) == 0 )
      goto LABEL_3;
    if ( (_BYTE)KdDebuggerNotPresent )
    {
      v9 = __readmsr(0x570u);
      v3 = (unsigned __int64)HIDWORD(v9) << 32;
      if ( (v9 & 0x111100000000LL) != 0 )
        KeBugCheckEx(0x17Bu, 0LL, 0x570uLL, __readmsr(0x570u), 0x111100000000uLL);
    }
  }
  if ( HalpProfileInterface[13] )
  {
    guard_dispatch_icall_no_overrides(v1, v3);
    v2 = 1;
  }
  if ( HalpProcessorTraceInterruptHandler )
    guard_dispatch_icall_no_overrides(v1, v3);
LABEL_3:
  if ( HalpProfileInterface[13] && !v2 )
    guard_dispatch_icall_no_overrides(v1, v3);
  if ( HalpPerfInterruptHandler )
  {
    guard_dispatch_icall_no_overrides(v1, v3);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v1, v3);
    guard_dispatch_icall_no_overrides(0LL, v5);
  }
  return 1;
}
