/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18007AD58
 * Callers:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007AFB0 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 *     __lambda_0f325790d88d3e0e1d8faff7704602cc_::operator()_::_1_::dtor$1 @ 0x1800B9DCE (__lambda_0f325790d88d3e0e1d8faff7704602cc_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18004C6E0 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(wil::ActivityThreadWatcher *this)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::ActivityThreadWatcher *)((char *)this + 32));
  wil::details::StoredCallContextInfo::ClearMessage(this);
}
