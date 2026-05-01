/*
 * XREFs of ??1DISCOVER_OWNED_WINDOWS@CReportWindowVisibilityChange@@QEAA@XZ @ 0x18022132C
 * Callers:
 *     _CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange_::_1_::dtor$0 @ 0x1806D0E0A (_CReportWindowVisibilityChange--_ReportOwnedWindowsVisibilityChange_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CReportWindowVisibilityChange::DISCOVER_OWNED_WINDOWS::~DISCOVER_OWNED_WINDOWS(
        CReportWindowVisibilityChange::DISCOVER_OWNED_WINDOWS *this)
{
  CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>((__int64)this + 16);
}
