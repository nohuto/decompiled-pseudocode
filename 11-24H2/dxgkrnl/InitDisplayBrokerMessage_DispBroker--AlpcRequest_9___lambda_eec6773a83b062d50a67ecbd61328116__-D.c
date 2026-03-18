/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116__&DxgkSampleDisplayState_ @ 0x14006CCF8
 * Callers:
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401BE18C (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkSampleDisplayState @ 0x14018B414 (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_9___lambda_eec6773a83b062d50a67ecbd61328116___DxgkSampleDisplayState_(
        _DWORD *a1,
        const void *a2)
{
  __int64 result; // rax

  memset(a1, 0, 0x68uLL);
  a1[10] = 9;
  a1[11] = 1;
  result = DxgkSampleDisplayState(a1 + 12);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 15, a2, 0x10uLL);
    a1[22] = 0;
    a1[24] = 0;
    a1[23] = 0;
    result = 0LL;
    *a1 = 6815808;
    *((_WORD *)a1 + 2) = 0x8000;
    a1[20] = 1;
  }
  return result;
}
