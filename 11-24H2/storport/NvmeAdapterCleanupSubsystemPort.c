/*
 * XREFs of NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0
 * Callers:
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400CDE2C (NvmeAdapterCreateAddSubsystemPort.c)
 *     NvmeAdapterRemoveHostGateway @ 0x1400D65E0 (NvmeAdapterRemoveHostGateway.c)
 *     NvmeAdapterRemoveSubsystemPortMiniport @ 0x1400D6958 (NvmeAdapterRemoveSubsystemPortMiniport.c)
 *     NvmeAdapterRemoveSubsystemPort @ 0x14019BB24 (NvmeAdapterRemoveSubsystemPort.c)
 * Callees:
 *     Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline @ 0x1400CB6AC (Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0qjzsh_EtwWriteTransfer @ 0x1400CBD40 (McTemplateK0qjzsh_EtwWriteTransfer.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400CF800 (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterSendControlRemoveSubsystemPort @ 0x1400D6FA0 (NvmeAdapterSendControlRemoveSubsystemPort.c)
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 */

void __fastcall NvmeAdapterCleanupSubsystemPort(__int64 a1, char a2, PVOID *a3)
{
  char *v3; // rbx
  char *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = (char *)*a3;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 632), 1u);
  while ( 1 )
  {
    v7 = (char *)*a3;
    v8 = (char *)*a3 + 608;
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    if ( (_QWORD *)v9[1] != v8 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    --*((_DWORD *)v7 + 156);
    v11 = v9[9];
    v14 = v9 - 8;
    if ( (v11 & 8) == 0 )
    {
      v9[9] = v11 | 8;
      *((_DWORD *)v9 + 126) = 3;
      if ( (unsigned int)Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline() )
      {
        LOBYTE(v13) = 1;
        NvmeAdapterDisconnectControllerInternal(a1, v9 - 8, (char *)*a3 + 60, v13);
      }
      else
      {
        if ( (byte_14017146A & 2) != 0 )
          McTemplateK0qjzsh_EtwWriteTransfer(
            v12,
            &EventNVMeoFDisconnectController,
            a1 + 1032,
            *(_DWORD *)(a1 + 56),
            a1 + 1032,
            *(const wchar_t **)(a1 + 1016),
            (const char *)*a3 + 60,
            *((_WORD *)v9 - 30));
        NvmeAdapterStopFabricNvmeControllerOperations(v9 - 8, 0LL);
        NvmeAdapterCleanupFabricNvmeController(v9 - 8);
        NvmeAdapterDeleteNvmeController(&v14);
      }
    }
  }
  ExReleaseResourceLite((PERESOURCE)(v7 + 632));
  KeLeaveCriticalRegion();
  if ( a2 )
    NvmeAdapterSendControlRemoveSubsystemPort(a1, *a3);
  ExDeleteResourceLite((PERESOURCE)((char *)*a3 + 632));
  ExFreeCacheAwareRundownProtection(*((PEX_RUNDOWN_REF_CACHE_AWARE *)*a3 + 5));
  ExFreePoolWithTag(*a3, 0x464E6152u);
  *a3 = 0LL;
}
