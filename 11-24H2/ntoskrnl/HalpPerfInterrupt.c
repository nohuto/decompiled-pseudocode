/*
 * XREFs of HalpPerfInterrupt @ 0x140441AF0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140441B90 (Feature_Test52061194__private_IsEnabledNoReportingNoInline.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpPerfInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // di
  int IsEnabledNoReportingNoInline; // eax
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 (__fastcall **v6)(); // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax

  v1 = *(_QWORD *)(a1 + 136);
  v2 = 0;
  IsEnabledNoReportingNoInline = Feature_Test52061194__private_IsEnabledNoReportingNoInline();
  v6 = HalpProfileInterface;
  if ( IsEnabledNoReportingNoInline )
  {
    if ( HalpProfileInterface != &EmonProfileInterfaceEnhanced )
      goto LABEL_3;
    if ( (HalpProfileFeatures & 1) == 0 )
      goto LABEL_3;
    v11 = __readmsr(0x38Eu);
    v4 = (unsigned __int64)HIDWORD(v11) << 32;
    if ( (v11 & 0x80000000000000LL) == 0 )
      goto LABEL_3;
    if ( (_BYTE)KdDebuggerNotPresent )
    {
      v5 = 1392LL;
      v12 = __readmsr(0x570u);
      v4 = (unsigned __int64)HIDWORD(v12) << 32;
      if ( (v12 & 0x111100000000LL) != 0 )
        KeBugCheckEx(0x17Bu, 0LL, 0x570uLL, __readmsr(0x570u), 0x111100000000uLL);
    }
  }
  else
  {
    if ( HalpProfileInterface != &EmonProfileInterfaceOriginal )
      goto LABEL_3;
    if ( (HalpProfileFeatures & 1) == 0 )
      goto LABEL_3;
    v13 = __readmsr(0x38Eu);
    v4 = (unsigned __int64)HIDWORD(v13) << 32;
    if ( (v13 & 0x80000000000000LL) == 0 )
      goto LABEL_3;
    if ( (_BYTE)KdDebuggerNotPresent )
    {
      v5 = 1392LL;
      v14 = __readmsr(0x570u);
      v4 = (unsigned __int64)HIDWORD(v14) << 32;
      if ( (v14 & 0x111100000000LL) != 0 )
        KeBugCheckEx(0x17Bu, 0LL, 0x570uLL, __readmsr(0x570u), 0x111100000000uLL);
    }
  }
  if ( HalpProfileInterface[13] )
  {
    guard_dispatch_icall_no_overrides(v1, v4, v5, HalpProfileInterface);
    v2 = 1;
  }
  if ( HalpProcessorTraceInterruptHandler )
    guard_dispatch_icall_no_overrides(v1, v4, v5, v6);
LABEL_3:
  if ( HalpProfileInterface[13] && !v2 )
    guard_dispatch_icall_no_overrides(v1, v4, v5, v6);
  if ( HalpPerfInterruptHandler )
  {
    guard_dispatch_icall_no_overrides(v1, v4, v5, v6);
  }
  else
  {
    guard_dispatch_icall_no_overrides(v1, v4, v5, v6);
    guard_dispatch_icall_no_overrides(0LL, v8, v9, v10);
  }
  return 1;
}
