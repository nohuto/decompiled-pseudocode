/*
 * XREFs of IopChildToRootTranslation @ 0x140A9031C
 * Callers:
 *     PnpBuildCmResourceList @ 0x140A8FE84 (PnpBuildCmResourceList.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopFindLegacyBusDeviceNode @ 0x140A904E8 (IopFindLegacyBusDeviceNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopChildToRootTranslation(
        _QWORD *LegacyBusDeviceNode,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebp
  char v10; // r14
  _DWORD *Pool2; // rdi
  _DWORD *v13; // rsi
  BOOL v14; // r11d
  _QWORD *v15; // r9
  __int64 *i; // rcx
  __int64 v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  bool v21; // [rsp+98h] [rbp+20h]

  v6 = 0;
  v10 = 0;
  v21 = a4 == 1;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x14uLL, 0x20207050u);
  if ( !Pool2 )
    return 3221225626LL;
  v13 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x14uLL, 0x20207050u);
  if ( !v13 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  *(_OWORD *)Pool2 = *(_OWORD *)a5;
  Pool2[4] = *(_DWORD *)(a5 + 16);
  if ( !LegacyBusDeviceNode )
    LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
  LOBYTE(v14) = 1;
  while ( 1 )
  {
LABEL_8:
    if ( !LegacyBusDeviceNode || v10 )
    {
      *a6 = Pool2;
      goto LABEL_27;
    }
    if ( LegacyBusDeviceNode != IopRootDeviceNode || v21 )
      break;
    v21 = v14;
    LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
    if ( LegacyBusDeviceNode == v15 && !a2 )
      LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(v14, 0LL);
  }
  for ( i = (__int64 *)LegacyBusDeviceNode[63]; ; i = (__int64 *)*i )
  {
    if ( i == LegacyBusDeviceNode + 63 )
      goto LABEL_24;
    if ( *((_BYTE *)i + 16) == *(_BYTE *)a5 )
      break;
  }
  v17 = i[3];
  if ( !v17 )
  {
LABEL_24:
    LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
    goto LABEL_8;
  }
  v18 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v17 + 8), Pool2);
  v6 = v18;
  v19 = Pool2;
  if ( v18 >= 0 )
  {
    LOBYTE(v14) = 1;
    Pool2 = v13;
    if ( v18 == 288 )
      v10 = 1;
    v13 = v19;
    goto LABEL_24;
  }
  ExFreePoolWithTag(Pool2, 0);
LABEL_27:
  ExFreePoolWithTag(v13, 0);
  return v6;
}
