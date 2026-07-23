/*
 * XREFs of IoTranslateBusAddress @ 0x1405A1EA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     IopQueryResourceHandlerInterface @ 0x140A659A4 (IopQueryResourceHandlerInterface.c)
 *     IopFindResourceHandlerInfo @ 0x140A7DE64 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x140A904E8 (IopFindLegacyBusDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int v16; // r15d
  __int64 v18; // [rsp+20h] [rbp-51h]
  __int64 v19; // [rsp+28h] [rbp-49h]
  __int128 *v20; // [rsp+30h] [rbp-41h]
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  __int64 v22; // [rsp+48h] [rbp-29h] BYREF
  PULONG v23; // [rsp+50h] [rbp-21h]
  __int128 v24; // [rsp+58h] [rbp-19h] BYREF
  int v25; // [rsp+68h] [rbp-9h]
  __int128 v26; // [rsp+70h] [rbp-1h] BYREF
  int v27; // [rsp+80h] [rbp+Fh]

  v5 = 0;
  v23 = AddressSpace;
  v27 = 0;
  P = 0LL;
  v22 = 0LL;
  v25 = 0;
  v26 = 0LL;
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
  WORD1(v24) = v9;
  LOBYTE(v24) = v8;
  BYTE1(v24) = 3;
  *(PHYSICAL_ADDRESS *)((char *)&v24 + 4) = BusAddress;
  HIDWORD(v24) = 1;
  PpDevNodeLockTree(0LL);
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode((unsigned int)InterfaceType, BusNumber);
  LOBYTE(v11) = v24;
  for ( i = (_QWORD *)LegacyBusDeviceNode; i != IopRootDeviceNode; i = (_QWORD *)i[2] )
  {
    ResourceHandlerInfo = IopFindResourceHandlerInfo(1LL, i, v11, &v22, v18, v19, v20);
    if ( ResourceHandlerInfo )
    {
      if ( !v22 )
        continue;
      v14 = *(_QWORD **)(v22 + 24);
      goto LABEL_14;
    }
    if ( (int)IopQueryResourceHandlerInterface(1LL, i[4], v11, &P) >= 0 )
    {
      v14 = P;
LABEL_14:
      v20 = &v26;
      v19 = 0LL;
      v18 = 0LL;
      v16 = guard_dispatch_icall_no_overrides(v14[1], &v24);
      if ( !ResourceHandlerInfo )
      {
        guard_dispatch_icall_no_overrides(v14[1], v15);
        ExFreePoolWithTag(v14, 0);
      }
      if ( v16 < 0 )
      {
        PpDevNodeUnlockTree(0LL);
        return 0;
      }
      v25 = v27;
      v24 = v26;
      if ( v16 == 288 )
        break;
    }
    LOBYTE(v11) = v24;
  }
  PpDevNodeUnlockTree(0LL);
  if ( (unsigned __int8)v24 == 3 || (unsigned __int8)v24 == 7 )
  {
LABEL_26:
    *v23 = v5;
    *TranslatedAddress = *(PPHYSICAL_ADDRESS)((char *)&v24 + 4);
    return 1;
  }
  if ( (unsigned __int8)v24 == 1 )
  {
    v5 = 1;
    goto LABEL_26;
  }
  return 0;
}
