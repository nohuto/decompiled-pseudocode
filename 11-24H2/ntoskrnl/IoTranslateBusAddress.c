/*
 * XREFs of IoTranslateBusAddress @ 0x1405A4F60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 *     IopQueryResourceHandlerInterface @ 0x140A6C444 (IopQueryResourceHandlerInterface.c)
 *     IopFindResourceHandlerInfo @ 0x140A83344 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x140A93D38 (IopFindLegacyBusDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  int v5; // edi
  ULONG v8; // eax
  __int16 v9; // cx
  __int64 LegacyBusDeviceNode; // rax
  __int64 v11; // r8
  _QWORD *i; // rsi
  char ResourceHandlerInfo; // r12
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // r15d
  __int64 v19; // [rsp+20h] [rbp-51h]
  __int64 v20; // [rsp+28h] [rbp-49h]
  __int128 *v21; // [rsp+30h] [rbp-41h]
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  __int64 v23; // [rsp+48h] [rbp-29h] BYREF
  PULONG v24; // [rsp+50h] [rbp-21h]
  __int128 v25; // [rsp+58h] [rbp-19h] BYREF
  int v26; // [rsp+68h] [rbp-9h]
  __int128 v27; // [rsp+70h] [rbp-1h] BYREF
  int v28; // [rsp+80h] [rbp+Fh]

  v5 = 0;
  v24 = AddressSpace;
  v28 = 0;
  P = 0LL;
  v23 = 0LL;
  v26 = 0;
  v27 = 0LL;
  if ( KeGetCurrentIrql() || !IopRootDeviceNode )
  {
    *TranslatedAddress = BusAddress;
    return 1;
  }
  v8 = *AddressSpace;
  if ( *AddressSpace )
  {
    if ( v8 != 1 )
      return 0;
    v9 = 1;
  }
  else
  {
    v9 = 0;
    LOBYTE(v8) = 3;
  }
  WORD1(v25) = v9;
  LOBYTE(v25) = v8;
  BYTE1(v25) = 3;
  *(PHYSICAL_ADDRESS *)((char *)&v25 + 4) = BusAddress;
  HIDWORD(v25) = 1;
  PpDevNodeLockTree(0LL);
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode((unsigned int)InterfaceType, BusNumber);
  LOBYTE(v11) = v25;
  for ( i = (_QWORD *)LegacyBusDeviceNode; i != IopRootDeviceNode; i = (_QWORD *)i[2] )
  {
    ResourceHandlerInfo = IopFindResourceHandlerInfo(1LL, i, v11, &v23, v19, v20, v21);
    if ( ResourceHandlerInfo )
    {
      if ( !v23 )
        continue;
      v14 = *(_QWORD **)(v23 + 24);
      goto LABEL_14;
    }
    if ( (int)IopQueryResourceHandlerInterface(1LL, i[4], v11, &P) >= 0 )
    {
      v14 = P;
LABEL_14:
      v21 = &v27;
      v20 = 0LL;
      v19 = 0LL;
      v17 = guard_dispatch_icall_no_overrides(v14[1], &v25, 0LL, 0LL);
      if ( !ResourceHandlerInfo )
      {
        guard_dispatch_icall_no_overrides(v14[1], v15, v11, v16);
        ExFreePoolWithTag(v14, 0);
      }
      if ( v17 < 0 )
      {
        PpDevNodeUnlockTree(0LL);
        return 0;
      }
      v26 = v28;
      v25 = v27;
      if ( v17 == 288 )
        break;
    }
    LOBYTE(v11) = v25;
  }
  PpDevNodeUnlockTree(0LL);
  if ( (unsigned __int8)v25 == 3 || (unsigned __int8)v25 == 7 )
  {
LABEL_26:
    *v24 = v5;
    *TranslatedAddress = *(PPHYSICAL_ADDRESS)((char *)&v25 + 4);
    return 1;
  }
  if ( (unsigned __int8)v25 == 1 )
  {
    v5 = 1;
    goto LABEL_26;
  }
  return 0;
}
