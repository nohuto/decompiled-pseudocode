/*
 * XREFs of GetPerfDomain @ 0x140045878
 * Callers:
 *     InitLegacyPccInternal @ 0x14000D764 (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x14002F62C (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140036F80 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1400384A0 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1400054C4 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1400089CC (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // r9d

  v4 = *(_QWORD *)(a1 + 560);
  if ( v4 )
  {
    *a3 = *(_DWORD *)(v4 + 40);
    v5 = a2;
    v6 = 568;
  }
  else
  {
    if ( !byte_140019708 || (v4 = *(_QWORD *)(a1 + 1080)) == 0 || *(_DWORD *)(v4 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext(a1, a2);
      return v7;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1088;
  }
  InitializeEnumerationContext(v4 + 16, v6, v5);
  return v7;
}
