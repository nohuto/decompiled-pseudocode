/*
 * XREFs of IopAllocateLegacyBootResources @ 0x140C25F58
 * Callers:
 *     PipProcessStartPhase2 @ 0x1408AFCBC (PipProcessStartPhase2.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopAllocateBootResources @ 0x140722DB0 (IopAllocateBootResources.c)
 *     IopCombineCmResourceList @ 0x1407230B4 (IopCombineCmResourceList.c)
 *     IopCreateCmResourceList @ 0x140723168 (IopCreateCmResourceList.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateLegacyBootResources(__int64 a1, int a2)
{
  int v3; // r14d
  char *v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  _DWORD *v10; // rsi
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  if ( IopInitHalDeviceNode )
  {
    if ( IopInitHalResources )
    {
      v12 = 0LL;
      v4 = IopCreateCmResourceList(a1, a1, a2, &v12);
      if ( v4 )
      {
        v5 = v12;
        if ( v12 )
          ExFreePoolWithTag(IopInitHalResources, 0);
        IopInitHalResources = v5;
        v6 = *(void **)(IopInitHalDeviceNode + 544);
        PipSetDevNodeFlags(IopInitHalDeviceNode, 0x40u);
        IopAllocateBootResources(1u, *(_QWORD *)(IopInitHalDeviceNode + 32));
        v7 = *(void **)(IopInitHalDeviceNode + 544);
        if ( v7 && v7 != v6 )
        {
          ExFreePoolWithTag(v7, 0);
          *(_QWORD *)(IopInitHalDeviceNode + 544) = 0LL;
        }
        *(_QWORD *)(IopInitHalDeviceNode + 544) = IopCombineCmResourceList(v6, v4);
        if ( v6 )
        {
          ExFreePoolWithTag(v6, 0);
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
  }
  v8 = 0LL;
LABEL_12:
  v9 = IopInitReservedResourceList;
  while ( v9 )
  {
    v10 = (_DWORD *)v9[2];
    if ( v10[1] == v3 && v10[2] == a2 )
    {
      IopAllocateBootResources(4u, v9[1]);
      if ( !v9[1] )
        ExFreePoolWithTag(v10, 0);
      if ( v8 )
        *v8 = *v9;
      else
        IopInitReservedResourceList = (PVOID)*v9;
      ExFreePoolWithTag(v9, 0);
      if ( !v8 )
        goto LABEL_12;
      v9 = (_QWORD *)*v8;
    }
    else
    {
      v8 = v9;
      v9 = (_QWORD *)*v9;
    }
  }
  return 0LL;
}
