/*
 * XREFs of CreateNvmeAdapter @ 0x1400CB1EC
 * Callers:
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 * Callees:
 *     RaidCreateDeferredQueue @ 0x14006AFD4 (RaidCreateDeferredQueue.c)
 *     NvmeAdapterPowerInitialize @ 0x14012F574 (NvmeAdapterPowerInitialize.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaCreateMiniport @ 0x140184A84 (RaCreateMiniport.c)
 */

__int64 __fastcall CreateNvmeAdapter(_DWORD *a1, __int64 a2, char a3)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  __int64 result; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  PIO_WORKITEM WorkItem; // rax

  memset_0(a1, 0, 0x590uLL);
  a1[14] = -1;
  *a1 = 1314275652;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
  *((_QWORD *)a1 + 19) = CacheAwareRundownProtection;
  if ( !CacheAwareRundownProtection )
    return 3221225495LL;
  RaCreateMiniport(a1 + 42);
  RaidCreateDeferredQueue((union _SLIST_HEADER *)a1 + 38);
  RaidCreateDeferredQueue((union _SLIST_HEADER *)a1 + 46);
  InitializeSListHead((PSLIST_HEADER)a1 + 69);
  *((_BYTE *)a1 + 416) ^= (*((_BYTE *)a1 + 416) ^ (a3 << 6)) & 0x40;
  if ( a3 )
  {
    ExInitializeResourceLite((PERESOURCE)(a1 + 294));
    v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 1);
    a1[326] = 0;
    *((_QWORD *)a1 + 162) = a1 + 322;
    *((_QWORD *)a1 + 161) = a1 + 322;
    *((_BYTE *)a1 + 1280) = 1;
    WorkItem = IoAllocateWorkItem(v8);
    *((_QWORD *)a1 + 164) = WorkItem;
    if ( !WorkItem )
      return 3221225495LL;
  }
  result = NvmeAdapterPowerInitialize(a1, a2);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)a1 + 416) |= 1u;
    a1[21] = 2;
  }
  return result;
}
