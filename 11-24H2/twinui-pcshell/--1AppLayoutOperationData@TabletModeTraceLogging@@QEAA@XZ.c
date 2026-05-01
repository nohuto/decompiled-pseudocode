/*
 * XREFs of ??1AppLayoutOperationData@TabletModeTraceLogging@@QEAA@XZ @ 0x180517D68
 * Callers:
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x18051DD88 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 *     _TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity_::_1_::dtor$0 @ 0x1806F1F48 (_TabletModeTraceLogging--ApplyLayoutOperationHelper--StartActivity_--_1_--dtor$0.c)
 * Callees:
 *     ??1AppLayoutData@TabletModeTraceLogging@@QEAA@XZ @ 0x180517D40 (--1AppLayoutData@TabletModeTraceLogging@@QEAA@XZ.c)
 */

void __fastcall TabletModeTraceLogging::AppLayoutOperationData::~AppLayoutOperationData(
        TabletModeTraceLogging::AppLayoutOperationData *this)
{
  TabletModeTraceLogging::AppLayoutData::~AppLayoutData((TabletModeTraceLogging::AppLayoutOperationData *)((char *)this + 120));
  TabletModeTraceLogging::AppLayoutData::~AppLayoutData(this);
}
