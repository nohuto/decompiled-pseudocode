/*
 * XREFs of HalpMcUpdateMicrocode @ 0x1404CAC6C
 * Callers:
 *     HalpMcLoadMicrocodeWorker @ 0x140557660 (HalpMcLoadMicrocodeWorker.c)
 *     HalpLoadMicrocodeSerialized @ 0x1406FF910 (HalpLoadMicrocodeSerialized.c)
 *     HalpProcInitSystem @ 0x140B4F200 (HalpProcInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x140B51A3C (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     PrExtApplyPatch @ 0x1404CAD34 (PrExtApplyPatch.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HalpMcUpdateMicrocode(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned int BugCheckParameter1; // [rsp+30h] [rbp-28h]

  result = PrExtApplyPatch(a1, (unsigned int)McMicrocodePatchRecordSize);
  if ( (_DWORD)result == -1073741762 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    BugCheckParameter1 = _RAX;
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      v7 = __readmsr(0x8Bu);
      LODWORD(v8) = v7;
      goto LABEL_6;
    }
    if ( KeGetCurrentPrcb()->CpuVendor == 2 )
    {
      v8 = __readmsr(0x8Bu) >> 32;
LABEL_6:
      KeBugCheckEx(0x17Eu, BugCheckParameter1, 0LL, (unsigned int)v8, KeGetCurrentPrcb()->Number);
    }
    return 3221226080LL;
  }
  return result;
}
