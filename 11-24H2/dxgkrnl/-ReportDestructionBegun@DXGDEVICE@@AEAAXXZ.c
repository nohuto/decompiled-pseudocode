/*
 * XREFs of ?ReportDestructionBegun@DXGDEVICE@@AEAAXXZ @ 0x1403678E8
 * Callers:
 *     ?ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034FAE8 (-ScheduleDeferredDestruction@DXGDEVICE@@QEAAXU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINAT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::ReportDestructionBegun(DXGDEVICE *this)
{
  DXGPUSHLOCK *v1; // rdi
  bool v3; // zf
  _BYTE v4[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]

  v1 = (DXGDEVICE *)((char *)this + 176);
  v5 = (char *)this + 176;
  if ( this != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)this + 23) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive(v1);
  v3 = ++*((_DWORD *)this + 480) == 1;
  v6 = 2;
  if ( v3 )
    KeClearEvent(*((PRKEVENT *)this + 241));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4);
}
