/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1400130F8
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1403D1B3C (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(DXGDEVICE *this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 i; // rsi
  _QWORD *v7; // rax
  bool v8; // zf
  _BYTE v9[32]; // [rsp+50h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (DXGDEVICE *)((char *)this + 336));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 246); i = (unsigned int)(i + 1) )
  {
    if ( a3 == *(const struct DXGALLOCATION **)(*((_QWORD *)this + v3 + 107) + 8 * i) )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v7[3] = a3;
      v7[4] = (unsigned int)i;
      v7[5] = v3;
      v8 = *((_BYTE *)this + 4 * v3 + 1240) == 0;
      WdLogGlobalForLineNumber = 871;
      if ( v8 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 873;
        DxgkLogInternalTriageEvent(
          0,
          262146,
          -1,
          (unsigned int)L"m_PrimaryDescription[VidPnSourceId].PrimaryCount",
          873LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_QWORD *)(*((_QWORD *)this + v3 + 107) + 8 * i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1240);
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
}
