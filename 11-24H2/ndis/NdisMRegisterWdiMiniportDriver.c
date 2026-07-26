/*
 * XREFs of NdisMRegisterWdiMiniportDriver @ 0x140146FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryAcquire@KRundownBase@@QEAA_NXZ @ 0x140003508 (-TryAcquire@KRundownBase@@QEAA_NXZ.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ??1KRundownHolder@@QEAA@XZ @ 0x140146BB8 (--1KRundownHolder@@QEAA@XZ.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x140146BE4 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140146D54 (-ReferenceWdi@@YA_NXZ.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x140147398 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 */

NDIS_STATUS __stdcall NdisMRegisterWdiMiniportDriver(
        DRIVER_OBJECT *DriverObject,
        PCUNICODE_STRING RegistryPath,
        NDIS_MINIPORT_DRIVER_CONTEXT NdisDriverContext,
        NDIS_MINIPORT_DRIVER_CHARACTERISTICS *MiniportDriverCharacteristics,
        NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *MiniportWdiCharacteristics,
        NDIS_MINIPORT_DRIVER_HANDLE *NdisMiniportDriverHandle)
{
  NDIS_MINIPORT_DRIVER_HANDLE *v6; // r15
  NDIS_STATUS v7; // ebx
  size_t Size; // rdi
  NDIS_MINIPORT_DRIVER_HANDLE *v12; // rsi
  int v13; // edi
  NDIS_MINIPORT_DRIVER_HANDLE v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  KRundownHolder RunRef; // [rsp+48h] [rbp-18h] BYREF

  v6 = NdisMiniportDriverHandle;
  v7 = 0;
  Size = 160LL;
  *NdisMiniportDriverHandle = 0LL;
  NdisMiniportDriverHandle = (NDIS_MINIPORT_DRIVER_HANDLE *)ExAllocatePool2(66LL, 160LL, 1749250125LL);
  v12 = NdisMiniportDriverHandle;
  if ( !NdisMiniportDriverHandle )
  {
    v7 = -1073741670;
    goto LABEL_15;
  }
  if ( MiniportDriverCharacteristics->Header.Size < 0xA0u )
    Size = MiniportDriverCharacteristics->Header.Size;
  memmove(NdisMiniportDriverHandle, MiniportDriverCharacteristics, Size);
  if ( !ReferenceWdi() )
  {
LABEL_6:
    v7 = -1073741637;
    goto LABEL_15;
  }
  ndisMpHookGetHook(&v16);
  if ( !v16 )
  {
    DereferenceWdi();
    KRundownHolder::~KRundownHolder(&RunRef);
    goto LABEL_6;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, DRIVER_OBJECT *, PCUNICODE_STRING, NDIS_MINIPORT_DRIVER_CONTEXT, NDIS_MINIPORT_DRIVER_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_HANDLE *))(v16 + 8))(
          *(_QWORD *)v16,
          DriverObject,
          RegistryPath,
          NdisDriverContext,
          MiniportDriverCharacteristics,
          MiniportWdiCharacteristics,
          v6);
  if ( !v13 )
  {
    v14 = *v6;
    if ( *v6 )
    {
      *((_DWORD *)v14 + 224) = 1;
      *((_BYTE *)v14 + 900) = 1;
      NdisMiniportDriverHandle = 0LL;
      wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)v14 + 44, v12);
      KRundownBase::TryAcquire((KRundownBase *)(v16 - 16));
      KRundownHolder::~KRundownHolder(&RunRef);
      goto LABEL_15;
    }
    v13 = -1073741823;
  }
  if ( v16 )
  {
    --RunRef.m_count;
    v16 = 0LL;
    ExReleaseRundownProtection(&RunRef.m_rundown->m_rundown);
  }
  DereferenceWdi();
  KRundownHolder::~KRundownHolder(&RunRef);
  v7 = v13;
LABEL_15:
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&NdisMiniportDriverHandle, 0LL);
  return v7;
}
