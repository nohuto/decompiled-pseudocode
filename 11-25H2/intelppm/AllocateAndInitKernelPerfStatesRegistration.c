/*
 * XREFs of AllocateAndInitKernelPerfStatesRegistration @ 0x1400299E0
 * Callers:
 *     InitLegacyPccInternal @ 0x14000D764 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140036F80 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1400384A0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateAndInitKernelPerfStatesRegistration(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r14d
  __int64 result; // rax

  v6 = (32 * a2 + 24 * a3 + 591) & 0xFFFFFFF8;
  v7 = 32 * a2 + 584;
  result = ExAllocatePool2(64LL, v6 + 8 * a3 * a2, 1919119952LL);
  if ( result )
  {
    *(_DWORD *)result = 82;
    *(_QWORD *)(result + 568) = result + 584;
    *(_DWORD *)(result + 16) = a2;
    *(_QWORD *)(result + 560) = result + v7;
    *(_DWORD *)(result + 36) = a3;
    *(_QWORD *)(result + 576) = result + v6;
    if ( *(_BYTE *)(a1 + 1138) )
      *(_QWORD *)(result + 536) = PepParkPreference;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x28u) )
    {
      *(_QWORD *)(result + 544) = PepParkMask;
      *(_QWORD *)(result + 552) = PepPerfCheckComplete;
      *(_QWORD *)(result + 96) = *(_QWORD *)(a1 + 1120);
    }
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
      *(_QWORD *)(result + 512) = HwDebugUpdateProcessorData;
    *(_QWORD *)(result + 520) = PepProcQueryMeasCapabilities;
    *(_QWORD *)(result + 528) = PepProcQueryMeasValues;
  }
  return result;
}
