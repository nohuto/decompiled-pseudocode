/*
 * XREFs of RaidAdapterWmiDeferredRoutine @ 0x1400A5BA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorPortGetLogicalUnit @ 0x14001BCB0 (StorPortGetLogicalUnit.c)
 *     RaidFreeDeferredItem @ 0x14003D314 (RaidFreeDeferredItem.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

PSLIST_ENTRY __fastcall RaidAdapterWmiDeferredRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // dl
  struct _DEVICE_OBJECT *v5; // rbx
  __int64 LogicalUnit; // rax
  _DWORD *Pool; // rax
  _DWORD *v8; // rbp

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_BYTE *)(a2 + 32);
  if ( v4 == -1 )
  {
    v5 = (struct _DEVICE_OBJECT *)(a1 & -(__int64)((*(_BYTE *)(v2 + 104) & 4) != 0));
  }
  else
  {
    LogicalUnit = StorPortGetLogicalUnit(*(_QWORD *)(a1 + 64), v4, *(_BYTE *)(a2 + 33), *(_BYTE *)(a2 + 34));
    if ( !LogicalUnit || (*(_BYTE *)(LogicalUnit + 504) & 0x10) == 0 )
      return RaidFreeDeferredItem((union _SLIST_HEADER *)(v2 + 1392), a2);
    v5 = *(struct _DEVICE_OBJECT **)(LogicalUnit + 8);
  }
  if ( v5 )
  {
    Pool = (_DWORD *)RaidAllocatePool(64LL, *(unsigned int *)(a2 + 40), 1297572178LL, *(_QWORD *)(v2 + 8));
    v8 = Pool;
    if ( Pool )
    {
      memmove(Pool, (const void *)(a2 + 40), *(unsigned int *)(a2 + 40));
      v8[1] = IoWMIDeviceObjectToProviderId(v5);
      *((_QWORD *)v8 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v8) < 0 )
        ExFreePoolWithTag(v8, 0x4D576152u);
    }
  }
  return RaidFreeDeferredItem((union _SLIST_HEADER *)(v2 + 1392), a2);
}
