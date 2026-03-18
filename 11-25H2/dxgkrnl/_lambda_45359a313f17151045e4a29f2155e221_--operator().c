/*
 * XREFs of _lambda_45359a313f17151045e4a29f2155e221_::operator() @ 0x140078040
 * Callers:
 *     ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x140030D10 (-SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z.c)
 * Callees:
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078940 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ?VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z @ 0x14007B498 (-VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z.c)
 */

char __fastcall lambda_45359a313f17151045e4a29f2155e221_::operator()(__int64 a1, __int64 a2)
{
  struct _LUID *v3; // rdx
  unsigned int v4; // r10d
  int v5; // r8d
  int v6; // ecx
  int v7; // r8d

  v3 = *(struct _LUID **)a1;
  if ( *(_DWORD *)(a2 + 16) == **(_DWORD **)a1 && *(_DWORD *)(a2 + 20) == v3->HighPart )
  {
    v4 = *(_DWORD *)(a2 + 24);
    v5 = **(_DWORD **)(a1 + 8);
    if ( v4 == v5 || v5 == -1 )
    {
      if ( *(_QWORD *)(a2 + 32) )
      {
        if ( *(_DWORD *)(a2 + 40) >= 0x25u )
        {
          DXG_HOST_GLOBAL_VMBUS::VmBusSendHostMonitorPower(*(void **)(a2 + 32), *v3, v4, **(_BYTE **)(a1 + 16));
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
            McTemplateK0xqpp_EtwWriteTransfer(
              v6,
              (unsigned int)&RemoteMonitorVSyncTrigger,
              v7,
              *(_QWORD *)(a2 + 16),
              *(_DWORD *)(a2 + 24),
              *(_QWORD *)(a2 + 48),
              *(_QWORD *)(a2 + 32));
        }
      }
    }
  }
  return 1;
}
