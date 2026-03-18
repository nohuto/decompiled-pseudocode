/*
 * XREFs of TR_SetClientAddressesForOffload @ 0x14004B464
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003A4EC (UsbDevice_HandleAddAndDropEndpointsState.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x14002F6F4 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     CommonBuffer_AcquireCommonBufferFromPhysicalAddress @ 0x14003EF5C (CommonBuffer_AcquireCommonBufferFromPhysicalAddress.c)
 *     TR_ReleaseSegment @ 0x14004B3EC (TR_ReleaseSegment.c)
 */

__int64 __fastcall TR_SetClientAddressesForOffload(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  _QWORD *v10; // r14
  unsigned int v11; // ebx
  _QWORD **v12; // rdx

  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v10 = CommonBuffer_AcquireCommonBufferFromPhysicalAddress(v9, a2, a3, a1, 828862034);
  if ( v10 && (v8 = CommonBuffer_AcquireCommonBufferFromPhysicalAddress(v9, a4, a5, a1, 828862034)) != 0LL )
  {
    v11 = 0;
    TR_ReleaseSegment(a1, *(_QWORD **)(a1 + 176));
    *(_QWORD *)(a1 + 176) = 0LL;
    v12 = (_QWORD **)(a1 + 208);
    if ( *v12 != v12 )
      XilCoreCommonBuffer_ReleaseBuffers(v9 + 88, v12);
    *(_DWORD *)(a1 + 20) = a3;
    *(_QWORD *)(a1 + 176) = v10;
    *(_QWORD *)(a1 + 240) = v8;
  }
  else
  {
    v11 = -1073741670;
    if ( v10 )
      CommonBuffer_ReleaseBuffer(v9, (__int64)v10);
    if ( v8 )
      CommonBuffer_ReleaseBuffer(v9, (__int64)v8);
  }
  return v11;
}
