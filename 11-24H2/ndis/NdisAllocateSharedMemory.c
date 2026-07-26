/*
 * XREFs of NdisAllocateSharedMemory @ 0x14005CCE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ??0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z @ 0x14005CF10 (--0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z.c)
 *     ndisAllocateSharedMemoryInternal @ 0x14005D040 (ndisAllocateSharedMemoryInternal.c)
 *     WPP_RECORDER_SF_dq @ 0x140063790 (WPP_RECORDER_SF_dq_ea_140063790.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x14008D6E0 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ndisGetSharedMemoryAllocationDetails @ 0x14008F010 (ndisGetSharedMemoryAllocationDetails.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401352C0 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 *     ??0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x140166980 (--0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 *     ?SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z @ 0x140167700 (-SetMacAddress@NdisDmaAllocationHistogramStopwatch@@QEAAXQEBE@Z.c)
 */

NDIS_STATUS __stdcall NdisAllocateSharedMemory(
        NDIS_HANDLE NdisHandle,
        PNDIS_SHARED_MEMORY_PARAMETERS SharedMemoryParameters,
        PNDIS_HANDLE pAllocationHandle)
{
  int SharedMemoryAllocationDetails; // eax
  bool v7; // dl
  int v8; // edx
  NDIS_STATUS v9; // esi
  __int64 v10; // rdx
  unsigned int PreferredNode; // eax
  NDIS_STATUS v12; // ebx
  int v14; // [rsp+40h] [rbp-178h] BYREF
  __int128 v15; // [rsp+48h] [rbp-170h]
  __int64 v16; // [rsp+58h] [rbp-160h]
  _BYTE v17[32]; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v18[16]; // [rsp+80h] [rbp-138h] BYREF
  __int128 v19; // [rsp+90h] [rbp-128h]
  unsigned int v20; // [rsp+A4h] [rbp-114h]
  char v21[208]; // [rsp+B0h] [rbp-108h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x37u,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)NdisHandle,
      SharedMemoryParameters->Length);
  *pAllocationHandle = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)&ndisGlobalStatistics);
  NdisDmaAllocationHistogramStopwatch::NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v17);
  v16 = 0LL;
  v15 = 0LL;
  SharedMemoryAllocationDetails = ndisGetSharedMemoryAllocationDetails(NdisHandle, SharedMemoryParameters, &v14);
  NdisAllocateSharedMemoryTelemetry::NdisAllocateSharedMemoryTelemetry(
    (NdisAllocateSharedMemoryTelemetry *)v18,
    v7,
    SharedMemoryParameters,
    SharedMemoryAllocationDetails);
  v9 = *(_DWORD *)v21;
  if ( *(_DWORD *)v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        21,
        56,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        v21[0]);
      v9 = *(_DWORD *)v21;
    }
    NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry((NdisAllocateSharedMemoryTelemetry *)v18);
    NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v17);
    return v9;
  }
  else
  {
    v10 = v16;
    if ( v16 )
      NdisDmaAllocationHistogramStopwatch::SetMacAddress(
        (NdisDmaAllocationHistogramStopwatch *)v17,
        (const unsigned __int8 *const)(v16 + 120));
    PreferredNode = SharedMemoryParameters->PreferredNode;
    if ( v18[0] || v18[1] )
    {
      if ( (_QWORD)v15 )
        v19 = *(_OWORD *)(v15 + 4008);
      v20 = PreferredNode;
    }
    if ( v14 == 1 )
    {
      v12 = ndisAllocateSharedMemoryInternal(&v14, v10, SharedMemoryParameters, pAllocationHandle);
      *(_DWORD *)v21 = v12;
    }
    else
    {
      v12 = -1073741823;
      *(_DWORD *)v21 = -1073741823;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        21,
        57,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        v12,
        (char)*pAllocationHandle);
      v12 = *(_DWORD *)v21;
    }
    NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry((NdisAllocateSharedMemoryTelemetry *)v18);
    NdisDmaAllocationHistogramStopwatch::~NdisDmaAllocationHistogramStopwatch((NdisDmaAllocationHistogramStopwatch *)v17);
    return v12;
  }
}
