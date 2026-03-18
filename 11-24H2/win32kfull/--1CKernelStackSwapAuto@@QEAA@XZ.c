/*
 * XREFs of ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x14018B41C
 * Callers:
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1402B1724 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

void __fastcall CKernelStackSwapAuto::~CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  if ( *((_QWORD *)this + 1) )
    CKernelStackSwap::TryEnableStackSwap(this);
}
