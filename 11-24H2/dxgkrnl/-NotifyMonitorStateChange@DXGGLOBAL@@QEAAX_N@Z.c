/*
 * XREFs of ?NotifyMonitorStateChange@DXGGLOBAL@@QEAAX_N@Z @ 0x1403E8A40
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402903F4 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::NotifyMonitorStateChange(DXGGLOBAL *this, char a2)
{
  char *v3; // rdi
  int v5; // r8d
  int v6; // eax
  bool v7; // zf
  __int64 Pool2; // rax

  v3 = (char *)this + 305904;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = *((_DWORD *)this + 76483);
  if ( a2 )
  {
    v6 = v5 + 1;
    v7 = v5 == 0;
  }
  else
  {
    if ( v5 <= 0 )
      goto LABEL_8;
    v6 = v5 - 1;
    v7 = v5 == 1;
  }
  *((_DWORD *)this + 76483) = v6;
  if ( v7 )
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1265072196LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = MonitorStateChangeThread;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)(Pool2 + 32) = this;
      *(_BYTE *)(Pool2 + 40) = a2;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, NormalWorkQueue);
    }
  }
LABEL_8:
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
