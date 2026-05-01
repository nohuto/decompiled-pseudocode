/*
 * XREFs of TestControlReporting @ 0x18041B3A0
 * Callers:
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

FARPROC TestControlReporting()
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting[0];
  if ( `TestControlReporting'::`2'::s_pfnTestControlReporting[0] )
    return (FARPROC)((__int64 (__fastcall *)(_QWORD))result)(0LL);
  KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting");
  `TestControlReporting'::`2'::s_pfnTestControlReporting[0] = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(_QWORD))result)(0LL);
  return result;
}
