/*
 * XREFs of HalBuildScatterGatherListV2 @ 0x1403879B0
 * Callers:
 *     HalGetScatterGatherList @ 0x14038A6E0 (HalGetScatterGatherList.c)
 * Callees:
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpCalculateScatterGatherListSize @ 0x140387F80 (HalpCalculateScatterGatherListSize.c)
 *     KeInsertDeviceQueue @ 0x140388190 (KeInsertDeviceQueue.c)
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403886C0 (HalpAllocateAdapterCallbackV2.c)
 *     IoFreeAdapterChannelV2 @ 0x140388C50 (IoFreeAdapterChannelV2.c)
 *     HalpQueueMapBufferWorker @ 0x140497EF8 (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x1404D3844 (HalpDmaQueueAdapter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalBuildScatterGatherListV2(
        __int64 a1,
        struct _LIST_ENTRY *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        struct _LIST_ENTRY *a6,
        struct _LIST_ENTRY *a7,
        char a8,
        struct _KDEVICE_QUEUE_ENTRY *P,
        unsigned int a10)
{
  unsigned int v10; // r14d
  unsigned __int64 v11; // rsi
  int v15; // edi
  __int64 result; // rax
  char *v17; // r12
  char *v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // ebp
  int v21; // r8d
  unsigned int v22; // r8d
  char *v23; // rbx
  unsigned int v24; // r11d
  _QWORD *v25; // rsi
  __int64 v26; // r12
  unsigned __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // edi
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // r8
  ULONG v34; // esi
  char v35; // r12
  struct _KDEVICE_QUEUE_ENTRY *v36; // rbx
  struct _KDEVICE_QUEUE_ENTRY *v37; // rdi
  bool v38; // zf
  char v39; // r12
  struct _LIST_ENTRY *Flink; // rax
  char v41; // bp
  unsigned __int8 CurrentIrql; // r13
  __int64 v43; // rdx
  __int64 MapRegisters; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  int AdapterCallbackV2; // eax
  struct _KDEVICE_QUEUE_ENTRY *v48; // rax
  unsigned __int64 v49; // r8
  ULONG v50; // [rsp+40h] [rbp-48h] BYREF
  char *Pool2; // [rsp+48h] [rbp-40h] BYREF
  char *v53; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v54; // [rsp+A8h] [rbp+20h]

  v54 = a4;
  v10 = 0;
  v11 = a4;
  LODWORD(Pool2) = 0;
  v50 = 0;
  LODWORD(v53) = 0;
  if ( !a3 )
    return 3221225485LL;
  v15 = a5;
  result = HalpCalculateScatterGatherListSize(a1, a3, a4, a5, (__int64)&v53, (__int64)&Pool2, (__int64)&v50);
  if ( (int)result >= 0 )
  {
    if ( *(_BYTE *)(a1 + 440) )
    {
      v34 = v50;
      v35 = a8;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 445) )
        goto LABEL_5;
      v35 = a8;
      if ( a8 )
        goto LABEL_5;
      v34 = v50;
      if ( !v50 )
      {
        v11 = v54;
LABEL_5:
        if ( P )
        {
          if ( a10 >= (unsigned int)v53 )
          {
            v17 = (char *)P;
            Pool2 = (char *)P;
LABEL_8:
            v18 = v17 + 16;
            v19 = *(_QWORD *)(a3 + 32) + *(unsigned int *)(a3 + 44);
            *((_QWORD *)v17 + 1) = 0LL;
            v20 = v11 & 0xFFF;
            v21 = *(_DWORD *)(a3 + 40) - v11;
            v53 = v17 + 16;
            v22 = v19 + v21;
            v23 = v17 + 16;
            v24 = v15;
            v25 = (_QWORD *)(a3 + 48 + 8 * ((v11 - (v19 & 0xFFFFFFFFFFFFF000uLL)) >> 12));
            if ( v15 )
            {
              v26 = a3;
              do
              {
                v27 = *(_QWORD *)v26;
                v28 = v24;
                v29 = v24;
                if ( v22 <= v24 )
                  v28 = v22;
                v30 = v24;
                v24 = 0;
                if ( v27 )
                  v29 = v28;
                v31 = v30 - v28;
                if ( v27 )
                  v24 = v31;
                a5 = v24;
                if ( !*(_BYTE *)(a1 + 445) )
                {
                  if ( v26 == a3 )
                    v49 = v54;
                  else
                    v49 = *(_QWORD *)(v26 + 32) + v20;
                  HalpDmaFlushBuffer(v27, v26, v49, v29, a8, 0);
                  v18 = v53;
                  v24 = a5;
                }
                for ( ; v29; v20 = 0 )
                {
                  v32 = 4096 - v20;
                  v33 = v20 + (*v25 << 12);
                  *((_DWORD *)v23 + 2) = 4096 - v20;
                  *(_QWORD *)v23 = v33;
                  if ( 4096 - v20 > v29 )
                  {
                    *((_DWORD *)v23 + 2) = v29;
                    v32 = v29;
                  }
                  v29 -= v32;
                  if ( v23 != v18 )
                  {
                    if ( v33 == *((_QWORD *)v23 - 3) + *((unsigned int *)v23 - 4)
                      && ((*v25 ^ (*v25 - 1LL)) & 0xFFFFFFFFFFF00000uLL) == 0 )
                    {
                      *((_DWORD *)v23 - 4) += v32;
                      v23 -= 24;
                    }
                    v18 = v53;
                  }
                  v23 += 24;
                  ++v25;
                }
                v26 = *(_QWORD *)v26;
                if ( !v26 )
                  break;
                v20 = *(_DWORD *)(v26 + 44);
                v25 = (_QWORD *)(v26 + 48);
                v22 = *(_DWORD *)(v26 + 40);
              }
              while ( v24 );
              v17 = Pool2;
            }
            *(_DWORD *)v17 = (v23 - v17 - 16) / 24;
            if ( P )
              *((_QWORD *)v17 + 1) = 1LL;
            guard_dispatch_icall_no_overrides(a2, a2[2].Flink);
            return 0LL;
          }
          return 3221225507LL;
        }
        Pool2 = (char *)ExAllocatePool2(0x42uLL, (unsigned int)v53, 0x446C6148u);
        v17 = Pool2;
        if ( Pool2 )
          goto LABEL_8;
        return 3221225626LL;
      }
    }
    v36 = P;
    if ( P )
    {
      if ( a10 < (unsigned int)v53 )
        return 3221225507LL;
      LODWORD(P->DeviceListEntry.Flink) |= 1u;
    }
    else
    {
      v48 = (struct _KDEVICE_QUEUE_ENTRY *)ExAllocatePool2(0x42uLL, (unsigned int)v53, 0x446C6148u);
      v36 = v48;
      if ( !v48 )
        return 3221225626LL;
      LODWORD(v48->DeviceListEntry.Flink) = 0;
    }
    v36[1].DeviceListEntry.Blink = (struct _LIST_ENTRY *)v54;
    v36[5].DeviceListEntry.Flink = a6;
    v36[5].DeviceListEntry.Blink = a7;
    v36->DeviceListEntry.Blink = (struct _LIST_ENTRY *)a3;
    v36[1].SortKey = v15;
    v37 = v36 + 2;
    LOBYTE(v36[6].DeviceListEntry.Blink) = v35;
    *(_QWORD *)&v36->SortKey = 0LL;
    v36[6].DeviceListEntry.Flink = (struct _LIST_ENTRY *)a1;
    v38 = *(_BYTE *)(a1 + 440) == 0;
    v36[4].DeviceListEntry.Flink = a2;
    if ( !v38 )
      v34 = (unsigned int)Pool2;
    v39 = 0;
    *(_DWORD *)&v36[1].Inserted = v34;
    v36[3].DeviceListEntry.Blink = &v36->DeviceListEntry;
    Flink = a2[2].Flink;
    v41 = 0;
    v36[4].DeviceListEntry.Blink = Flink;
    *(_DWORD *)&v36[2].Inserted &= ~4u;
    v36[3].DeviceListEntry.Flink = (struct _LIST_ENTRY *)HalpAllocateAdapterCallbackV2;
    CurrentIrql = 0;
    v36[3].SortKey = v34;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      v41 = 1;
    }
    if ( !KeInsertDeviceQueue((PKDEVICE_QUEUE)(a1 + 184), v36 + 2) )
    {
      *(_DWORD *)(a1 + 248) = v34;
      *(_QWORD *)(a1 + 352) = v37;
      if ( v34 && (*(_BYTE *)(a1 + 440) || !*(_BYTE *)(a1 + 445)) )
      {
        if ( v34 > *(_DWORD *)(a1 + 232) )
        {
          *(_DWORD *)(a1 + 248) = 0;
          IoFreeAdapterChannelV2(a1);
          if ( v41 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
          v10 = -1073741670;
          ExFreePoolWithTag(v36, 0);
          return v10;
        }
        MapRegisters = HalpDmaAllocateMapRegisters(a1, v34);
        *(_QWORD *)(a1 + 240) = MapRegisters;
        if ( !MapRegisters )
        {
          HalpDmaQueueAdapter(a1);
          v39 = 1;
          HalpQueueMapBufferWorker(a1, v34);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 240) = 0LL;
        *(_DWORD *)(a1 + 248) = 0;
      }
      v45 = *(_QWORD *)(a1 + 432);
      if ( v45 )
        guard_dispatch_icall_no_overrides(v45, v43);
      if ( !v39 )
      {
        v46 = *(_QWORD *)(a1 + 240);
        *(_QWORD *)(a1 + 352) = v37;
        AdapterCallbackV2 = HalpAllocateAdapterCallbackV2(
                              v36[4].DeviceListEntry.Flink,
                              v36[4].DeviceListEntry.Blink,
                              v46,
                              v36[3].DeviceListEntry.Blink);
        if ( AdapterCallbackV2 != 2 )
        {
          if ( AdapterCallbackV2 != 3 )
            goto LABEL_54;
          *(_DWORD *)(a1 + 248) = 0;
        }
        IoFreeAdapterChannelV2(a1);
      }
    }
LABEL_54:
    if ( v41 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return v10;
  }
  return result;
}
