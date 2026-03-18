/*
 * XREFs of ?Clear@MouseOwner@CMouseProcessor@@QEAAXXZ @ 0x140127350
 * Callers:
 *     HandleInputDestDestruction @ 0x140060EC8 (HandleInputDestDestruction.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x14021CD28 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14021D0E8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ @ 0x140127378 (-ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall CMouseProcessor::MouseOwner::Clear(CMouseProcessor::MouseOwner *this)
{
  CInputDest::~CInputDest(this);
  _InterlockedExchange((volatile __int32 *)this + 30, 0);
  InputTraceLogging::Mouse::ClearSystemCapture();
}
