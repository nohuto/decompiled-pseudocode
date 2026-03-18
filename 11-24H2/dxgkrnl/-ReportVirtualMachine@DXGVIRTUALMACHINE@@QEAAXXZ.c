/*
 * XREFs of ?ReportVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401ED5EC
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403A35BC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pppj_EtwWriteTransfer @ 0x140077D18 (McTemplateK0pppj_EtwWriteTransfer.c)
 */

void __fastcall DXGVIRTUALMACHINE::ReportVirtualMachine(DXGVIRTUALMACHINE *this, __int64 a2, __int64 a3)
{
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pppj_EtwWriteTransfer(
      (__int64)this,
      &EventReportVirtualMachine,
      a3,
      this,
      *((_QWORD *)this + 7),
      *((_QWORD *)this + 34),
      (char *)this + 288);
}
