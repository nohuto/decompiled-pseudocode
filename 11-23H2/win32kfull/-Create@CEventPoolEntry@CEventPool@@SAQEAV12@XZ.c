/*
 * XREFs of ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C007C3B8
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00C9140 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdHostLifeTimeManager::ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c95735___ @ 0x1C00D3064 (UmfdHostLifeTimeManager--ExecuteCallbackIfUmfdHostIsReady__lambda_eef90ce73a6a62b5089d029612c957.c)
 * Callees:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C007C55C (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C0306958 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 */

struct CEventPool::CEventPoolEntry *CEventPool::CEventPoolEntry::Create(void)
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  struct CManualResetEvent *v2; // rax
  PVOID v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = EngAllocMem(0, 0x10u, 0x676D6466u);
  v1 = v0;
  if ( v0 )
  {
    v4 = v0;
    v2 = CManualResetEvent::Create();
    v1[1] = v2;
    if ( v2 )
      return (struct CEventPool::CEventPoolEntry *)v1;
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v4);
  }
  return 0LL;
}
