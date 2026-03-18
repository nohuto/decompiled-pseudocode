/*
 * XREFs of ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1403B3124
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403B2AAC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x140077318 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESS::ReportProcess(DXGPROCESS *this)
{
  __int64 v1; // r8

  v1 = *((unsigned int *)this + 102);
  if ( (*((_DWORD *)this + 102) & 0x100) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqpppz_EtwWriteTransfer(*((_QWORD *)this + 74), &EventReportDxgProcessVm, v1);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0pxqt_EtwWriteTransfer(*((_QWORD *)this + 8), &EventReportDxgProcess, v1);
  }
}
