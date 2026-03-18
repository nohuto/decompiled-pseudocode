/*
 * XREFs of IoTranslateBusAddress @ 0x1405A17F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     IopQueryResourceHandlerInterface @ 0x140A69C64 (IopQueryResourceHandlerInterface.c)
 *     IopFindResourceHandlerInfo @ 0x140A7FE94 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x140A8F248 (IopFindLegacyBusDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int v15; // r15d
  __int64 v17; // [rsp+20h] [rbp-51h]
  __int64 v18; // [rsp+28h] [rbp-49h]
  __int128 *v19; // [rsp+30h] [rbp-41h]
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  __int64 v21; // [rsp+48h] [rbp-29h] BYREF
  PULONG v22; // [rsp+50h] [rbp-21h]
  __int128 v23; // [rsp+58h] [rbp-19h]
  int v24; // [rsp+68h] [rbp-9h]
  __int128 v25; // [rsp+70h] [rbp-1h] BYREF
  int v26; // [rsp+80h] [rbp+Fh]

  v5 = 0;
  v22 = AddressSpace;
  v26 = 0;
  P = 0LL;
  v21 = 0LL;
  v24 = 0;
  v25 = 0LL;
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
  WORD1(v23) = v9;
  LOBYTE(v23) = v8;
  BYTE1(v23) = 3;
  *(PHYSICAL_ADDRESS *)((char *)&v23 + 4) = BusAddress;
  HIDWORD(v23) = 1;
  PpDevNodeLockTree(0LL);
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode((unsigned int)InterfaceType, BusNumber);
  LOBYTE(v11) = v23;
  for ( i = (_QWORD *)LegacyBusDeviceNode; i != IopRootDeviceNode; i = (_QWORD *)i[2] )
  {
    ResourceHandlerInfo = IopFindResourceHandlerInfo(1LL, i, v11, &v21, v17, v18, v19);
    if ( ResourceHandlerInfo )
    {
      if ( !v21 )
        continue;
      v14 = *(_QWORD **)(v21 + 24);
      goto LABEL_14;
    }
    if ( (int)IopQueryResourceHandlerInterface(1LL, i[4], v11, &P) >= 0 )
    {
      v14 = P;
LABEL_14:
      v19 = &v25;
      v18 = 0LL;
      v17 = 0LL;
      v15 = guard_dispatch_icall_no_overrides(v14[1]);
      if ( !ResourceHandlerInfo )
      {
        guard_dispatch_icall_no_overrides(v14[1]);
        ExFreePoolWithTag(v14, 0);
      }
      if ( v15 < 0 )
      {
        PpDevNodeUnlockTree(0LL);
        return 0;
      }
      v24 = v26;
      v23 = v25;
      if ( v15 == 288 )
        break;
    }
    LOBYTE(v11) = v23;
  }
  PpDevNodeUnlockTree(0LL);
  if ( (unsigned __int8)v23 == 3 || (unsigned __int8)v23 == 7 )
  {
LABEL_26:
    *v22 = v5;
    *TranslatedAddress = *(PPHYSICAL_ADDRESS)((char *)&v23 + 4);
    return 1;
  }
  if ( (unsigned __int8)v23 == 1 )
  {
    v5 = 1;
    goto LABEL_26;
  }
  return 0;
}
