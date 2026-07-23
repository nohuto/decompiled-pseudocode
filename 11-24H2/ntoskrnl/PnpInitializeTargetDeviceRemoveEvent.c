/*
 * XREFs of PnpInitializeTargetDeviceRemoveEvent @ 0x1408B0638
 * Callers:
 *     PnpShutdownDevices @ 0x140718630 (PnpShutdownDevices.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408B079C (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x140A8BB2C (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall PnpInitializeTargetDeviceRemoveEvent(
        char *a1,
        size_t Size,
        PVOID Object,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        void *a11,
        __int64 a12,
        __int64 a13)
{
  size_t v13; // r15
  __int64 v17; // rbp
  unsigned int v18; // edi
  void *result; // rax
  GUID v20; // xmm0

  v13 = (unsigned int)Size;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  if ( Object )
    v17 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v17 = 0LL;
  v18 = *(unsigned __int16 *)(v17 + 40) >> 1;
  memset_0(a1, 0, v13);
  *((_QWORD *)a1 + 3) = a10;
  *((_DWORD *)a1 + 4) = a8;
  *((_DWORD *)a1 + 5) = a9;
  *((_QWORD *)a1 + 6) = a12;
  *((_QWORD *)a1 + 7) = a13;
  *((_DWORD *)a1 + 16) = 1;
  *((_DWORD *)a1 + 39) = 2 * v18 + 82;
  result = a11;
  *((_QWORD *)a1 + 18) = a11;
  *((_QWORD *)a1 + 20) = Object;
  *((_DWORD *)a1 + 34) = 1;
  if ( a6 )
    v20 = GUID_DEVICE_EJECT;
  else
    v20 = GUID_DEVICE_QUERY_AND_REMOVE;
  *(GUID *)(a1 + 120) = v20;
  if ( a5 )
    *((_DWORD *)a1 + 38) |= 2u;
  if ( a4 )
    *((_DWORD *)a1 + 38) |= 4u;
  if ( a7 )
    *((_DWORD *)a1 + 38) |= 8u;
  if ( v18 )
    result = memmove(a1 + 168, *(const void **)(v17 + 48), 2LL * v18);
  *(_WORD *)&a1[2 * v18 + 168] = 0;
  return result;
}
