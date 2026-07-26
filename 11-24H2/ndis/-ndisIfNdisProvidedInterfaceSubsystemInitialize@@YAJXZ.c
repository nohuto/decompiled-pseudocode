/*
 * XREFs of ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x140148824
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x1400545B0 (NdisConvertNdisStatusToNtStatus.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1400719E0 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     NdisIfDeregisterProvider @ 0x1400C9100 (NdisIfDeregisterProvider.c)
 */

__int64 ndisIfNdisProvidedInterfaceSubsystemInitialize(void)
{
  int v0; // eax
  int v1; // ecx
  int v3; // ebx
  struct _NDIS_IF_PROVIDER_CHARACTERISTICS Src; // [rsp+20h] [rbp-38h] BYREF

  *((_DWORD *)&Src.Header + 1) = 0;
  Src.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryObject;
  Src.Header = (_NDIS_OBJECT_HEADER)2621824;
  Src.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))NetSetupKnobCollection::SetKnobInStore;
  *(_OWORD *)&Src.Reserved1 = 0LL;
  v0 = ndisIfRegisterProviderInternal(&Src, &qword_14011D530, &qword_14011D530);
  if ( v0 )
  {
    v1 = v0;
    return NdisConvertNdisStatusToNtStatus(v1);
  }
  Src.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryLoopbackObject;
  Src.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))NetSetupKnobCollection::SetKnobInStore;
  v3 = ndisIfRegisterProviderInternal(&Src, &qword_14011D528, &qword_14011D528);
  if ( v3 )
  {
    NdisIfDeregisterProvider(&qword_14011D530);
    qword_14011D530 = 0LL;
    v1 = v3;
    return NdisConvertNdisStatusToNtStatus(v1);
  }
  return 0LL;
}
