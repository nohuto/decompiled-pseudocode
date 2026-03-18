/*
 * XREFs of ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401B31EC
 * Callers:
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 *     SendWinlogonPowerMessageWorker @ 0x1401B33B0 (SendWinlogonPowerMessageWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection(struct _EX_RUNDOWN_REF **this)
{
  struct _EX_RUNDOWN_REF *v1; // rcx

  v1 = *this;
  if ( v1 )
    ExReleaseRundownProtection(v1);
}
