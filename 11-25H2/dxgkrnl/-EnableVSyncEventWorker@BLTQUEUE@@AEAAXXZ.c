/*
 * XREFs of ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x14042E128
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x140091EB0 (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1403A59D4 (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 */

void __fastcall BLTQUEUE::EnableVSyncEventWorker(BLTQUEUE *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 103);
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 103) = v1 + 1;
  BLTQUEUE::StartVSync((__int64)this, 0, 5);
  if ( !(unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
    *((_BYTE *)this + 603) = 0;
}
