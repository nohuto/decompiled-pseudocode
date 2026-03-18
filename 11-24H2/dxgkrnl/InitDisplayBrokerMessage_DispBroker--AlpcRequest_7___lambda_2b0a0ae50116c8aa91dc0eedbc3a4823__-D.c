/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__&DxgkSampleDisplayState_ @ 0x14006CC50
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkSampleDisplayState @ 0x14018B414 (DxgkSampleDisplayState.c)
 *     _lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_::operator() @ 0x1401BD4FC (_lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_--operator().c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823___DxgkSampleDisplayState_(
        _WORD *a1,
        const void *a2,
        __int64 a3,
        __int16 a4)
{
  __int64 result; // rax
  __int16 v9; // di

  memset(a1, 0, 0x60uLL);
  *((_DWORD *)a1 + 10) = 7;
  *((_DWORD *)a1 + 11) = 1;
  result = DxgkSampleDisplayState(a1 + 24);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 30, a2, 0x10uLL);
    v9 = a4 + 96;
    a1[2] = 0x8000;
    a1[1] = v9;
    *a1 = v9 - 40;
    return lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_::operator()(a3, a1);
  }
  return result;
}
