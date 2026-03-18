/*
 * XREFs of Endpoint_HaltedCompletionCode @ 0x140016470
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x140013E5C (Control_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140017A48 (Bulk_ProcessTransferEventWithED0.c)
 *     Endpoint_TransferEventHandler @ 0x140021020 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_HaltedCompletionCode(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (!_bittest64((const signed __int64 *)(*(_QWORD *)a1 + 736LL), 0x3Eu) || (_DWORD)a2 != 199)
    && ((*(_QWORD *)(*(_QWORD *)a1 + 744LL) & 0x20) == 0 || (_DWORD)a2 != 198) )
  {
    if ( (unsigned int)a2 > 0x24 )
      return 0;
    v2 = 0x150000045CLL;
    if ( !_bittest64(&v2, a2) )
      return 0;
  }
  return result;
}
