/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x140077B6C
 * Callers:
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z @ 0x1400788CC (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014B30 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035A50 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140058008 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078940 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401EE29C (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___(
        _QWORD *a1,
        _DWORD *a2)
{
  unsigned int v4; // r15d
  HOST_VMMONITOR_MAPPING_ENTRY **v5; // rcx
  int v6; // r8d
  _QWORD *v7; // rsi
  _DWORD *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r8
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rbx
  volatile __int32 *v16; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v18; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v19; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v21[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v22[48]; // [rsp+50h] [rbp-30h] BYREF

  v21[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v21[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v4 = -1073741275;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22, a1 + 2, 1);
  v7 = (_QWORD *)*a1;
  while ( v7 != a1 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    if ( v8[4] == *a2 && v8[5] == a2[1] )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
        McTemplateK0xqpp_EtwWriteTransfer(
          (_DWORD)v5,
          (unsigned int)&RemoteMonitorRemoveMapping,
          v6,
          *((_QWORD *)v8 + 2),
          v8[6],
          *((_QWORD *)v8 + 6),
          *((_QWORD *)v8 + 4));
      v9 = *(_QWORD *)v8;
      if ( *(_DWORD **)(*(_QWORD *)v8 + 8LL) != v8
        || (v10 = (_QWORD *)*((_QWORD *)v8 + 1), (_DWORD *)*v10 != v8)
        || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = v21[0], *((HOST_VMMONITOR_MAPPING_ENTRY ***)v21[0] + 1) != v21) )
      {
LABEL_23:
        __fastfail(3u);
      }
      *(HOST_VMMONITOR_MAPPING_ENTRY **)v8 = v21[0];
      v5 = v21;
      *((_QWORD *)v8 + 1) = v21;
      v4 = 0;
      *((_QWORD *)v11 + 1) = v8;
      v21[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v8;
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22);
  v14 = v21[0];
  while ( v14 != (HOST_VMMONITOR_MAPPING_ENTRY *)v21 )
  {
    v15 = v14;
    v14 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v14;
    if ( *((_QWORD *)v15 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v15 + 9), *((_DWORD *)v15 + 16), v13);
    }
    else
    {
      v16 = (volatile __int32 *)*((_QWORD *)v15 + 7);
      if ( v16 )
      {
        _InterlockedExchange(v16, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v15 + 7) + 8LL), 0LL);
      }
    }
    v17 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v15;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_23;
    v18 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v15 + 1);
    if ( *v18 != v15 )
      goto LABEL_23;
    *v18 = v17;
    *((_QWORD *)v17 + 1) = v18;
    v19 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v15 + 11);
    if ( v19 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v19);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v15, v12);
  }
  return v4;
}
