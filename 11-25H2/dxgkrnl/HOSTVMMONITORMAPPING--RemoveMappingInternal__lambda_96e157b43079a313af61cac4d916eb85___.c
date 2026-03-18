/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x140030E14
 * Callers:
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140030D90 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014B30 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140058008 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078940 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401EE29C (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___(
        _QWORD **a1,
        _DWORD **a2)
{
  unsigned int v4; // r15d
  int v5; // r8d
  _QWORD *v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // r8
  HOST_VMMONITOR_MAPPING_ENTRY *v9; // rdi
  _DWORD *v11; // r14
  _DWORD *v12; // rbx
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rbx
  volatile __int32 *v19; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v20; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v21; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v22; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v23[2]; // [rsp+40h] [rbp-40h] BYREF
  char v24[8]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD **v25; // [rsp+58h] [rbp-28h]
  char v26; // [rsp+78h] [rbp-8h]

  v26 = 0;
  v23[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v23;
  v23[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v23;
  v4 = -1073741275;
  v25 = a1 + 2;
  DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v24);
  v6 = *a1;
  if ( *a1 != a1 )
  {
    v11 = *a2;
    do
    {
      v12 = v6;
      v6 = (_QWORD *)*v6;
      if ( v12[4] == *v11 && v12[5] == v11[1] )
      {
        v13 = v12[6];
        if ( v13 == *a2[1] )
        {
          v14 = *((_QWORD *)v12 + 6);
          if ( v14 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
              McTemplateK0xqpp_EtwWriteTransfer(
                v14,
                (unsigned int)&RemoteMonitorRemoveMapping,
                v5,
                *((_QWORD *)v12 + 2),
                v13,
                v14,
                *((_QWORD *)v12 + 4));
            v15 = *(_QWORD *)v12;
            if ( *(_DWORD **)(*(_QWORD *)v12 + 8LL) != v12
              || (v16 = (_QWORD *)*((_QWORD *)v12 + 1), (_DWORD *)*v16 != v12)
              || (*v16 = v15,
                  *(_QWORD *)(v15 + 8) = v16,
                  v17 = v23[0],
                  *((HOST_VMMONITOR_MAPPING_ENTRY ***)v23[0] + 1) != v23) )
            {
LABEL_27:
              __fastfail(3u);
            }
            *(HOST_VMMONITOR_MAPPING_ENTRY **)v12 = v23[0];
            *((_QWORD *)v12 + 1) = v23;
            v4 = 0;
            *((_QWORD *)v17 + 1) = v12;
            v23[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v12;
          }
        }
      }
    }
    while ( v6 != a1 );
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v24);
  v9 = v23[0];
  while ( v9 != (HOST_VMMONITOR_MAPPING_ENTRY *)v23 )
  {
    v18 = v9;
    v9 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v9;
    if ( *((_QWORD *)v18 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v18 + 9), *((_DWORD *)v18 + 16), v8);
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
      goto LABEL_27;
    v21 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v18 + 1);
    if ( *v21 != v18 )
      goto LABEL_27;
    *v21 = v20;
    *((_QWORD *)v20 + 1) = v21;
    v22 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v18 + 11);
    if ( v22 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v22);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v18, v7);
  }
  return v4;
}
