/*
 * XREFs of HalpMcUpdateMicrocode @ 0x1404D1C2C
 * Callers:
 *     HalpMcLoadMicrocodeWorker @ 0x140559A30 (HalpMcLoadMicrocodeWorker.c)
 *     HalpLoadMicrocodeSerialized @ 0x140701CD0 (HalpLoadMicrocodeSerialized.c)
 *     HalpProcInitSystem @ 0x140B4D1C0 (HalpProcInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x140B4F9EC (HalpDpPostReplaceInitialization.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     PrExtApplyPatch @ 0x1404D1CF4 (PrExtApplyPatch.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
