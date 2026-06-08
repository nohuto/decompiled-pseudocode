/*
 * XREFs of GetPerfDomain @ 0x1400403A0
 * Callers:
 *     InitLegacyPccInternal @ 0x14000A0F0 (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x140030F30 (ValidatePerfDomainSymmetry.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x14003385C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140033B84 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x140035840 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x140003C50 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x140004AAC (InitializeSingleEnumerationContext.c)
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
    if ( !byte_140014B28 || (v4 = *(_QWORD *)(a1 + 1080)) == 0 || *(_DWORD *)(v4 + 36) <= 1u )
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
