/*
 * XREFs of ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x140035960
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x1400357A0 (--1CAudioProcessor@@QEAA@XZ.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$4 @ 0x140093F04 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$4.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140058D7C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::~CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>(
        struct _RTL_CRITICAL_SECTION *a1)
{
  DeleteCriticalSection(a1 + 3);
  `eh vector destructor iterator'(
    a1,
    0x30uLL,
    2uLL,
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::~CAtlList<CConnectionNode *,CConnectionNodeTraits>);
}
