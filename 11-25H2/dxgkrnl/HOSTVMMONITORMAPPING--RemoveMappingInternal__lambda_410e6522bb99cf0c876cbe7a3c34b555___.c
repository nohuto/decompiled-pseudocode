/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___ @ 0x140077D04
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078268 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014B30 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035A50 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140058008 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078940 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401EE29C (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___(
        _QWORD *a1,
        __int64 *a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r8
  HOST_VMMONITOR_MAPPING_ENTRY *v16; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rbx
  volatile __int32 *v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v19; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v20; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v21; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v23[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v24[48]; // [rsp+50h] [rbp-30h] BYREF

  v23[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v23;
  v23[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v23;
  v4 = -1073741275;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v24, a1 + 2, 1);
  v5 = (_QWORD *)*a1;
  while ( v5 != a1 )
  {
    v6 = *a2;
    v7 = v5;
    v5 = (_QWORD *)*v5;
    if ( v7[4] == *(_DWORD *)(*a2 + 16) && v7[5] == *(_DWORD *)(v6 + 20) )
    {
      v8 = v7[6];
      if ( v8 == *(_DWORD *)(v6 + 24) )
      {
        v9 = *((_QWORD *)v7 + 4);
        if ( v9 == *(_QWORD *)(v6 + 32) )
        {
          v10 = *((_QWORD *)v7 + 6);
          if ( v10 == *(_QWORD *)(v6 + 48) )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
              McTemplateK0xqpp_EtwWriteTransfer(
                v6,
                (unsigned int)&RemoteMonitorRemoveMapping,
                v9,
                *((_QWORD *)v7 + 2),
                v8,
                v10,
                *((_QWORD *)v7 + 4));
            v11 = *(_QWORD *)v7;
            if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7
              || (v12 = (_QWORD *)*((_QWORD *)v7 + 1), (_DWORD *)*v12 != v7)
              || (*v12 = v11,
                  *(_QWORD *)(v11 + 8) = v12,
                  v13 = v23[0],
                  *((HOST_VMMONITOR_MAPPING_ENTRY ***)v23[0] + 1) != v23) )
            {
LABEL_26:
              __fastfail(3u);
            }
            *(HOST_VMMONITOR_MAPPING_ENTRY **)v7 = v23[0];
            *((_QWORD *)v7 + 1) = v23;
            v4 = 0;
            *((_QWORD *)v13 + 1) = v7;
            v23[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v7;
          }
        }
      }
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v24);
  v16 = v23[0];
  while ( v16 != (HOST_VMMONITOR_MAPPING_ENTRY *)v23 )
  {
    v17 = v16;
    v16 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v16;
    if ( *((_QWORD *)v17 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v17 + 9), *((_DWORD *)v17 + 16), v15);
    }
    else
    {
      v18 = (volatile __int32 *)*((_QWORD *)v17 + 7);
      if ( v18 )
      {
        _InterlockedExchange(v18, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v17 + 7) + 8LL), 0LL);
      }
    }
    v19 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v17;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v17 + 8LL) != v17 )
      goto LABEL_26;
    v20 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v17 + 1);
    if ( *v20 != v17 )
      goto LABEL_26;
    *v20 = v19;
    *((_QWORD *)v19 + 1) = v20;
    v21 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v17 + 11);
    if ( v21 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v21);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v17, v14);
  }
  return v4;
}
