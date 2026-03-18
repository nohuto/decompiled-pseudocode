/*
 * XREFs of ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402228A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1401D6678 (-ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14021C218 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusDuplicateHandle(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rsi
  PVOID v2; // r14
  struct _KPROCESS *v3; // r15
  DXGGLOBAL *Global; // rax
  struct ADAPTER_RENDER **v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rax
  struct DXG_VMBUS_CHANNEL_BASE *v22; // rbx
  struct DXGKVMB_COMMAND_BASE *v23; // rcx
  void *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rbx
  PVOID v29; // [rsp+58h] [rbp-B0h] BYREF
  void *ProcessHandle; // [rsp+60h] [rbp-A8h] BYREF
  void *Handle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-90h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+80h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-78h] BYREF
  struct DXGKVMB_COMMAND_BASE *v36[2]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp-30h]
  struct _KAPC_STATE ApcState; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v39[144]; // [rsp+218h] [rbp+110h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  Handle = 0LL;
  v2 = 0LL;
  v29 = 0LL;
  v3 = 0LL;
  v33 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v5 = (struct ADAPTER_RENDER **)DXGGLOBAL::ReferenceAdapterByHostLuid(Global, *(struct _LUID *)(v1 + 24), &v33);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, (struct DXGADAPTER *const)v5, 0LL);
  if ( !v5 )
  {
    v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = *(int *)(v1 + 28);
    *(_QWORD *)(v10 + 32) = *(unsigned int *)(v1 + 24);
    WdLogGlobalForLineNumber = 14831;
LABEL_3:
    LODWORD(v11) = -1073741811;
    goto LABEL_14;
  }
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
  if ( v12 < 0 )
  {
    v17 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = *(int *)(v1 + 28);
    *(_QWORD *)(v17 + 32) = *(unsigned int *)(v1 + 24);
    WdLogGlobalForLineNumber = 14845;
    goto LABEL_3;
  }
  ClientId.UniqueProcess = *(HANDLE *)(v1 + 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ClientId.UniqueThread = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ProcessHandle = 0LL;
  v18 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  v11 = v18;
  if ( v18 >= 0 )
  {
    Object = 0LL;
    v20 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
    v3 = (struct _KPROCESS *)Object;
    v11 = v20;
    ZwClose(ProcessHandle);
    if ( (int)v11 >= 0 )
    {
      LODWORD(v11) = DxgkpCreateSharedObjectFromHostDesc(
                       v5[391],
                       (const unsigned __int8 *)v1,
                       (struct _LIST_ENTRY **)&v29);
      if ( (int)v11 >= 0 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(v3, &ApcState);
        LODWORD(v11) = ObInsertObject(v29, 0LL, *(_DWORD *)(v1 + 48), 0, 0LL, &Handle);
        KeUnstackDetachProcess(&ApcState);
        v29 = 0LL;
        if ( (int)v11 < 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 14918;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to create nt handle in guest process",
            14918LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 14886;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to create shared resource for guest",
          14886LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v2 = v29;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 40), v11);
      v21 = *(_QWORD *)(v1 + 40);
      WdLogGlobalForLineNumber = 14878;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reference process by handle for process id 0x%I64x, Status=0x%.8x",
        v21,
        v11,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 40), v18);
    v19 = *(_QWORD *)(v1 + 40);
    WdLogGlobalForLineNumber = 14869;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to open process handle for process id 0x%I64x, Status=0x%.8x",
      v19,
      v11,
      0LL,
      0LL,
      0LL);
  }
LABEL_14:
  while ( 1 )
  {
    v22 = (struct DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 210);
    *(_OWORD *)v36 = 0LL;
    v37 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v36, v22, 0x38u, 0LL, 0LL, 0LL);
    v23 = v36[0];
    if ( v36[0] )
      break;
    LODWORD(v11) = -1073741801;
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v36);
  }
  v24 = Handle;
  v25 = *(_QWORD *)(v1 + 32);
  *((_BYTE *)v36[0] + 12) = 1;
  *((_DWORD *)v23 + 3) &= 0x1FFu;
  *((_QWORD *)v23 + 4) = v25;
  *((_QWORD *)v23 + 6) = v24;
  *(_QWORD *)v23 = 0LL;
  *((_DWORD *)v23 + 2) = 0;
  *((_QWORD *)v23 + 2) = 1011LL;
  *((_DWORD *)v23 + 6) = v11;
  *((_DWORD *)v23 + 10) = 8;
  v26 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v22, (unsigned __int8 *)v36[1], v36[0], v37);
  if ( v26 >= 0 )
  {
    if ( (int)v11 >= 0 )
      goto LABEL_23;
  }
  else
  {
    v27 = v26;
    WdLogSingleEntry1(2LL, v26);
    WdLogGlobalForLineNumber = 13869;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBusSendCompleteTransaction failed: 0x%I64x",
      v27,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( Handle )
  {
    ObCloseHandle(Handle, 1);
  }
  else if ( v2 )
  {
    ObfDereferenceObject(v2);
  }
LABEL_23:
  if ( v3 )
    ObfDereferenceObject(v3);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v36);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  return 0;
}
