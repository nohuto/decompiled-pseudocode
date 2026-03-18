/*
 * XREFs of ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x14001380C
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x14032ACAC (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140015A54 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::SetDWMTargetVsync(BLTQUEUE *this, unsigned int a2)
{
  struct _KEVENT *v4; // rcx
  int v5; // ecx
  int v6; // r8d
  _BYTE v7[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (BLTQUEUE *)((char *)this + 424), 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v4 = (struct _KEVENT *)*((_QWORD *)this + 50);
  v9 = 2;
  KeResetEvent(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qqqqq_EtwWriteTransfer(
      v5,
      (unsigned int)&EventDWMVsyncCountWait,
      v6,
      a2,
      *((_DWORD *)this + 118),
      0,
      0,
      *((_DWORD *)this + 34));
  *((_DWORD *)this + 102) = a2;
  if ( a2 <= *((_DWORD *)this + 118) && a2 )
    KeSetEvent(*((PRKEVENT *)this + 50), 0, 0);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
}
