/*
 * XREFs of ?NotifySyncLock@CTargetStats@@QEAAXI@Z @ 0x1802044D4
 * Callers:
 *     ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x180097250 (-SyncLock@CDDisplayRenderTarget@@UEAAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTargetStats::NotifySyncLock(CTargetStats *this, unsigned int a2)
{
  __int64 v2; // r8

  *((_DWORD *)this + 62) += a2;
  ++*((_DWORD *)this + 63);
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
  {
    *((_QWORD *)this + 24) = v2 + *((_QWORD *)this + 25) * a2;
    *((_DWORD *)this + 52) += a2;
  }
}
