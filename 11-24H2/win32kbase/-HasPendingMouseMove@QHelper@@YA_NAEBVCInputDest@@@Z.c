/*
 * XREFs of ?HasPendingMouseMove@QHelper@@YA_NAEBVCInputDest@@@Z @ 0x14009471C
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x14018D208 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x14009483C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

char __fastcall QHelper::HasPendingMouseMove(QHelper *this, const struct CInputDest *a2)
{
  __int64 Queue; // rax
  char v3; // cl

  Queue = CInputDest::GetQueue(this, 2LL);
  v3 = 0;
  if ( Queue )
    return (*(_DWORD *)(Queue + 436) & 0x20) != 0;
  return v3;
}
