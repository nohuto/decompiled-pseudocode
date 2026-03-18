/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1400777F0
 * Callers:
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x14007885C (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014B30 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035A50 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140058008 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078940 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1401EE29C (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // rdi
  _DWORD *v6; // r12
  _QWORD *v7; // rbx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r8
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v16; // rbx
  volatile __int32 *v17; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v19; // rax
  DXGKVMB_SINGLEPACKETCONTEXT *v20; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v22[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v23[48]; // [rsp+50h] [rbp-30h] BYREF

  v22[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v22;
  v22[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v22;
  v4 = -1073741275;
  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v23, a1 + 2, 1);
  v5 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v6 = *(_DWORD **)(a2 + 8);
    do
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      if ( *((_DWORD *)v7 + 4) == *v6 && *((_DWORD *)v7 + 5) == v6[1] )
      {
        v8 = *((_DWORD *)v7 + 6);
        if ( v8 == **(_DWORD **)(a2 + 16) && v7[4] == **(_QWORD **)a2 )
        {
          v9 = v7[6];
          if ( v9 == **(_QWORD **)(a2 + 24) )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
              McTemplateK0xqpp_EtwWriteTransfer(v8, (unsigned int)&RemoteMonitorRemoveMapping, v9, v7[2], v8, v9, v7[4]);
            v10 = *v7;
            if ( *(_QWORD **)(*v7 + 8LL) != v7
              || (v11 = (_QWORD *)v7[1], (_QWORD *)*v11 != v7)
              || (*v11 = v10,
                  *(_QWORD *)(v10 + 8) = v11,
                  v12 = v22[0],
                  *((HOST_VMMONITOR_MAPPING_ENTRY ***)v22[0] + 1) != v22) )
            {
LABEL_27:
              __fastfail(3u);
            }
            *v7 = v22[0];
            v7[1] = v22;
            v4 = 0;
            *((_QWORD *)v12 + 1) = v7;
            v22[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v7;
          }
        }
      }
    }
    while ( v5 != a1 );
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v23);
  v15 = v22[0];
  while ( v15 != (HOST_VMMONITOR_MAPPING_ENTRY *)v22 )
  {
    v16 = v15;
    v15 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v15;
    if ( *((_QWORD *)v16 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v16 + 9), *((_DWORD *)v16 + 16), v14);
    }
    else
    {
      v17 = (volatile __int32 *)*((_QWORD *)v16 + 7);
      if ( v17 )
      {
        _InterlockedExchange(v17, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v16 + 7) + 8LL), 0LL);
      }
    }
    v18 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v16;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v16 + 8LL) != v16 )
      goto LABEL_27;
    v19 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v16 + 1);
    if ( *v19 != v16 )
      goto LABEL_27;
    *v19 = v18;
    *((_QWORD *)v18 + 1) = v19;
    v20 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v16 + 11);
    if ( v20 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v20);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v16, v13);
  }
  return v4;
}
