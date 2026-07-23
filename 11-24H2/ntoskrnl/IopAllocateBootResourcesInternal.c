/*
 * XREFs of IopAllocateBootResourcesInternal @ 0x140722E38
 * Callers:
 *     IopReleaseResources @ 0x140722054 (IopReleaseResources.c)
 *     IopAllocateBootResources @ 0x140722DB0 (IopAllocateBootResources.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopFreeReqList @ 0x14071F4BC (IopFreeReqList.c)
 *     IopBootAllocation @ 0x140722FC8 (IopBootAllocation.c)
 *     PnpCmResourcesToIoResources @ 0x140731264 (PnpCmResourcesToIoResources.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     IopResourceRequirementsListToReqList @ 0x140A65214 (IopResourceRequirementsListToReqList.c)
 *     PnpBuildCmResourceList @ 0x140A8FE84 (PnpBuildCmResourceList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateBootResourcesInternal(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rsi
  int v10; // edi
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  int v16; // [rsp+2Ch] [rbp-34h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  PVOID v18; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+58h] [rbp-8h]

  memset_0(&v15, 0, 0x40uLL);
  if ( a2 )
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = PnpCmResourcesToIoResources(v6, a3, 1LL);
  v9 = (void *)v8;
  if ( v8 )
  {
    v16 = a1;
    v17 = v8;
    v15 = a2;
    v10 = IopResourceRequirementsListToReqList(&v15, &v18);
    if ( v10 >= 0 )
    {
      if ( !v18 )
      {
LABEL_20:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_21;
      }
      v10 = IopBootAllocation();
      if ( v10 >= 0 )
      {
        PipSetDevNodeFlags(v7, 128LL);
        PnpBuildCmResourceList(&v15, 0LL);
        v10 = v21;
        if ( v21 >= 0 )
        {
          if ( *(_QWORD *)(v7 + 544) )
          {
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
          }
          else
          {
            *(_QWORD *)(v7 + 544) = P;
          }
          v11 = *(void **)(v7 + 552);
          if ( v11 )
          {
            ExFreePoolWithTag(v11, 0);
            *(_QWORD *)(v7 + 552) = 0LL;
          }
          v10 = 0;
          *(_QWORD *)(v7 + 552) = v20;
        }
      }
    }
  }
  else
  {
    v10 = -1073741823;
  }
  if ( v18 )
    IopFreeReqList(v18);
  if ( v9 )
    goto LABEL_20;
LABEL_21:
  if ( v10 < 0 )
  {
    v12 = *(void **)(v7 + 544);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *(_QWORD *)(v7 + 544) = 0LL;
    }
    v13 = *(void **)(v7 + 552);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v7 + 552) = 0LL;
    }
  }
  return (unsigned int)v10;
}
