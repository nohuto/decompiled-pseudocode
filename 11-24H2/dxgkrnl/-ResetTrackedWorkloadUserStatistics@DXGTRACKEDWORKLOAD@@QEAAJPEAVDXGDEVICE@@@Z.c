/*
 * XREFs of ?ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@@Z @ 0x140203E1C
 * Callers:
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x140204FD0 (NtDxgkResetTrackedWorkloadStatistics.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ResetTrackedWorkloadUserStatistics(struct _KTHREAD **this, struct DXGDEVICE *a2)
{
  unsigned int i; // ecx
  __int64 v4; // rdx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 5);
  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v4 = (__int64)this[4] + 136 * i;
    if ( *(_BYTE *)(v4 + 32) )
      *(_BYTE *)(v4 + 120) = 0;
  }
  *((_DWORD *)this + 48) = 0;
  this[25] = (struct _KTHREAD *)0x7FEFFFFFFFFFFFFFLL;
  this[27] = 0LL;
  this[26] = (struct _KTHREAD *)0xFFEFFFFFFFFFFFFFLL;
  this[28] = 0LL;
  this[38] = 0LL;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
  return 0LL;
}
