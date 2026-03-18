/*
 * XREFs of _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x1401443C4
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___ @ 0x1401B3AC8 (W32AttachToProcessAndExecute__lambda_f6639040149d830ab05feaa79928b51c___.c)
 *     _lambda_228c94f87b50664141beb087d74bed1f_::operator() @ 0x1401B3C4C (_lambda_228c94f87b50664141beb087d74bed1f_--operator().c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1401443F8 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 */

__int64 lambda_f6639040149d830ab05feaa79928b51c_::operator()()
{
  _BYTE v1[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v1);
  CPTPProcessor::TraceEnvironment();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v1);
  return 0LL;
}
