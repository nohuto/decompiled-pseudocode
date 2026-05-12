/*
 * XREFs of NvmeControllerRemove @ 0x1400F3DCC
 * Callers:
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 *     NvmeAdapterStorMQControllerRemoveWorker @ 0x1400D9840 (NvmeAdapterStorMQControllerRemoveWorker.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     NvmeControllerAdminQueuesFreeResources @ 0x1400EA548 (NvmeControllerAdminQueuesFreeResources.c)
 *     NvmeControllerDeleteAsyncEventContext @ 0x1400EC958 (NvmeControllerDeleteAsyncEventContext.c)
 *     NvmeControllerDeletePendingIoQueueContext @ 0x1400ECB00 (NvmeControllerDeletePendingIoQueueContext.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F1320 (NvmeControllerIoQueuesFreeResources.c)
 *     NvmeControllerPowerUninitialize @ 0x1400F2D00 (NvmeControllerPowerUninitialize.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F3814 (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 *     NvmeFreeHostMemoryBuffer @ 0x1400F8BE0 (NvmeFreeHostMemoryBuffer.c)
 */

__int64 __fastcall NvmeControllerRemove(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // esi
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  bool v24; // zf
  unsigned int v25; // ebp
  int v26; // eax
  signed __int32 v28[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned int *v29; // [rsp+20h] [rbp-28h]
  unsigned int v30; // [rsp+50h] [rbp+8h] BYREF
  int v31; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 968) & 0xFFFFFFFFFFFFFFFEuLL;
  v30 = 0;
  v31 = 0;
  *(_QWORD *)(a1 + 968) = v2;
  NvmeControllerPowerUninitialize(a1, 0);
  if ( *(_QWORD *)(a1 + 1200) )
    NvmeFreeHostMemoryBuffer(a1);
  v6 = *(_QWORD *)(a1 + 592);
  v7 = 500;
  v8 = 64;
  if ( v6 && *(_DWORD *)(v6 + 88) )
    v7 = 64;
  v9 = *(_QWORD *)(a1 + 1048);
  if ( v9 )
  {
    v4 = *(unsigned __int8 *)(v9 + 15);
    if ( (_BYTE)v4 )
    {
      if ( (unsigned int)v4 >= 0x40 )
        v8 = *(unsigned __int8 *)(v9 + 15);
      v7 = 100 * v8;
    }
  }
  NvmeControllerIoQueuesFreeResources(a1, v4, v5);
  NvmeControllerAdminQueuesFreeResources(a1, v10, v11);
  NvmeControllerDeleteAsyncEventContext(a1);
  v12 = *(void **)(a1 + 912);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x54496152u);
    *(_QWORD *)(a1 + 912) = 0LL;
  }
  NvmeControllerDeletePendingIoQueueContext(a1);
  v13 = *(void **)(a1 + 1232);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x52436152u);
    *(_QWORD *)(a1 + 1232) = 0LL;
  }
  v14 = *(void **)(a1 + 1056);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x52436152u);
    *(_QWORD *)(a1 + 1056) = 0LL;
  }
  v15 = *(void **)(a1 + 1248);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x52436152u);
    *(_QWORD *)(a1 + 1248) = 0LL;
  }
  v16 = *(void **)(a1 + 1256);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x52436152u);
    *(_QWORD *)(a1 + 1256) = 0LL;
  }
  v17 = *(void **)(a1 + 1240);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x52436152u);
    *(_QWORD *)(a1 + 1240) = 0LL;
  }
  v18 = *(void **)(a1 + 1264);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x52436152u);
    *(_QWORD *)(a1 + 1264) = 0LL;
  }
  v19 = *(void **)(a1 + 1272);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x52436152u);
    *(_QWORD *)(a1 + 1272) = 0LL;
  }
  v20 = *(void **)(a1 + 1064);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x52436152u);
    *(_QWORD *)(a1 + 1064) = 0LL;
  }
  if ( (*(_QWORD *)(a1 + 968) & 0x8000LL) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 1048);
    if ( v21 && !*(_BYTE *)(v21 + 110) )
      return v1;
    if ( v7 <= 100 * (unsigned int)*(unsigned __int8 *)(v21 + 110) )
      v7 = 100 * *(unsigned __int8 *)(v21 + 110);
  }
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    v29 = &v30;
    NvmeControllerQueryStorMQProperty(a1, 0x14u, 4LL, 0);
    v22 = v30;
  }
  else
  {
    v22 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL);
  }
  v23 = v22 & 0xFFFF3FFF | 0x4000;
  v24 = *(_BYTE *)(a1 + 1728) == 1;
  v30 = v23;
  if ( v24 )
  {
    v29 = &v30;
    NvmeControllerSetStorMQProperty(a1, 20LL, 4LL);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL) = v23;
    _InterlockedOr(v28, 0);
  }
  v25 = 0;
  if ( !v7 )
    goto LABEL_47;
  do
  {
    if ( *(_BYTE *)(a1 + 1728) == 1 )
    {
      v29 = (unsigned int *)&v31;
      NvmeControllerQueryStorMQProperty(a1, 0x1Cu, 4LL, 0);
      LOBYTE(v26) = v31;
    }
    else
    {
      v26 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
      v31 = v26;
    }
    if ( (v26 & 0xC) == 8 )
      break;
    StorDelayExecution(0x2710u);
    ++v25;
  }
  while ( v25 < v7 );
  if ( v25 >= v7 )
  {
LABEL_47:
    v1 = -2147483631;
    *(_QWORD *)(a1 + 968) |= 0x200000uLL;
  }
  return v1;
}
