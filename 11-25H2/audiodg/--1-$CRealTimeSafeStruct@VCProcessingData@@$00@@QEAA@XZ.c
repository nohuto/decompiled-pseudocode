/*
 * XREFs of ??1?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x140035CA0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140035AA0 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140058E6C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRealTimeSafeStruct<CProcessingData,1>::~CRealTimeSafeStruct<CProcessingData,1>(char *a1)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  `eh vector destructor iterator'(a1, 0x90uLL, 2uLL, (void (*)(void *))CProcessingData::~CProcessingData);
}
