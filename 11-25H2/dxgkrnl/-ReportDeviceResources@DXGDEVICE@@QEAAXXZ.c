/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x14039BBC0
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403C1254 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x14039BCC0 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *i; // rbx
  struct DXGALLOCATION *v3; // rdi
  BOOL v4; // ebp
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v5, this + 30);
  for ( i = this[7]; i; i = (struct _KTHREAD *)*((_QWORD *)i + 5) )
  {
    v4 = (*((_DWORD *)i + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)i + 7) + 12LL) & 2) == 0;
    v3 = (struct DXGALLOCATION *)*((_QWORD *)i + 3);
    while ( v3 )
    {
      DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v3, v4);
      v3 = (struct DXGALLOCATION *)*((_QWORD *)v3 + 8);
      if ( (*((_DWORD *)i + 1) & 1) != 0 )
        *(_DWORD *)(*((_QWORD *)i + 7) + 12LL) |= 2u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5);
}
