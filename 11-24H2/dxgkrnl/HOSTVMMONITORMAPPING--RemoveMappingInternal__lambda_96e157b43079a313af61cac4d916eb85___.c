/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x140051EFC
 * Callers:
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140051E78 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011930 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140057A88 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078FB8 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401F3C40 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___(
        _QWORD *a1,
        _DWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // r15d
  int v6; // r8d
  _QWORD *v7; // rdi
  _DWORD *v8; // rsi
  _DWORD *v9; // rbx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r8
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rbx
  volatile __int32 *v19; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v20; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v21; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v22; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v24[2]; // [rsp+40h] [rbp-40h] BYREF
  char v25[8]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v28; // [rsp+78h] [rbp-8h]

  v2 = a1 + 2;
  v28 = 0;
  v26 = a1 + 2;
  v24[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v24;
  v24[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v24;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock(a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v7 = (_QWORD *)*a1;
  v28 = 1;
  if ( v7 != a1 )
  {
    v8 = *a2;
    do
    {
      v9 = v7;
      v7 = (_QWORD *)*v7;
      if ( v9[4] == *v8 && v9[5] == v8[1] )
      {
        v10 = v9[6];
        if ( v10 == *a2[1] )
        {
          v11 = *((_QWORD *)v9 + 6);
          if ( v11 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
              McTemplateK0xqpp_EtwWriteTransfer(
                v11,
                (unsigned int)&RemoteMonitorRemoveMapping,
                v6,
                *((_QWORD *)v9 + 2),
                v10,
                v11,
                *((_QWORD *)v9 + 4));
            v12 = *(_QWORD *)v9;
            if ( *(_DWORD **)(*(_QWORD *)v9 + 8LL) != v9
              || (v13 = (_QWORD *)*((_QWORD *)v9 + 1), (_DWORD *)*v13 != v9)
              || (*v13 = v12,
                  *(_QWORD *)(v12 + 8) = v13,
                  v14 = v24[0],
                  *((HOST_VMMONITOR_MAPPING_ENTRY ***)v24[0] + 1) != v24) )
            {
LABEL_26:
              __fastfail(3u);
            }
            *(HOST_VMMONITOR_MAPPING_ENTRY **)v9 = v24[0];
            *((_QWORD *)v9 + 1) = v24;
            v5 = 0;
            *((_QWORD *)v14 + 1) = v9;
            v24[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v9;
          }
        }
      }
    }
    while ( v7 != a1 );
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v25);
  v17 = v24[0];
  while ( v17 != (HOST_VMMONITOR_MAPPING_ENTRY *)v24 )
  {
    v18 = v17;
    v17 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v17;
    if ( *((_QWORD *)v18 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v18 + 9), *((_DWORD *)v18 + 16), v16);
    }
    else
    {
      v19 = (volatile __int32 *)*((_QWORD *)v18 + 7);
      if ( v19 )
      {
        _InterlockedExchange(v19, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v18 + 7) + 8LL), 0LL);
      }
    }
    v20 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v18;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v18 + 8LL) != v18 )
      goto LABEL_26;
    v21 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v18 + 1);
    if ( *v21 != v18 )
      goto LABEL_26;
    *v21 = v20;
    *((_QWORD *)v20 + 1) = v21;
    v22 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v18 + 11);
    if ( v22 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v22);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v18, v15);
  }
  return v5;
}
