/*
 * XREFs of ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401EB7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x14019BF1C (-CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter(struct _KTHREAD ***a1, void *a2)
{
  unsigned __int64 v3; // rdx
  struct _KTHREAD **v4; // rcx
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF

  COREACCESS::COREACCESS((COREACCESS *)v6, (struct DXGADAPTER *const)a1);
  COREACCESS::AcquireShared((COREACCESS *)v6, 0LL);
  v4 = a1[391];
  if ( v4 )
    ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(v4);
  COREACCESS::~COREACCESS((COREACCESS *)v6, v3);
  return 0LL;
}
