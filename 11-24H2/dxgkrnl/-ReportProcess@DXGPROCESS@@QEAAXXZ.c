/*
 * XREFs of ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1403A3C34
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403A35BC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x140077DB0 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESS::ReportProcess(DXGPROCESS *this)
{
  int v1; // r12d
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rsi
  int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 ProcessID; // rax
  __int64 v13; // rcx
  __int64 v14; // r8

  v1 = *((_DWORD *)this + 102);
  if ( (v1 & 0x100) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v7 = *((_QWORD *)this + 78);
      v8 = *((_QWORD *)this + 75);
      v9 = *((_DWORD *)this + 122);
      v10 = *(_QWORD *)(*((_QWORD *)this + 74) + 592LL);
      v11 = *(_QWORD *)(*((_QWORD *)this + 8) + 88LL);
      ProcessID = DXGPROCESS::GetProcessID(this);
      McTemplateK0ppqqpppz_EtwWriteTransfer(
        v13,
        &EventReportDxgProcessVm,
        v14,
        this,
        ProcessID,
        v9,
        v1,
        v11,
        v8,
        v10,
        v7);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v3 = *((_DWORD *)this + 122);
    v4 = DXGPROCESS::GetProcessID(this);
    McTemplateK0pxqt_EtwWriteTransfer(v5, &EventReportDxgProcess, v6, this, v4, v3, v1);
  }
}
