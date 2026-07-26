/*
 * XREFs of NdisOpenConfigurationKeyByName @ 0x140075C50
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007FCE0 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x14009C300 (NdisOpenConfigurationKeyByIndex.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E6DB0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ndisOpenProtocolSubkey @ 0x140075E90 (ndisOpenProtocolSubkey.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __stdcall NdisOpenConfigurationKeyByName(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING SubKeyName,
        PNDIS_HANDLE SubKeyHandle)
{
  _QWORD *v5; // rbx
  __int64 v8; // r15
  int v9; // eax
  int v10; // edx
  __int64 Pool2; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rax
  NTSTATUS v16; // eax
  char v17; // [rsp+28h] [rbp-60h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-58h] BYREF

  v5 = ConfigurationHandle;
  v8 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v17 = (char)ConfigurationHandle;
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      24,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      v17);
  }
  if ( (*(_DWORD *)(v5[2] + 16LL) & 2) == 0 || v5[4] || (v9 = ndisOpenProtocolSubkey(v5), *Status = v9, v9 >= 0) )
  {
    Pool2 = ExAllocatePool2(64LL, SubKeyName->Length + 176LL, 1751336014);
    v8 = Pool2;
    if ( Pool2 )
    {
      *Status = 0;
      v12 = Pool2 + 40;
      *(_QWORD *)(Pool2 + 16) = Pool2 + 40;
      *(_WORD *)(Pool2 + 40) = 266;
      *(_WORD *)(*(_QWORD *)(Pool2 + 16) + 2LL) = 40;
      memmove((void *)(Pool2 + 176), SubKeyName->Buffer, SubKeyName->Length);
      *(_DWORD *)(v12 + 32) = 20;
      *(_QWORD *)(v12 + 24) = ndisSaveParameters;
      v13 = v5[2];
      *(_DWORD *)(v12 + 56) = 0;
      *(_QWORD *)(v12 + 80) = 0LL;
      *(_DWORD *)(v12 + 88) = 0;
      *(_QWORD *)(v12 + 96) = 0LL;
      v14 = *(_QWORD *)(v13 + 8);
      v15 = (void *)v5[4];
      *(_QWORD *)(v12 + 8) = v14;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = v15;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = SubKeyName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwOpenKey((PHANDLE)(v8 + 32), 0xBu, &ObjectAttributes);
      *Status = v16;
      if ( v16 >= 0 )
      {
        *(_QWORD *)(v8 + 8) = v5[1];
        *(_QWORD *)(v8 + 24) = 0LL;
        *SubKeyHandle = (PVOID)v8;
      }
    }
    else
    {
      *Status = -1073741670;
      *SubKeyHandle = 0LL;
    }
  }
  if ( *Status < 0 && v8 )
    ExFreePoolWithTag((PVOID)v8, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      8,
      25,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)v5);
  }
}
