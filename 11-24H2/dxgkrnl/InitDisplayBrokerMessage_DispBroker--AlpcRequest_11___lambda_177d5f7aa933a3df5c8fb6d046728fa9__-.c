/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__&DxgkSampleDisplayState_ @ 0x14006CD84
 * Callers:
 *     ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401BDFB8 (-DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z.c)
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkSampleDisplayState @ 0x14018B414 (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9___DxgkSampleDisplayState_(
        _WORD *a1,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  __int64 result; // rax
  __int16 v8; // si
  unsigned int v9; // ecx

  memset(a1, 0, 0x58uLL);
  *((_DWORD *)a1 + 10) = 11;
  *((_DWORD *)a1 + 11) = 1;
  result = DxgkSampleDisplayState(a1 + 24);
  if ( (int)result >= 0 )
  {
    a1[2] = 0x8000;
    v8 = a4 + 88;
    a1[1] = v8;
    *a1 = v8 - 40;
    *((_DWORD *)a1 + 20) = **(_DWORD **)a3;
    *((_DWORD *)a1 + 21) = **(_DWORD **)(a3 + 8);
    v9 = **(_DWORD **)(a3 + 8);
    if ( v9 )
      memmove(a1 + 44, **(const void ***)(a3 + 16), v9);
    return 0LL;
  }
  return result;
}
