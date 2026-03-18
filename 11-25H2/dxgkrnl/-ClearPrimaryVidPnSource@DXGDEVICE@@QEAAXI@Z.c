/*
 * XREFs of ?ClearPrimaryVidPnSource@DXGDEVICE@@QEAAXI@Z @ 0x14005710C
 * Callers:
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x140312C30 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::ClearPrimaryVidPnSource(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = (unsigned int)a2;
  WdLogGlobalForLineNumber = 897;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 42);
  *((_DWORD *)this + v5 + 310) &= 0xFFFFFCFF;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
}
