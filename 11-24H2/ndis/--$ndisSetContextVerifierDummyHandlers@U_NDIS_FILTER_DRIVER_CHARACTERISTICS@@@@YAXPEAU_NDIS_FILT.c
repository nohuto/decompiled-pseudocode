/*
 * XREFs of ??$ndisSetContextVerifierDummyHandlers@U_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@@YAXPEAU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@Z @ 0x1400A2718
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall ndisSetContextVerifierDummyHandlers<_NDIS_FILTER_DRIVER_CHARACTERISTICS>(
        _QWORD *a1))(NDIS_HANDLE NdisFilterHandle, PNET_BUFFER_LIST NetBufferList, ULONG SendCompleteFlags)
{
  void (__fastcall *result)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG); // rax

  if ( a1[14] )
  {
    if ( !a1[15] )
    {
      result = SendNetBufferListsCompleteDummyHandler;
      a1[15] = SendNetBufferListsCompleteDummyHandler;
    }
  }
  else if ( a1[15] )
  {
    result = (void (__fastcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))SendNetBufferListsDummyHandler;
    a1[14] = SendNetBufferListsDummyHandler;
  }
  if ( a1[17] )
  {
    if ( !a1[18] )
    {
      result = ReturnNetBufferListsDummyHandler;
      a1[18] = ReturnNetBufferListsDummyHandler;
    }
  }
  else if ( a1[18] )
  {
    result = (void (__fastcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))IndicateReceiveNetBufferListsDummyHandler;
    a1[17] = IndicateReceiveNetBufferListsDummyHandler;
  }
  return result;
}
