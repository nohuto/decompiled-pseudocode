/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1404110F4
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B580C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140392ADC (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rbx
  int IsEnabledDeviceUsageNoInline; // r14d
  BOOL v4; // ebp
  struct DXGALLOCATION *v5; // rdi
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v7, this + 30);
  v2 = this[7];
  IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
  while ( v2 )
  {
    v4 = (*((_DWORD *)v2 + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) & 2) == 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct _KTHREAD *)((char *)v2 + 80), 0);
    if ( IsEnabledDeviceUsageNoInline )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    v5 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 3);
    while ( v5 )
    {
      DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v5, v4);
      v5 = (struct DXGALLOCATION *)*((_QWORD *)v5 + 8);
      if ( (*((_DWORD *)v2 + 1) & 1) != 0 )
        *(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) |= 2u;
    }
    v2 = (struct _KTHREAD *)*((_QWORD *)v2 + 5);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
}
