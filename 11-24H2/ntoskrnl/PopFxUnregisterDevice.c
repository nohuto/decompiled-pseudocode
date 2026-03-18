/*
 * XREFs of PopFxUnregisterDevice @ 0x140A74BB4
 * Callers:
 *     PoFxUnregisterDevice @ 0x140A74850 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140A74A30 (PopFxUnregisterDeviceOrWait.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PoFxActivateComponent @ 0x1403B6160 (PoFxActivateComponent.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404A7950 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxAssignDeviceToDevNode @ 0x1404B8C0C (PopFxAssignDeviceToDevNode.c)
 *     PopFxDestroyDeviceDpm @ 0x1404D9358 (PopFxDestroyDeviceDpm.c)
 *     PopPlUnregisterDevice @ 0x1404D9A00 (PopPlUnregisterDevice.c)
 *     PopFxComponentRelationsCleanup @ 0x1405D0A1C (PopFxComponentRelationsCleanup.c)
 *     PopFxDeviceRelationsCleanup @ 0x1405D0EBC (PopFxDeviceRelationsCleanup.c)
 *     PopFxRemoveDevice @ 0x1405D1DE4 (PopFxRemoveDevice.c)
 *     PopPluginUnregisterDevice @ 0x1405D25F0 (PopPluginUnregisterDevice.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x1407563DC (PopDiagTraceFxDeviceUnregistration.c)
 *     PopPepUnregisterDevice @ 0x140A74D78 (PopPepUnregisterDevice.c)
 *     PopSystemIrpCompletion @ 0x140B6F8E0 (PopSystemIrpCompletion.c)
 */

__int64 __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // eax
  unsigned int i; // edi
  unsigned int v4; // edi
  struct _KEVENT *v5; // rdi
  unsigned int j; // edx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  unsigned int k; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(BugCheckParameter2 + 864) & 1) == 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter2 + 868);
    for ( i = 0; i < v2; ++i )
    {
      PoFxActivateComponent(BugCheckParameter2, i, 2);
      v2 = *(_DWORD *)(BugCheckParameter2 + 868);
    }
    v4 = 0;
    if ( v2 )
    {
      do
        KeWaitForSingleObject(
          (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * v4++) + 104LL),
          Executive,
          0,
          0,
          0LL);
      while ( v4 < *(_DWORD *)(BugCheckParameter2 + 868) );
    }
  }
  v5 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v5 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2);
    PopDiagTraceFxDeviceUnregistration((__int64)v5, BugCheckParameter2);
    PopFxAssignDeviceToDevNode((__int64)v5, 0LL);
  }
  for ( j = 0; j < *(_DWORD *)(BugCheckParameter2 + 868); ++j )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * j) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v7 = *(_DWORD *)(BugCheckParameter2 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v7 & 0xFFFFFBFF, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x400) != 0 )
    PopSystemIrpCompletion(
      0LL,
      v5[11].Header.WaitListHead.Blink,
      *((_QWORD *)&v5[11].Header.WaitListHead.Blink[12].Blink + 9 * SBYTE2(v5[11].Header.WaitListHead.Blink[4].Flink)));
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, 0x20u);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 864), 0, 0) & 1) == 0 )
  {
    PopFxDeviceRelationsCleanup(BugCheckParameter2);
    for ( k = 0; k < *(_DWORD *)(BugCheckParameter2 + 868); ++k )
      PopFxComponentRelationsCleanup(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * k));
  }
  PopPepUnregisterDevice(*(PVOID *)(BugCheckParameter2 + 56));
  v12 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v12 )
    PopPluginUnregisterDevice(v12, *(_QWORD *)(BugCheckParameter2 + 72), v10, v11);
  PopPlUnregisterDevice(BugCheckParameter2);
  if ( v5 )
    KeSetEvent(v5 + 4, 0, 0);
  result = *(unsigned int *)(BugCheckParameter2 + 864);
  if ( (result & 1) != 0 )
    return PopFxDestroyDeviceDpm((__int64)v5, BugCheckParameter2);
  return result;
}
