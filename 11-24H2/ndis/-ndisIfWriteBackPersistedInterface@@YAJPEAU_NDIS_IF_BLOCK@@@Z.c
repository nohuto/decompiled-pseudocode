/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x14015A870
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140043BE0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1401478B8 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_d @ 0x1400658F0 (WPP_RECORDER_SF__guid_d.c)
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1401426CC (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015C360 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  _GUID *p_InterfaceGuid; // r14
  NTSTATUS inited; // ebx
  size_t v4; // r8
  ULONG v5; // r9d
  _NDIS_MEDIUM MediaType; // esi
  size_t v7; // r8
  ULONG v8; // r9d
  unsigned __int16 v9; // r9
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // esi
  size_t v12; // r8
  ULONG v13; // r9d
  ULONG Length; // ebx
  NTSTATUS v15; // esi
  HANDLE v16; // rbx
  size_t v17; // r8
  ULONG v18; // r9d
  unsigned __int16 v19; // r9
  ULONG v20; // ebp
  ULONG DataSize; // [rsp+28h] [rbp-40h]
  char v22[4]; // [rsp+30h] [rbp-38h]
  char v23[4]; // [rsp+30h] [rbp-38h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_BYTE *)qword_14011D088 + 96) )
    return 0LL;
  Handle = 0LL;
  p_InterfaceGuid = &a1->InterfaceGuid;
  inited = ndisIfOpenInterfaceRegistryKey((__int64)&a1->InterfaceGuid, (KRegKey *)&Handle, 2u, 3);
  if ( inited < 0 )
    goto LABEL_8;
  MediaType = a1->MediaType;
  DestinationString = 0LL;
  inited = RtlUnicodeStringInitWorker(&DestinationString, L"MediaType", v4, v5);
  if ( inited < 0 || (inited = KRegKey::SetValueUlong((KRegKey *)&Handle, &DestinationString, MediaType), inited < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 27;
LABEL_7:
      *(_DWORD *)v22 = inited;
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        v9,
        (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
        (__int64)p_InterfaceGuid,
        *(_DWORD *)v22);
    }
LABEL_8:
    if ( Handle )
      ZwClose(Handle);
    return (unsigned int)inited;
  }
  PhysicalMediumType = a1->PhysicalMediumType;
  DestinationString = 0LL;
  inited = RtlUnicodeStringInitWorker(&DestinationString, L"PhysicalMediaType", v7, v8);
  if ( inited < 0
    || (inited = KRegKey::SetValueUlong((KRegKey *)&Handle, &DestinationString, PhysicalMediumType), inited < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v9 = 28;
    goto LABEL_7;
  }
  Length = a1->ifPhysAddress.Length;
  DestinationString = 0LL;
  v15 = RtlUnicodeStringInitWorker(&DestinationString, L"CurrentAddress", v12, v13);
  if ( v15 < 0 )
  {
    v16 = Handle;
    goto LABEL_18;
  }
  DataSize = Length;
  v16 = Handle;
  v15 = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1->ifPhysAddress.Address, DataSize);
  if ( v15 >= 0 )
  {
    v20 = a1->PermanentPhysAddress.Length;
    DestinationString = 0LL;
    v15 = RtlUnicodeStringInitWorker(&DestinationString, L"PermanentAddress", v17, v18);
    if ( v15 < 0
      || (v15 = ZwSetValueKey(v16, &DestinationString, 0, 3u, a1->PermanentPhysAddress.Address, v20), v15 < 0) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v19 = 30;
      goto LABEL_20;
    }
    if ( v16 )
      ZwClose(v16);
    return 0LL;
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = 29;
LABEL_20:
    *(_DWORD *)v23 = v15;
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v19,
      (struct _GUID *)&WPP_84bd40d134543b4dc326a9a718d945dc_Traceguids,
      (__int64)p_InterfaceGuid,
      *(_DWORD *)v23);
  }
LABEL_21:
  if ( v16 )
    ZwClose(v16);
  return (unsigned int)v15;
}
