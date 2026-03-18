/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3__&DxgkSampleDisplayState_ @ 0x14006CD5C
 * Callers:
 *     ?SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ @ 0x1401BBA80 (-SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x140067D78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkSampleDisplayState @ 0x1401891C4 (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3___DxgkSampleDisplayState_(
        _DWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  memset(a1, 0, 0x60uLL);
  a1[10] = 5;
  a1[11] = 1;
  result = DxgkSampleDisplayState(a1 + 12);
  if ( (int)result >= 0 )
  {
    *a1 = 6291512;
    *((_WORD *)a1 + 2) = 0x8000;
    if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      a1[20] = *(_DWORD *)(*(_QWORD *)a3 + 19108LL);
    a1[21] = *(_DWORD *)(*(_QWORD *)a3 + 19112LL);
    result = 0LL;
    a1[22] = *(_DWORD *)(*(_QWORD *)a3 + 19116LL);
  }
  return result;
}
