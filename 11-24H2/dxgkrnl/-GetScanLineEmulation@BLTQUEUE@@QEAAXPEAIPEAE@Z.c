/*
 * XREFs of ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x140282508
 * Callers:
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x140198D5C (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1401F3AD4 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall BLTQUEUE::GetScanLineEmulation(struct _KTHREAD **this, unsigned int *a2, unsigned __int8 *a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // r8
  __int64 v9; // r9
  LONGLONG v10; // rax
  char v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 53, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v13 = 2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = (__int64)this[62];
  v8 = 0;
  if ( v7 )
  {
    v9 = *((unsigned int *)this + 128);
    v10 = v9 * (PerformanceCounter.QuadPart - (__int64)this[61]) / v7;
    if ( ((_DWORD)this[134] & 2) != 0 )
    {
      if ( (unsigned int)v10 >= (unsigned int)v9 )
        LODWORD(v10) = *((_DWORD *)this + 128);
    }
    else
    {
      LODWORD(v10) = (unsigned int)v10 % (unsigned int)v9;
    }
    if ( (unsigned int)v10 < *((_DWORD *)this + 126) || (unsigned int)v10 > *((_DWORD *)this + 127) )
      v8 = 1;
    *a3 = v8;
    *a2 = v10;
  }
  else
  {
    *a2 = 0;
    *a3 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
}
