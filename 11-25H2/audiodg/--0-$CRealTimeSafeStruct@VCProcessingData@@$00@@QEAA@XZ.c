/*
 * XREFs of ??0?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x14003D40C
 * Callers:
 *     ??0CAudioProcessor@@QEAA@XZ @ 0x14003D26C (--0CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14003D380 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1400594CC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::CRealTimeSafeStruct<CProcessingData,1>(__int64 a1)
{
  `eh vector constructor iterator'(
    (void *)a1,
    0x90uLL,
    2uLL,
    (void (*)(void *))CProcessingData::CProcessingData,
    (void (*)(void *))CProcessingData::~CProcessingData);
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 336));
  *(_WORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 288) = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_BYTE *)(a1 + 376) = 0;
  return a1;
}
