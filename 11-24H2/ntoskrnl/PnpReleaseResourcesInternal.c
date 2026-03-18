/*
 * XREFs of PnpReleaseResourcesInternal @ 0x140A8D290
 * Callers:
 *     IopReleaseResources @ 0x1407244C4 (IopReleaseResources.c)
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopCallArbiter @ 0x140A8D4E4 (IopCallArbiter.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A8D634 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopFindLegacyBusDeviceNode @ 0x140A93D38 (IopFindLegacyBusDeviceNode.c)
 */

__int64 __fastcall PnpReleaseResourcesInternal(_QWORD *a1)
{
  unsigned int *v2; // rbx
  __int64 v3; // r11
  unsigned int v4; // esi
  unsigned int *v5; // r15
  unsigned int v6; // r13d
  unsigned int v7; // eax
  _QWORD *LegacyBusDeviceNode; // rdi
  int v9; // ecx
  _QWORD *v10; // r9
  _QWORD *v11; // rax
  _QWORD *i; // r12
  __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD *v15; // rcx
  _QWORD **v16; // rax
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v22; // [rsp+30h] [rbp-69h] BYREF
  _QWORD **v23; // [rsp+38h] [rbp-61h]
  int v24; // [rsp+40h] [rbp-59h]
  __int64 v25; // [rsp+48h] [rbp-51h]
  __int64 v26; // [rsp+50h] [rbp-49h]
  __int64 v27; // [rsp+58h] [rbp-41h]
  __int64 v28; // [rsp+60h] [rbp-39h]
  __int64 v29; // [rsp+78h] [rbp-21h]
  __int128 v30; // [rsp+90h] [rbp-9h]
  __int128 v31; // [rsp+A0h] [rbp+7h]
  __int128 v32; // [rsp+B0h] [rbp+17h]
  int v33; // [rsp+100h] [rbp+67h]
  unsigned int v34; // [rsp+108h] [rbp+6Fh]
  unsigned int v35; // [rsp+110h] [rbp+77h]

  memset_0(&v22, 0, 0x60uLL);
  v2 = (unsigned int *)a1[52];
  v3 = 0LL;
  v23 = &v22;
  v24 = 0;
  v22 = &v22;
  v26 = a1[4];
  v25 = 0LL;
  v27 = 4LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( (v2 || (v2 = (unsigned int *)a1[68]) != 0LL) && (v4 = *v2) != 0 )
  {
    v5 = v2 + 1;
  }
  else
  {
    v4 = 1;
    v2 = 0LL;
    v5 = 0LL;
  }
  v34 = 0;
  do
  {
    if ( v2 )
    {
      v6 = *v5;
      v7 = v5[1];
      v35 = v7;
      if ( *v5 != -1 )
        goto LABEL_12;
    }
    else
    {
      v7 = v3;
      v35 = v3;
    }
    v6 = 1;
LABEL_12:
    if ( a1 == IopRootDeviceNode )
      LegacyBusDeviceNode = a1;
    else
      LegacyBusDeviceNode = (_QWORD *)a1[2];
    v9 = 1;
    v33 = 1;
    while ( LegacyBusDeviceNode )
    {
      if ( LegacyBusDeviceNode == IopRootDeviceNode && v9 )
      {
        LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(v6, v7);
        if ( LegacyBusDeviceNode == v10 && !v6 )
          LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(1LL, 0LL);
        v33 = v3;
      }
      v11 = LegacyBusDeviceNode + 61;
      for ( i = (_QWORD *)LegacyBusDeviceNode[61]; i != v11; i = (_QWORD *)*i )
      {
        if ( i[3] != v3 )
        {
          v33 = v3;
          v22 = i + 5;
          v23 = (_QWORD **)(i + 5);
          i[5] = &v22;
          i[6] = &v22;
          IopCallArbiter(i, 0LL);
          v13 = i[3];
          v31 = 0LL;
          v32 = 0LL;
          v30 = 0LL;
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v13 + 8), 2LL, 0LL, v14);
          v15 = v22;
          v16 = v23;
          if ( (_QWORD **)v22[1] != &v22 || *v23 != &v22 )
            __fastfail(3u);
          *v23 = v22;
          v3 = 0LL;
          v15[1] = v16;
          v23 = &v22;
          v22 = &v22;
          v11 = LegacyBusDeviceNode + 61;
        }
      }
      LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
      v9 = v33;
      v7 = v35;
    }
    if ( v4 > 1 )
    {
      v17 = v5[3];
      v18 = v5 + 4;
      if ( v17 )
      {
        v19 = v17;
        do
        {
          v20 = (unsigned int)v3;
          if ( *(_BYTE *)v18 == 5 )
            v20 = v18[1];
          v18 = (unsigned int *)((char *)v18 + v20 + 20);
          --v19;
        }
        while ( v19 );
      }
      v5 = v18;
    }
    ++v34;
  }
  while ( v34 < v4 );
  return IopWriteAllocatedResourcesToRegistry(a1, 0LL, 0LL);
}
